#include<iostream>
#include<vector>
#include<algorithm>
//aggressive cows
using namespace std;
bool ispossible(vector<int> &arr,int n,int c,int minallowed){
int cow=1;
int laststable=arr[0];
for (int i=1; i <n; i++){
if(arr[i]-laststable>=minallowed){
    cow++;
    laststable=arr[i];
}
if(cow==c){
    return true;
}
}


return false;

}
int getdistance(vector<int> &arr,int n,int c){
    sort(arr.begin(),arr.end());
int st=1;
int ans=-1;
int end=arr[n-1]-arr[0];
while(st<=end){
    int mid=st+(end-st)/2;
    if(ispossible(arr,n,c,mid)){
        ans=mid;
        st=mid+1;
    }
    else{
        end=mid-1;
    }
}
return ans;
}
int main(){
    int n=5;
    int c=3;
    vector<int>arr={1,2,8,4,9};
    cout<<getdistance(arr,n,c)<<endl;
    return 0;
}