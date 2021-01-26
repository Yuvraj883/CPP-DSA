#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n; 
    cout<<"Enter the size of the array: "; 
    cin>> n; 

    int arr[n+1];
    arr[n]=-1;
    cout<<"Enter the elements in the array: "; 

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int mx=-1;
    int rbd=0;
    for (int i=0; i<n+1; i++){
        if(mx<arr[i]&& arr[i]>arr[i+1]){
            rbd++;
            mx=arr[i];
        }
     
    }
    cout<<"The number of record breaking days= "<<rbd<< endl; 
    
    return 0;
}