#include <bits/stdc++.h>
using namespace std;
// Make sure the array is sorted, before using this
void Intersection(int *arr1, int *arr2, int n, int m)
{
    vector <int> interSection;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] > arr2[j])
        {
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            interSection.push_back(arr2[j++]);
            i++;
        }
    }
    cout<<"The intersection of the two arrays is: "; 
    for (auto i : interSection)
    {
        cout << i << " ";
    }
    cout << endl;
}

void Union(int *arr1, int *arr2, int n, int m)
{
    set<int> Union(arr1, arr1 + n);

    for (int i = 0; i < m; i++)
    {
        Union.insert(arr2[i]);
    }
    cout << "The union of the two arrays is: ";
    cout << endl;
    for (int i : Union)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int n, m;
    cout << "Enter the size of the array1 & array2: ";
    cin >> n >> m;

    int arr1[n], arr2[m];
    cout << "Enter the elements of the array1: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    Union(arr1, arr2, n, m);
    Intersection(arr1, arr2, n, m);

    return 0;
}