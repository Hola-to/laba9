#include <iostream>
#include "cot.h"
void Shell(double *arr, int n) 
{
	int count;
	int d = n;
	d = d / 2;
	while (d > 0)
	{
		for (int i = 0; i < n - d; i++)
		{
			int j = i;
			while (j >= 0 && arr[j] > arr[j + d])
			{
				count = arr[j];
				
				arr[j] = arr[j + d];
				arr[j + d] = count;
				j--;
			}
			type(arr, n);
		}
		
		d = d / 2;
	}
}