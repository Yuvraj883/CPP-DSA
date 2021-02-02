#include <iostream>
using namespace std;

void printArr(int *arr, int n){

    for (int i=0; i<n; i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl; 

}

void negativeAside(int *arr, int n){
    int left=0; 
    int right= n-1; 
    while (left<right){
       if(arr[left]>=0){
           swap(arr[left],arr[right--]);
       }
       else {
           left++; 
       }

        
    }
    printArr(arr,n);

}
int main()
{
    int n;
    cout << "Enter the array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements into the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    negativeAside(arr,n);
    return 0; 
}