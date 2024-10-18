#include<iostream>
using namespace std;
int getmax(int arr[],int n){
    int max=INT32_MIN;
    for (int i = 0; i <n; i++)
    {
        if(arr[i]>max){
            max=arr[i];
           
        }
    }
    return max;
    
}
int getmin(int arr[],int n){
    int min=INT32_MAX;
    for (int i = 0; i <n; i++)
    {
        if(arr[i]<min){
            min=arr[i];
           
        }
    }
    return min;
    
}

int main(){
    int size;
    cin>>size;
    int arr[100];
    cout<<"enter an element"<<endl;
    for (int i = 0; i <size; i++)
    {
        cin>>arr[i];
    }

   int max= getmax(arr,size);
   cout<<"maximum element of array is"<<endl;
   cout<<max<<endl;

   int min= getmin(arr,size);
   cout<<"minimum element of array is"<<endl;
   cout<<min<<endl;
    return 0;
}