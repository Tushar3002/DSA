//problems/get-maximum-in-generated-array/

#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define all(v) v.begin(), v.end()
#define forn(i,n) for(int i=0;i<n;i++)

// vi input_vector(){
//     int n;
//     cout << "Now enter the vector values u want :"<<endl;
//     cin >> n;
//     vi v(n);
//     forn(i, n) {
//         cin >> v[i];
//     }
//     return v;
    
// }

void print_vi(vi &v){
    forn(i,v.size())
    {
        cout << v[i] << " ";
    }cout<<"\n";
}

// int p1(int n){
//     int n;  
//     int temp;
//     int max_e=1;
//     if(n<2){
//         return n;
//     }
//     vi v[(n+3)/2];
//     // v[0]=0;
//     // v[1]=1;
//     for(int i=2;i<=n;i++){
//         temp=(i%2) ? v[i/2] + v[i/2+1] : v[i/2];
//         if(i<=(n+1)/2){
//             v[i]=temp;
//         }
//         max_e=max(max_e,temp);
            
//         //temp=(i%2) ? v[i/2] + v[i/2+1] : v[i/2];
//         // if(i%2){
//         //     max_e=max(max_e,v[i]);
//         // }
//         //
//     }
//     //return *max_element(v.begin(),v.end());
//     return max_e;
// }
int getMaximumGenerated(int n) {
    if (n == 0) return 0;  // Special case for n = 0
    
    vector<int> nums(n + 1);
    nums[0] = 0;
    
    // Only set nums[1] if n >= 1
    if (n >= 1) {
        nums[1] = 1;
    }

    int max_value = 1;  // We already know nums[1] = 1 if n >= 1

    // Generate the rest of the array for indices 2 to n
    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0) {
            nums[i] = nums[i / 2];
        } else {
            nums[i] = nums[i / 2] + nums[i / 2 + 1];
        }
        max_value = max(max_value, nums[i]);  // Track the maximum value
    }
    print_vi(nums);
    return max_value;
    
}//1710
// int getMaximumGenerated2(int n) {
//     if (n == 0) return 0;
//     if (n == 1) return 1;

//     int prev = 1;  // Corresponds to nums[1]
//     int max_e = 1;  // Maximum value so far

//     for (int i = 2; i <= n; i++) {
//         int curr;
//         if (i % 2 == 0) {
//             curr = prev;  // For even i, nums[i] = nums[i / 2]
//         } else {
//             curr = prev + 1;  // For odd i, nums[i] = nums[i / 2] + nums[i / 2 + 1]
//         }
//         max_e = max(max_e, curr);  // Track the maximum value
//         prev = curr;  // Update prev for next iteration
//     }

//     return max_e;
// }




void solve() {
    int n = 5;
    cout << getMaximumGenerated(20) << endl;
    //cout << getMaximumGenerated2(8) << endl;
}

int main() {
    solve();
    return 0;
}