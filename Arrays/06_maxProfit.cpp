#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// maximum of two integers 
int max(int a, int b) { return (a > b) ? a : b; } 

int maxProfit(int weight[], int value[], int n, int capacity)
{ int profit;
    if (n == 0 || capacity == 0)
    {	
        return 0;
    }

    if (capacity < weight[n - 1]){
	return maxProfit(weight, value, n - 1, capacity);
    }
    else{	
	return max(maxProfit(weight, value, n - 1, capacity), value[n-1] + maxProfit(weight, value, n - 1, capacity - weight[n - 1]));
	
    }
}
int main()
{
    int n;
    cout << "Enter the size of arrays: ";
    cin >> n;
   
    int weight[n];
    int value[n];
    cout<<" Enter the weight of items: ";
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    cout<<"Enter the value of items: ";

    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }
     int capacity;
    cout << "Enter the capacity of the sack: ";
    cin >> capacity;

    cout << "Max Profit= " << maxProfit(weight, value, n, capacity) << endl;

    return 0;
}