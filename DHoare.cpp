#include <iostream>
#include "cot.h"
using namespace std;
void swp1(double* arr, int i, int j)
{
	double temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
int partition1(double* arr, int low, int high, int pivot) {
	int i = low;
	int j = low;
	while (i <= high) {
		if (arr[i] < pivot) {
			i++;
		}
		else {
			swp1(arr, i, j);
			i++;
			j++;
		}
	}
	return j - 1;
}

void DHoare(double* arr, int low, int high, int n) {
	if (low < high) {
		int pivot = arr[high];
		int pos = partition1(arr, low, high, pivot);
		type(arr, n);
		DHoare(arr, low, pos - 1, n);
		DHoare(arr, pos + 1, high, n);
	}
}
