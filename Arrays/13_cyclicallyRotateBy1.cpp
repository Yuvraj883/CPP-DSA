#include <iostream>
using namespace std;
void cyclicallyRotate(int *arr, int n)
{
    int x = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = x;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements into the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cyclicallyRotate(arr, n);
    return 0;
}