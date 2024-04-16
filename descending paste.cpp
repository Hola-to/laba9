#include <iostream>
#include "cot.h"
void dpasta(double* arr, int n)
{
    int temp, item;
    for (int counter = 1; counter < n; counter++)
    {
        temp = arr[counter];
        item = counter - 1;
        while (item >= 0 && arr[item] < temp)
        {
            arr[item + 1] = arr[item];
            arr[item] = temp;
            
            item--;
        }
        type(arr, n);
    }
 
}