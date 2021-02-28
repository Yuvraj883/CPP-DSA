#include <iostream>
#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cout<<"Enter the size of array: ";
    cin>> n; 
    int arr[n];
    cout<<"Enter the array elements: "; 
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int target; 
    cout <<"Enter the target sum: ";
    cin>> target; 

    for (int i=0; i<n; i+=2){
        if(arr[i]+arr[i+1]==target){
            cout<<i<<" "<<i+1<<endl; 
            break;
        }

    }
    return 0; 
}
// //Question
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Output: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]
 

// Constraints:

// 2 <= nums.length <= 103
// -109 <= nums[i] <= 109
// -109 <= target <= 109
// Only one valid answer exists.