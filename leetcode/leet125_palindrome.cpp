#include<iostream>
using namespace std;

bool solve(int i,string & s){// will not work for "A man, a plan, a canal: Panama"
    if(i>=s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]){
        return false;
    }
    solve(i+1,s);
}

bool solve2(int i, int j, string &s) {//
        while (i < j && !isalnum(s[i])) {
            i++;
        }
        while (i < j && !isalnum(s[j])) {
            j--; 
        }
        
        if (i >= j) return true;
        
        if (tolower(s[i]) != tolower(s[j])) {
            return false;
        }
        
        return solve2(i + 1, j - 1, s);  
}
bool isPalindrome(string s) {
    return solve2(0, s.size() - 1, s); 
}

bool isAlphaN(char ch){
    if((ch >= 0 && ch <= 9) || (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
        return true;
    }
    return false;
}
bool solve3(string s){
    int st=0,end=s.length()-1;
    while(st < end){
        if(!isAlphaN(s[st])){
            st++;continue;
        }
        if(!isAlphaN(s[end])){
            end--; continue;
        }
        if(tolower(s[st]) != tolower(s[end])){
            return false;
        }
        st++; end--;
    }
    return true;
}

int main(){
    string s="madam";
    string s2="A man, a plan, a canal: Panama";
    cout << solve(0,s2) << endl;
    cout << isPalindrome(s2) << endl;
    cout << solve3(s2) << endl;
    return 0;
}