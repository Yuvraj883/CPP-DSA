#include <iostream>
using namespace std; 

//Function to print an array
void printArr(int* arr,int n){// There's some confusion in calling the array I initially didn't use [ ] with array and it was still working!!!!
    for (int i=0; i<n ; i++){
        cout<< arr[i]<<" ";
    }
    cout<< endl;  
}

//Function for reversing the array contents
void reverseArr(int* arr,int n){
    int temp; 
    for (int i=0; i<n/2 ; i++){
         temp = arr[n-1-i];
         arr[n-1-i]= arr[i];
         arr[i]=temp;

    }
    printArr(arr,n);

    cout<< endl;  
}

int main(){
    int n; 
    cout<<"Enter the size of the array: "; 
    cin>> n; 

    int arr[n]; 
    cout<<"Enter the elements of the array: "; 
    for(int i=0 ; i<n; i++){
        cin>> arr[i];
    }
    cout<<"Array before reversing : " ; 
      printArr(arr, n);// Although I have used call by reference in declaring this function, this code was working without using '&' to pass the array

    cout<<"Array after reversing : " ;	
    reverseArr(arr, n);

    return 0;

}