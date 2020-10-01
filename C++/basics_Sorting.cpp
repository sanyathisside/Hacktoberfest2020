// Selection Sort
// To Sort the array in O(n^2) time.

#include<iostream>
using namespace std;

void selection_sort(int a[], int n)
{
    // We go till n-1 coz last element is always sorted
    for (int i = 0; i < n - 1; i++)
    {
        // We stand at this position
        int min_index = i;
        //find out the smallest element idx in the unsorted part
        for (int j = i; j <= n - 1; j++)
        {
            if (a[j] < a[min_index])
            {
                // We only have to update the min_index bcoz swap is expensive operation we do it at last
                min_index = j;
            }
        }
        //After this loop we can do swap finally
        swap(a[i], a[min_index]);
    }
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
    selection_sort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ",";
    }

    return 0;
}

// Insertion Sort
// To Sort the array in O(n^2) time.

#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    
    for (int i = 1; i <= n - 1; i++)
    {
        // pick one card from index 1 to n-1 and try to insert that card in sorted array in correct position
        int e = arr[i];
        //place the current element at 'right' position in the sorted part
        int j = i - 1;
        while (j >= 0 and arr[j] > e)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = e;
    }
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

    insertion_sort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ",";
    }

    return 0;
}

// Bubble Sort (Take the larger element towards end)
// To Sort the array in O(n^2) time.

#include<iostream>
using namespace std;

void bubble_sort(int a[], int n) {

	//N-1 large elements to the end
	for (int i = 1; i < n; i++) {

	  	//Pairwise Swapping in the unsorted of the array
      for (int j = 0; j <= (n - i - 1); j++) {
          if (a[j] > a[j + 1]) {
            swap(a[j], a[j + 1]);
          }
      }
	}
}
// Driver code
int main() {


	int n, key;
	cin >> n;

	int a[1000];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	bubble_sort(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << ",";
	}

	return 0;
}

// Inbuilt sort function in c++ STL.
// You have to include header file to use inbuilt sort function.
// More effective than all the above sorting algorithm(Selection,Insertion and Bubble sort)
// Time Complexity:- O(nlogn)

#include<iostream>
#include<algorithm>
using namespace std;

//Define A Comparator Function
bool compare(int a, int b)
{
    //return a > b; // means return the larger element (decreasing order sorting )
    return a < b; // means return the smaller element (increasing order sorting or by default )
}

int main()
{

    int n, key;
    cin >> n;

    int a[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //Sort an array using sort() function, more efficient
    sort(a, a + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ",";
    }

    return 0;
}
