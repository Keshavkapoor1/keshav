#include <iostream>
#include<vector>
using namespace std;
//two sum
/*int twosum(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << arr[i] << arr[j] << endl;
                cout << "index:" << i << j << endl;
            }
        }
    }
    
}*/
vector<int>pairsum(vector<int>arr,int target){
 vector <int>ans;
int i=0;
int j=arr.size()-1;

while(i<j){
   int pairsum= arr[i]+arr[j];
    if(pairsum>target){
        j--;
    }
    else if(pairsum<target){
        i++;
    }
    else{
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    }
}

}


int main()
{
    int arr[] = {1, 2, 3, 4, 5};
   // twosum(arr, 5, 9);
vector<int>nums={1,2,34,5,6};
int target=36;
vector<int>result=pairsum(nums,target);
cout<<nums[0]<<" "<<nums[1]<<endl;
}