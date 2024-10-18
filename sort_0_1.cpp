#include<iostream>
using namespace std;
int sort(int arr[],int size){
    int left=0;
    for (int rigth = 0; rigth <size; rigth++)
    {
    if(arr[rigth]==1){
        swap(arr[rigth],arr[left]);
        left++;
    }
    }
    
}
int main(){
    int arr[]={1,1,0,1,0,1,1,1,0};
    int size=sizeof(arr)/sizeof(int);
sort(arr,size);
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<endl;
}
return 0;
}