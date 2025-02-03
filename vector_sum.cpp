#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define all(v) v.begin(), v.end()
#define forn(i,n) for(int i=0;i<n;i++)

vi input_vector(){
    cout << "Now enter the vector values u want :"<<endl;
    int n;
    cin >> n;
    vi v(n);
    forn(i, n) {
        cin >> v[i];
    }
    return v;   
}

void print_vi(vi &v){
    forn(i,v.size())
    {
        cout << v[i] << " ";
    }cout<<"\n";
}

int vect_sum(vi &v) {
    int sum = 0;
    forn(i, v.size()) {
        sum += v[i];
    }
    return sum;
}

double mean(vi &v) {
    int sum = vect_sum(v);
    return (double)sum / v.size();
}

// Function to calculate the median of the vector
double median(vi &v) {
    sort(all(v));  // Sort the vector
    int n = v.size();
    if (n % 2 == 0) {
        return (v[n / 2 - 1] + v[n / 2]) / 2.0;  // Average of middle two elements
    } else {
        return v[n / 2];  // Middle element
    }
}

void solve(){
    vi v=input_vector();
    print_vi(v);
    
    int ans=vect_sum(v);
    cout <<"Sum is : "<<ans << endl;
    cout << "Mean is : " << mean(v) << endl; 
    cout << "Median is :" << median(v) << endl;

}

int main(){
   solve();
   //cout << check_sort();
    //clock_vector();
    return 0;
    
}





// void clock_vector(){// hw correct thiss code
//     int n;
//     cout << "Enter no of value u want to enter .";
//     cin>>n;
//     vi v(n);
//      cout << "Now enter the vector values u want :"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>v[i];
//     }
//     for(int k=0;k<2;k++){//k%=v.size
//         int temp=v[n-1];
//         for (int i = n - 1; i > 0; i--) {//for (int i = 0; i < v.size()-1; i++)
//             v[i] = v[i - 1];//v[i+1]=v[i];
//         }
//         v[0]=temp;
//     }
//     int k=2;
//     int temp=v[k];

//     for (int i = 0; i < n; i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
    
// }

// }
// bool check_asc(){
//     //forn(i,v.size()-1)
//     {
//         v[i+1]<v[i]
//         {
//             false;
//         }
//     }
//     return true;
// }
// bool check_des(){}
// bool chee(vi &v){
//     return check_asc(v) ||
// }
// bool check_sort(){
//     int n;
//     int sum=0;
//     cout << "Enter no of value u want to enter .";
//     cin>>n;
//     vector<int> v(n);
//     //reverse(v.begin,v.end);

//     cout << "Now enter the vector values u want :"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>v[i];
//     }
//     for(int i=0;i<v.size()-1;i++){
//         if(v[i]>v[i+1] ){
//             return false;
//         }
//     }
//     return true;

//     bool flag;
//      flag = (v[0] > v[1]) ? 1:0;
//     for(int i=0;i<v.size()-1;i++){
//         if(flag && v[i] < v[i+1]){
//             return false;
//         }else if(!flag && v[i] > v[i+1]){
//             return false;
//         }
//     }
//     return true;
// }