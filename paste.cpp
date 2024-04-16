#include <iostream>
#include "cot.h"
void pasta(double* arr, int n)
{
    int temp, i; 
    for (int counter = 1; counter < n; counter++)
    {
        temp = arr[counter]; 
        i = counter - 1; 
        while (i >= 0 && arr[i] > temp)
        {
            arr[i + 1] = arr[i];
            arr[i] = temp;
            i--;
        }
        type(arr, n);
    }
}