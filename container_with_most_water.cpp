#include<iostream>
using namespace std;

//container with most water
int main(){
    int maxwater=0;
    int arr[]={1,8,6,2,5,4,8,3,7};
    int n=9;
    for (int i = 0; i <n; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            int width=j-i;
            int height=min(arr[i],arr[j]);
            int area=width*height;
            maxwater=max(area,maxwater);
        }
        
    }
    cout<<maxwater<<endl;
}