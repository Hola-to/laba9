#include <iostream>
#include "cot.h"
void searching1(double* arr, int n)
{
	int max, temp;
	for (int i = 0; i < n - 1; i++)
	{
		max = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] > arr[max])
				max = j;
			
		}
		temp = arr[i];
		arr[i] = arr[max];
		arr[max] = temp;
		type(arr, n);
	}
	
}