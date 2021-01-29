#include<iostream>
using namespace std;
//Prints the array
void printArr(int *arr, int n){
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl; 
}

// Bubble Sort the array 
void bubbleSort(int *arr, int n){
    int count=1; 
    int temp; 
    while (count <n){
        for (int i=0; i<n-count; i++){
            if(arr[i]>arr[i+1]){
                 temp= arr[i]; 
                arr[i]=arr[i+1];
                arr[i+1]=temp; 
                }
        }
        count++;
    }
    printArr(arr, n);

   
}

int main (){
    int n; 
    cout <<"Enter the size of the array: "; 
    cin>> n; 

    int arr[n];
    cout<<"Enter the elements into the array: "; 
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    cout<<"Array before sorting: ";
    printArr(arr, n);
    cout<<"Array after sorting: ";
    bubbleSort(arr,n);

      cout<<"Max element= "<<arr[n-1];
     cout<<" "<<"Min element= "<<arr[0];
     cout<<endl; 
     
    return 0;
}