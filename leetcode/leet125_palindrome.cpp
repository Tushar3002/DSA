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

int main(){
    string s="madam";
    string s2="A man, a plan, a canal: Panama";
    cout << solve(0,s2) << endl;
    cout << isPalindrome(s2) << endl;
    return 0;
}