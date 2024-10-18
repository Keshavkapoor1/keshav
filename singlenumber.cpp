#include<iostream>
#include<vector>
using namespace std;
int unique_number(vector <int> &arr){
    int ans=0;
    for (int i:arr)
    {
        ans=ans^i;
    }
    return ans;
}
int main(){
vector<int>arr={1,2,4,4,3,3,2,};
int size=sizeof(arr)/sizeof(int);
cout<<"unique element is :"<<unique_number(arr)<<endl;
}