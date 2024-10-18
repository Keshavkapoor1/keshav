#include<iostream>
using namespace std;
//array of product  of  except self 
int main(){
    int arr[]={1,2,3,4};
    int num=0;
    int product[4];
    for (int i = 0; i <4; i++){
    product[i]=1;
    
    for(int j= 0; j <4; j++)
    {
    if(i!=j){
      product[i]=arr[j]*product[i];

    }
   
    }
    
    }
    for (int i = 0; i<4; i++)
    {
        cout<<product[i]<<endl;
    }
    
    
    return 0;
}
