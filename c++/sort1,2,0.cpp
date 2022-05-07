// C++ program to sort an array
// with 0, 1 and 2 in a single pass
#include <bits/stdc++.h>
using namespace std;

// Function to sort the input array,
// the array is assumed
// to have values in {0, 1, 2}
void sort012(int a[], int n)
{
	int lo = 0;
	int hi = n - 1;
	int mid = 0;

	// Iterate till all the elements
	// are sorted
	while (mid <= hi) {
		switch (a[mid]) {

		// If the element is 0
		case 0:
			swap(a[lo++], a[mid++]);
			break;

		// If the element is 1 .
		case 1:
			mid++;
			break;

		// If the element is 2
		case 2:
			swap(a[mid], a[hi--]);
			break;
		}
	}
}

// Function to print array arr[]
void printArray(int arr[], int n)
{
	// Iterate and print every element
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

// Driver Code
int main()
{
	int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
	int n = 12;

	sort012(arr, n);

	cout << "array after segregation ";

	printArray(arr, n);

	return 0;
}

// This code is contributed by Shivi_Aggarwal
