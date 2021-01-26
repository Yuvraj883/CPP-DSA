/*An arithmetic array is an array that contains at least two integers and the
differences between consecutive integers are equal. For example, [9, 10], [3, 3, 3],
and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are
not arithmetic arrays.*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 1, diff = 0;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    vector<int> vec;

    cout << "Enter the elements of the array: ";
    for (auto i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    diff = arr[0] - arr[1];

    for (int i = 1; i <= n; i++)
    {
        if (diff == arr[i - 1] - arr[i] && diff == arr[i] - arr[i + 1])
        {
            count++;
        }
        else if (diff == arr[i - 1] - arr[i] && diff != arr[i] - arr[i + 1])
        {
            count += 2;
            vec.push_back(count);
            count = 1;
        }
        else
        {
            diff == arr[i - 1] - arr[i];
        }
    }

    cout << "Length of the Longest Arithmetic Subarray= " << *max_element(vec.begin(), vec.end());
    cout << endl;
    return 0;
}