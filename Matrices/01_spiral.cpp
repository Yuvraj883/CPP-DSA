#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int row, col;
    cout << "Enter the size of row and column: ";
    cin >> row >> col;

    int arr[row][col];
    cout << "Enter array elements: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    int minC = 0;
    int minR = 0;
    int maxC = col - 1;
    int maxR = row - 1;
    int totEle = col * row;
    int count = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    while (count < totEle)
    {
        //Top Wall
        for (int i = minC, j = minR; i < maxC && count < totEle; i++)
        {
            cout << arr[minR][i] << " ";
            count++;
        }
        minR++;

        // Right Wall
        for (int i = minR, j = minC; i < maxR && count < totEle; i++)
        {
            cout << arr[i][minC] << " ";
            count++;
        }
        minC++;

        // Bottom Wall
        for (int i = maxC, j = maxR; i > minR && count < totEle; i--)
        {
            cout << arr[maxR][i] << " ";
            count++;
        }
        maxR--;

        // Left Wall
        for (int i = maxR, j = maxC; i > minR && count < totEle; i--)
        {
            cout << arr[i][maxC] << " ";
            count++;
        }
        maxC--;
    }
    cout << endl;
    return 0;
}