#include <iostream>
#include <locale.h>
#include "Ascending.h"
#include "Descending.h"
using namespace std;
int low, high;
void bor(int n, double* arr, double* arr1)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100 + 10;
		arr1[i] = arr[i];
		cout << arr[i] << " ";
	}
	cout << endl;
}
void f1(int n, double* arr, double* arr1)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = arr1[i];
	}
}
void binsearch(double* arr, int n);//ex 2
void dbinsearch(double* arr, int n);// ex2
void del(double* arr);
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	srand(time(0));
	n = rand() % 10 + 3;
	double* arr = new double[n];
	double* arr1 = new double[n];
	cout << "Исходный массив:" << endl;
	bor(n, arr, arr1);
	cout << "Метод прямого выбора по возрастанию:"<<endl;
	searching(arr, n);
	f1(n, arr, arr1);
	cout << "Метод прямого выбора по убыванию:" << endl;
	searching1(arr, n);
	f1(n, arr, arr1);
	cout << "Метод прямого обмена по возрастанию:" << endl;
	ex(n, arr);
	f1(n, arr, arr1);
	cout << "Метод прямого обмена по убыванию:" << endl;
	exd(n, arr);
	f1(n, arr, arr1);
	cout << "Метод вставки по возрастанию:" << endl;
	pasta(arr, n);
	f1(n, arr, arr1);
	cout << "Метод вставки по убыванию:" << endl;
	dpasta(arr, n);
	f1(n, arr, arr1);
	cout << "Метод Шелла по возрастанию:" << endl;
	Shell(arr, n);
	f1(n, arr, arr1);
	cout << "Метод Шелла по убыванию:" << endl;
	DShell(arr, n);
	f1(n, arr, arr1);
	cout << "Метод Хоара по возрастанию:" << endl;
	Hoare(arr, 0, n-1, n);
	binsearch(arr, n);//ex 2
	f1(n, arr, arr1);
	cout << "Метод Хоара по убыванию:" << endl;
	DHoare(arr, 0, n - 1, n);
	dbinsearch(arr, n);//ex 2
	del(arr);
	return 0;
}
void binsearch(double* arr, int n)//ex2
{
	double k;
	std::cout << "Введите искомый элемент: ";
	std::cin >> k;
	bool flag = false;
	int mid, l = 0;
	while ((l <= n) && (flag != true)) {
		mid = (l + n) / 2; 

		if (arr[mid] == k) flag = true; 
		if (arr[mid] > k) n = mid - 1; 
		else l = mid + 1;
	}
	if (flag) std::cout << "Индекс элемента " << k << " в массиве равен: " << mid<<std::endl;
	else std::cout << "Такого элемента в массиве нет"<<std::endl;
}
void dbinsearch(double* arr, int n)//ex 2
{
	double k;
	std::cout << "Введите искомый элемент: ";
	std::cin >> k;
	bool flag = false;
	int mid, l = 0;
	while ((l <= n) && (flag != true)) {
		mid = (l + n) / 2;

		if (arr[mid] == k) flag = true;
		if (arr[mid] > k) l = mid + 1;
		else n = mid - 1;
	}
	if (flag) std::cout << "Индекс элемента " << k << " в массиве равен: " << mid << std::endl;
	else std::cout << "Такого элемента в массиве нет" << std::endl;
}
void del(double* arr)
{
		delete[]arr;
		arr = nullptr;
}