// How to do effective searching in 2D-Array 
// STAIRCASE-SEARCH 
// Time Complexity:- O(n)

#include<iostream>
using namespace std;

void staircase_search(int a[][100], int m, int n, int key)
{
    int i = 0;
    int j = n - 1;
    int element = a[0][n - 1];
    while (i < m and j >= 0)
    {
        if (a[i][j] == key)
        {
            cout << i << ", " << j << endl;
            return;
        }
        else if (a[i][j] < key)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    cout << "-1" << endl; // Indicating that element is not present.
}
int main()
{

    int a[100][100] = {0};
    int m, n;
    cin >> m >> n;

    //Iterate Over the array
    for (int row = 0; row <= m - 1; row++)
    {
        for (int col = 0; col <= n - 1; col++)
        {
            cin >> a[row][col];
        }
    }
    int key;
    cin >> key;

    staircase_search(a, m, n, key);
    return 0;
}
