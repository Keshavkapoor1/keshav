#include<iostream>
using namespace std;
//triple sum
int triplesum(int arr[],int size,int target){
    for (int i = 0; i <size; i++)
    {
    for (int j= i+1; j < size; j++)
    {
    for (int k = j+1; k < size; k++)
    {
        if(arr[i]+arr[j]+arr[k]==target){
            cout<<arr[i]<<arr[j]<<arr[k]<<endl;
            cout<<"index :"<<i<<j<<k<<endl;
        }
    }
    
    }
    
    }
    
}
int main(){
int arr[]={1,2,3,4,5,6,7,8,9,10};
int size=sizeof(arr)/sizeof(int);
triplesum(arr,size,9);
}