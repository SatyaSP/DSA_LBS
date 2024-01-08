//Move all negative numbers to beginning and positive to end with constant extra space
//An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={1,2,3,4,5,-1,-4,-3,9,90,-900};
    int low=0,high=arr.size()-1;
    while(low<=high){
        if(arr[low]<0){
            low++;
        }
        else{
            swap(arr[low],arr[high--]);
        }
    }
    for(auto x:arr){
        cout<<x<<" ";
    }
}