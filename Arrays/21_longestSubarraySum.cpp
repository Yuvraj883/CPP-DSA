#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cout<<"Enter the size of the array: ";
    cin>> n; 
    int arr[n];
    cout<<"Enter array elements: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int currentSum=0; 
    int highestSum=0; 
    for (int i=0; i<n; i++){
        if(currentSum>=0){
        currentSum+= arr[i];
        }
        else {
            currentSum = arr[i];

        }

        if (currentSum>highestSum){
            highestSum=currentSum; 
        }
    }
    cout<<highestSum<<endl;
    return 0; 
}
// Question
// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

 

// Example 1:

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: [4,-1,2,1] has the largest sum = 6.
// Example 2:

// Input: nums = [1]
// Output: 1
// Example 3:

// Input: nums = [0]
// Output: 0
// Example 4:

// Input: nums = [-1]
// Output: -1
// Example 5:

// Input: nums = [-100000]
// Output: -100000
 

// Constraints:

// 1 <= nums.length <= 3 * 104
// -105 <= nums[i] <= 105