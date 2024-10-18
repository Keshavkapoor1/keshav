#include<iostream>
using namespace std;
int reverse(int arr[],int size){
int LB=0;
int HB=size-1;
while(LB<=HB){
    swap(arr[LB],arr[HB]);
    LB++;
    HB--;
}
}
int print(int arr[],int size){
    for (int i = 0; i <size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
int main(){
int arr[]={2,3,4,5,66,77,50,5,90};
int size=sizeof (arr)/sizeof (int);
for (int i = 0; i <size; i++)
{
    cout<<arr[i]<<endl;
}
cout<<"after swapping"<<endl;

reverse(arr,size);
print(arr,size);
}
