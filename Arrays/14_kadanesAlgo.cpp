#include <iostream>
using namespace std;
//Longest Subarray Sum
void kadaneAlgo(int *arr, int n)
{
    int currentSum = 0;
    int overallSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (currentSum >= 0)
        {
            currentSum += arr[i];
        }
        else
        {
            currentSum = arr[i];
        }

        if (currentSum > overallSum)
        {
            overallSum = currentSum;
        }
    }
    cout<<"Max sum of a subarray is: ";
  cout<< overallSum<<endl;
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
      kadaneAlgo(arr, n);
      return 0; 
}