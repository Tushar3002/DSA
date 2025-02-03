//leet 11  water container

#include<iostream>
#include<vector>
using namespace std;


int maxArea(vector<int>& height) {//brute force O(n^2)
        int maxWater=0;
        for(int i=0;i<height.size();i++){
            for(int j=i+1;j<height.size();j++){
                int wid=j-i;
                int hei=min(height[i],height[j]);
                int currWater=wid*hei;
                maxWater=max(maxWater,currWater);
            }
        }
        return maxWater;
}

int maxArea2(vector<int>& height){ //2 pointer  optimal approach  
    int lp=0,rp=height.size()-1;
    int maxWater=0;

    while(lp<rp){
        int wid=rp-lp;
        int hei=min(height[lp],height[rp]);
        int currWater=wid*hei;
        maxWater=max(maxWater,currWater);

        height[lp]<height[rp]?lp++:rp--;
    }
    return maxWater;
}
int main(){
    vector<int> vi={1,8,6,2,5,4,8,3,7};
    cout << maxArea2(vi) << endl;
    return 0;
}