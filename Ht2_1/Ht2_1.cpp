#include <iostream>
#include <math.h>
#include <conio.h> // для getch
#define N 1000
using namespace std;

void function_2(int* arr, size_t size) {

	cout << "Массив:  ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	}
	getchar(); getchar();
	cout << endl;
}

int function_0(int r) {
	int t = 0;
	return t;
}

int* function_1(int* arr, size_t size) {
	int a;
	cout << "Введите число, которое необходимо добавить" << endl;
	cin >> a;

	if (size == 0) {
		arr[0] = a;
		size++;
	}
	else {
		arr[size] = a; size++;
	}
	return arr;
}

void function_3(int* arr, size_t size) {
	int max = -1000; int max_p;
	cout << "Максимум массива:  " << endl;
	for (int p = 0; p < size; p++) {
		if (arr[p] > max) { max = arr[p]; max_p = p; }
	}
	cout << max_p << endl;
	getchar(); getchar();
}

void function_4(int* arr, size_t size) {
	int min = 1000;
	cout << "Минимум массива:  " << endl;
	for (int p = 0; p < size; p++) {
		if (min > arr[p]) { min = arr[p]; }
	}
	cout << min << endl;
	getchar(); getchar();
}

void function_5(int* arr, size_t size) {
	int sum = 0;
	cout << "Сумма массива:  " << endl;
	for (int p = 0; p < size; p++) {
		sum = sum + arr[p];
	}
	cout << sum << endl;
	getchar(); getchar();
}

void function_6(int* arr, size_t size) {

	cout << "Массив:  ";
	for (int i = (size - 1); i >= 0; i--)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
	getchar(); getchar();
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int x = 0;
	int n = 0;
	int* A = new int[N];

	n = 0;
	int t = 1;
	while (t != 0) {
		system("cls");
		cout << "0 - Выйти из программы" << endl;
		cout << "1 - Добавить элемент массива" << endl;
		cout << "2 - Вывести массив на экран" << endl;
		cout << "3 - Вывести максимум массива" << endl;
		cout << "4 - Вывести минимум массива" << endl;
		cout << "5 - Вывести сумму эл-ов массива" << endl;
		cout << "6 - Вывести массив в обратн. порядке" << endl;
		cin >> x;

		if (x == 0) { t = function_0(t); }
		if (x == 1) { A = function_1(A, n); n++; }
		if (x == 2) { function_2(A, n); }
		if (x == 3) { function_3(A, n); }
		if (x == 4) { function_4(A, n); }
		if (x == 5) { function_5(A, n); }
		if (x == 6) { function_6(A, n); }
		cout << endl;
	}

	delete[] A;
	return 0;
}