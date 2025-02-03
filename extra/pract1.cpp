#include<iostream>
#include<vector>
using namespace std;

void sum3(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%3==0){
            sum += i;
        }
    }
    cout << sum << endl;

}

void fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    cout << fact << endl;
}
void rev(int val){
    int ans=0;
    while(val>0){
       int rem = val % 10;
       val /= 10;
       ans = ans * 10 + rem ;
    }  
    cout << ans << endl;
}
void isPowerOfTwo(int n) {
    int res = (n > 0) && ((n & (n - 1)) == 0);
    if (res==1) {
        cout << n << " is a power of 2." << endl;
    } else {
        cout << n << " is not a power of 2." << endl;
    }
}

void linear(){

    vector<int> vi ={1,5,8,33,4,6};
    int target=3;
    bool found=false;
    for(int i=0;i<vi.size();i++){
        for(int j=0;j<vi.size();j++){
            if(vi[j]==target)
            {
                found=true;
            }
        }
    }
    if(found){
        cout << "Value is there";
    }else{
        cout << "Value is not there";
    }
}
void sumprod_arr(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    int pro=1;
    for(int i=0;i<n;i++){
        sum += arr[i];
        pro *= arr[i];
    }
    cout << sum;
    cout << pro;
}

void swap_minmax(){
    int max=INT8_MIN;
    int min=INT8_MAX;
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxi=0;
    int mini=0;
    
    for(int i=0;i<n;i++){
            if(max<arr[i]){
                max=arr[i];
                maxi=i;
            }
            if(min>arr[i]){
                min=arr[i];
                mini=i;
            }
        
    }
    int temp=arr[maxi];
        arr[maxi]=arr[mini];
        arr[mini]=temp;
    
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
}

void uniqueval(){
    int arr[]={1,2,2,4,4,4,5,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout << arr[i] << " ";
        }
    }
}
void intersection()
{
    int arr[]={1,3,65,8,4};
    int arr1[]={5,4,3,9,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int n2=sizeof(arr1)/sizeof(arr1[0]);
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<n2;j++){
            if(arr[i]==arr1[j])
            {
                flag=true;
            }

        }
        if(flag){
            cout << arr[i] << " " ;
        }
    }
    
}
int main(){
    // sum3(10);
    // fact(5);
    // rev(123);
    // isPowerOfTwo(30);
    // linear();
    //sumprod_arr();
    //swap_minmax();
    // uniqueval();
    intersection();
    return 0;
}