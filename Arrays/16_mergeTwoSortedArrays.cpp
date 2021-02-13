#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Display(int *arr, int u)
{
    for (int i = 0; i < u; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
void mergeTwoSortedArrays(int *arr1, int *arr2, int n, int m)
{
    int arr[n + m];
    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
            k++;
        }
    }

    while (i < n)
    {
        arr[k] = arr1[i];
        i++;
        k++;
    }

    while (j < m)
    {
        arr[k] = arr2[j];
        j++;
        k++;
    }
    for (int i = 0; i < n + m; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    //Display(arr, n+m);
}

int main()
{
    int n;
    cout << "Enter the size of the first Array: ";
    cin >> n;

    int arr1[n];
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    sort(arr1, arr1 + n);

    int m;
    cout << "Enter the size of the second array: ";
    cin >> m;

    int arr2[m];
    cout << "Enter elements to the 2nd array: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    sort(arr2, arr2 + m);
    cout<<"Array1 after sorting: ";
   Display(arr1, n);
   cout<<"Array2 after sorting: ";
    Display(arr2, m);
    cout<<"Both arrays after merging: ";
    mergeTwoSortedArrays(arr1, arr2, n, m);
    return 0;
}