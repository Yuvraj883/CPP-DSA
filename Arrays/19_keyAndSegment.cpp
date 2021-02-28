#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin>>n; 

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool isPresent = true;
    int key, segment;
    cout << "Enter the key and the size of the segment: ";
    cin >> key >> segment;

    for (int i = 0; i < n; i += segment)
    {
        // vector <int> vec;
        for (int j = i; j < i + segment; j++)
        {
            if (arr[i] == key)
            {
                break;
            }
            else
            {
                isPresent = false;
            }
        }
    }
    if (isPresent = true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}