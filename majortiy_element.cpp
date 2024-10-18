#include<iostream>
using namespace std;
int majority(int arr[],int size){
    int freq=0;
    int ans=0;
    for (int i = 0; i <size; i++)
    {
        if(freq==0){
            ans=arr[i];
        }
        if(arr[i]==ans){
            freq++;
        }
        else{
            freq--;
        }
    }
      return ans;
    
}
int main(){
    int arr[]={1,1,2,2,1,2,3,2,1,1,1,1};
    int size=sizeof(arr)/sizeof(int);
    cout<<majority(arr,size);
    return 0;
}