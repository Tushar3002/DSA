#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define all(v) v.begin(), v.end()
#define forn(i,n) for(int i=0;i<n;i++)

vi input_vector(){
    int n;
    cout << "Now enter the vector values u want :"<<endl;
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

void rotate_vector(vi &v, int k){
    int n = v.size();
    k %= n;  // Handle cases where k > n
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());
}


// Function to manually rotate vector `k` times to the right
void manual_rotate_vector(vi &v, int k){
    int n = v.size();
    forn(i, k) { // Rotate `k` times
        int temp = v[n-1];
        for (int j = n - 1; j > 0; j--) {
            v[j] = v[j - 1];
        }
        v[0] = temp;
    }
}

// Function to check if the vector is sorted in ascending order
bool check_asc(const vi &v) {
    forn(i, v.size() - 1) {
        if (v[i] > v[i + 1]) {
            return false;
        }
    }
    return true;
}

// Function to check if the vector is sorted in descending order
bool check_des(const vi &v) {
    forn(i, v.size() - 1) {
        if (v[i] < v[i + 1]) {
            return false;
        }
    }
    return true;
}

// Function to check if the vector is sorted in any order (ascending or descending)
bool check_sorted(const vi &v) {
    return check_asc(v) || check_des(v);
}


void solve(){
    vi v=input_vector();
    print_vi(v);

    // Check if the vector is sorted
    if (check_sorted(v)) {
        cout << "The vector is sorted.\n";
    } else {
        cout << "The vector is not sorted.\n";
    }
    
    // Rotate the vector 2 times to the right
    int k = 2;
    cout << "Rotating the vector by " << k << " positions:\n";
    rotate_vector(v, k);
    print_vi(v);

    // Check if the vector is sorted
    if (check_sorted(v)) {
        cout << "The vector is sorted.\n";
    } else {
        cout << "The vector is not sorted.\n";
    }
}

int main(){
    solve();
    return 0;
}