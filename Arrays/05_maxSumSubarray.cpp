#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements into the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int currentSum = arr[0]; //Stores the sum of the currently evaluating subarray
    int overallSum = arr[0]; //Stores the sum of the all time best sum of some evaluate subarray

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

    cout << "The sum of the max sum subarray is " << overallSum << endl;
    return 0;
}