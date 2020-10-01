#include<iostream>
using namespace std;

// Logic: 1 - Time complexity O(N^3)

int maxSum_subarray(int a[], int n)
{
    int Current_sum = 0;
    int Maximum_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            Current_sum = 0;
            for (int k = i; k <= j; k++)
            {
                Current_sum += a[k];
            }
            if (Current_sum > Maximum_sum)
            {
                Maximum_sum = Current_sum;
            }
        }
    }
    return Maximum_sum;
}

// Logic: 2 - Time complexity O(N^2)   [Prefix sum(precomputing)]

int maxSum(int a[], int n)
{
    int Csum[100];
    int Current_sum = 0;
    int Maximum_sum = 0;
    // To calculate prefix sum
    for (int i = 0; i < n; i++)
    {
        Csum[i] = Csum[i - 1] + a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            Current_sum = 0;
            Current_sum = Csum[j] - Csum[i - 1];
            if (Current_sum > Maximum_sum)
            {
                Maximum_sum = Current_sum;
            }
        }
    }
    return Maximum_sum;
}

// Logic: 3 - Time complexity O(N)  [Kadane's Algorithm]

int maximumSum(int a[], int n)
{
    int Current_sum = 0;
    int Maximum_sum = 0;
    for (int i = 0; i < n; i++)
    {
        Current_sum += a[i];
        if (Current_sum < 0)
        {
            Current_sum = 0;
        }
        Maximum_sum = max(Current_sum, Maximum_sum);
    }
    return Maximum_sum;
}
// Driver Code
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int result = maxSum_subarray(a, n);
    int result1 = maximumSum(a, n);
    int result2 = maxSum(a, n);
    cout << result << endl;
    cout << result1 << endl;
    cout << result2 << endl;
    return 0;
}
