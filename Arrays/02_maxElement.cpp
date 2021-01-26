#include <iostream>
using namespace std;
int main()
{
    int n, max = 0;
    cout << "Enter the size of array you want: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements in the array: ";
    for (auto i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //Take a variable max, initialise it with 0 and compare it with all the elements in the array while traversing
    for (auto i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "Max= " << max;
    cout << endl;
    return 0;
}