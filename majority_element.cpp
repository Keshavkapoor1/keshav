#include<iostream>
using namespace std;
//count majorty element
int count=1;
int majority(int arr[],int size){
    for (int i = 0; i <size; i++)
    {
    int freq=0;
    for (int j = 0; j<size; j++)
    {
        if(arr[i]==arr[j]){
            freq++;
        }
    }
    if(freq>size/2){
        return i;
    }
    }
  return -1;  
}
int main(){
int arr[]={1,1,2,2,2,2,2,2,11,1};
int size=sizeof(arr)/sizeof(int);
cout<<"majority element is:"<<majority(arr,size);
}