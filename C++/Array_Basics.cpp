// Array Basics And Some problems

// Array Basics
#include<iostream>
using namespace std;

int main()
{

    //Initialisation of an array
    int a[10] = {5}; // First element is 5 and remaining are 0

    //Size of
    cout << sizeof(a) << endl;
    int n = sizeof(a) / sizeof(int);
    cout << n << endl;

    //Input all the elements from the user
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    //Update  a single index
    a[8] = 100;

    //Print all the first 10 elements
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ,";
    }

    return 0;
}


// Linear Search
// A particular element in the array
// Time Complexity:- O(n)

#include<iostream>
using namespace std;

int linear_Search(int a[], int n, int key)
{
    //Find out the index of that element by traversing the array
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            cout << key << " found at " << i + 1 << " position";
            break;
        }
    }
    return -1; // Element is not present
}
// Driver Code
int main()
{
    int n, key;
    cin >> n;
    int a[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    //Ask for the element we want to search
    cout << "Enter the element you want to search  : ";
    cin >> key;

    linear_Search(a, n, key);

    return 0;
}


// Binary Search
// Help to search the element in sorted array
// Time Complexity:- O(nlogn)
#include<iostream>
using namespace std;

//Binary Search
//Efficient Way to Search in Sorted Arrays

int binary_search(int a[], int n, int key)
{

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1; // If element is not present
}
// Driver code
int main()
{

    int n, key;
    cin >> n;

    int a[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    //Ask for the element we want to search
    cout << "Enter the element you want to search  : ";
    cin >> key;

    cout << binary_search(a, n, key) << endl;

    return 0;
}
