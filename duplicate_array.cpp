#include <iostream>
using namespace std;
int duplicate(int arr [],int n ){
bool hasduplicate=false;


    for (int i = 0; i <n; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            if (arr[i] == arr[j])
            {
             cout<<arr[i]<<endl;
             hasduplicate=true;
             break;
            }
        }
    }
   
if(hasduplicate==false){
    return {};
}
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 7,3,4,2,1, 20, 20};
    int size = sizeof(arr) / sizeof(int);
     duplicate(arr,size);
    return 0;
}
