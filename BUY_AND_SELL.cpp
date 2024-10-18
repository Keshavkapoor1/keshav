#include<iostream>
using namespace std;

//earn max profit
int buyandsell(int arr[],int size){
    int maxP=0;
    int bestbuy=arr[0];
    for (int i = 1; i <size; i++)
    {
        if(arr[i]>bestbuy){
            maxP=max(maxP,arr[i]-bestbuy);
        }
        bestbuy=min(arr[i],bestbuy);
    }
    return maxP;
    
}
int main(){
    int arr[]={8,10,5,4,2,10};
    int size=sizeof(arr)/sizeof(int);
cout<<buyandsell(arr,size)<<endl;

return 0;
}