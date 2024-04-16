#include <iostream>
#include "cot.h"
using namespace std;
void swp(double *arr, int i, int j)
{
    double temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int partition(double* arr, int low, int high, int pivot) {
	int i = low;
	int j = low;
	while (i <= high) {
		if (arr[i] > pivot) {
			i++;
		}
		else {
			swp(arr, i, j);
			i++;
			j++;
		}
	}
	return j - 1;
}

void Hoare(double* arr, int low, int high, int n) {
	if (low < high) {
		int pivot = arr[high];
		int pos = partition(arr, low, high, pivot);
		type(arr, n);
		Hoare(arr, low, pos - 1,n);
		Hoare(arr, pos + 1, high,n);
	}
}
