#include <iostream>
#include <bits/stdc++.h>

using namespace std; 

int main(){
    int n; 
    cout<<"Enter the size of array: ";
    cin>>n; 
    int arr[n]; 
    cout<<"Enter the array elements: "; 
    for (int i=0; i<n; i++){
        cin>>arr[i]; 
    }

   arr[n-1]+=1;
    for (int i=0; i<n; i++){
      
        cout<<arr[i]<<" "; 
        
    }
    cout<<endl; 
    return 0; 
}