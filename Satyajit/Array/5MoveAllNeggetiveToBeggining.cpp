// An array contains both positive and negative numbers in random order. 
//Rearrange the array elements so that all negative numbers appear before all positive numbers.
// Move all negative numbers to beginning and positive to end with constant extra space


#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,7,-4,-8,10,-7,65,-8,-77,-20,59,9478,1545,-66};
    int low = 0, high = arr.size()-1;
    while(low <= high){
        if(arr[low] < 0){
            low++;
        } else{
            swap(arr[low],arr[high--]);
        }
    }

    for(auto x : arr){
        cout<<x<<" ";
    }

    return 0;
}