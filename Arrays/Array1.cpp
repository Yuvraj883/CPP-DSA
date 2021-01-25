#include <iostream>
using namespace std;
int main()
{
    int n, arr[n];
    int sum = 0, product = 1;
    cout << "Enter the number of elements you want to enter: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        product = product * arr[i];
    }
    cout << "The sum of all the elements in the array is " << sum;
    cout << endl;
    cout  << "The product of all the elements in the array is " << product;
    cout << endl;
    return 0;
}