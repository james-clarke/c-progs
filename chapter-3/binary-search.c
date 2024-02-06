// binsearch: find x in v[0] <= v[1] <= ... <= v[n-1]:

#include <stdio.h>

int binsearch(int x, int v[], int n)
{
	int low, high, mid;

	low=0;
	high=n-1;
	while (low<=high)
	{
		mid= (low+high)/2;
		if (x<v[mid])
			high=mid-1;
		else if (x>v[mid])
			low=mid+1;
		else					// found match
			return mid;
	}

	return -1;			// no match
}

int main()
{
	// array of size 12
	int arr[] = { 2, 3, 4, 10, 40, 44, 56, 78, 100, 112, 250, 1000 };
	int x = 40;
	int n = 12;

	int sol = binsearch(x, arr, n);

	printf("Found x at position: %d\n", sol);

	return 0;
}
