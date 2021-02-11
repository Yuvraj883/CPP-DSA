#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n+1];
    cout<<"Enter the array elements: ";
    for (int i=0; i<n+1;i++){
        cin>>arr[i];
    }

    int hash[n+1];
    for (int i=0; i<n+1; i++){
        hash[i]=0;
    }

    sort(arr, arr+n);
    int k;
    for (int i=0; i<n+1; i++){
        k=arr[i];
      if(hash[k]==0){
          hash[k]=1;
      }
      else {
        
          cout<<arr[i]<<endl;
      }
    }
    return 0; 
}