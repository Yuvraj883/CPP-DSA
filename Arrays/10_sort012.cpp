//Sort an array consisting of 0s,1s and 2s without using any sorting algorythm 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printArr(int *arr,int n){
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
}

void sort012(int *arr, int n){
    for (int i=0; i<n; i++){
        if (arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sort(arr, arr + n, [](int a, int b){
	return a < b;
    });
}

int main(){
    int n; 
    cout<<"Enter the size of the array: "; 
    cin>> n; 

    int arr[n]; 
    cout<<"Enter the elements of the array: "; 
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort012(arr,n);     
    printArr(arr, n);
    return 0; 
}