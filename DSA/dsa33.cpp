#include <iostream>
using namespace std;
int* trap(int height[],int n){
    int leftMax[20000];
    int rightMax[20000];
    int trap[20000];
    rightMax[20000]=INT_MAX;
    leftMax[0]=INT_MIN;
     for(int i=1;i<n;i++){
        leftMax[i]=max(height[i-1],leftMax[i-1]);
     }
     for(int i=n-1;i>=0;i--){
        rightMax[i]=max(height[i-1],rightMax[i-1]);
     }
     for(int i=0;i<n;i++){
        trap[i]=min(rightMax[i],leftMax[i]);
     }
     for(int i=0;i<n;i++){
        cout<<*trap+i;
    }
}

int main()
{
    int height[]={1,5,3,798,5,4};
    int n=sizeof(height)/sizeof(height[0]);
    trap(height, n);
    

    return 0;
}