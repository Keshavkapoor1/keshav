#include<iostream>
#include<vector>
using namespace std;

vector<int>threeSum(vector<int>& nums) {
     vector <int> result;
      
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                       result.push_back(nums[i]);
                       result.push_back(nums[j]);
                       result.push_back(nums[k]);
                       
                }
                    }
            }
            }
        return result;  
    }
    int main(){
        vector<int>arr={-1,0,1,2,-1,-4};
        vector<int>ans=threeSum(arr);
for (int i = 0; i < arr.size(); i++)
{
    cout<<ans[i] <<endl;
    
}

        return 0;
    }
