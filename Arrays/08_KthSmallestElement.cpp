#include <iostream>
using namespace std;
//Sorts the array in the descending order
void sortArr(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        int temp; 
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp =arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }

        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sortArr(arr, n);

    int k;
    cout<<"Enter the value of k: ";
    cin>> k; 

    cout<<"Kth smallest element in the array is "<<arr[k-1];
    cout<<endl; 
    return 0; 
}