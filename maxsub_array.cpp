#include<iostream>
using namespace std;
int main(){
    //max sub arr with kadne alogrithm
    int arr[]={1,2,3,4,-1,-2};
    int arrsum=0;
    int maxx=INT32_MIN;
    for (int i = 0; i <6; i++)
    {
        arrsum+=arr[i];
        maxx=max(arrsum,maxx);
    }
    if(arrsum<0){
        arrsum=0;
    }
    cout<<maxx;
}