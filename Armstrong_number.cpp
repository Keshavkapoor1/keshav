#include<iostream>
#include<math.h>
using namespace std;
int main(){
   /* int n;
    cin>>n;
    int number=n;
    int sum=0;
    while(n!=0){
        int rem=n%10;
        sum+=rem*rem*rem;
        n=n/10;
        
    }
   
    if(sum==number){
        cout<<" true";
    }
    else{
        cout<<"false";
    }*/



   //range


   int number;
   cin>>number;
   int sum;
   for (int i = 1; i <= number; i++)
   {
    sum=0;
    int n=i;
    while(n!=0){
     int rem=n%10;
        sum+=rem*rem*rem;
        n=n/10;
        
   }
   if(sum==i){
    cout<<i<<endl;
   }
   }
   
    return 0;
}