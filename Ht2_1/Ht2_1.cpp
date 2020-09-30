#include <iostream>
#include <math.h>
#include <conio.h> // ��� getch
#include <cstdlib> // system("pause");
#define N 1000
using namespace std;

void meny() {
	cout << "0 - ����� �� ���������" << endl;
	cout << "1 - �������� ������� �������" << endl;
	cout << "2 - ������� ������ �� �����" << endl;
	cout << "3 - ������� �������� �������" << endl;
	cout << "4 - ������� ������� �������" << endl;
	cout << "5 - ������� ����� ��-�� �������" << endl;
	cout << "6 - ������� ������ � ������. �������" << endl;
}

void function_2(int* arr, size_t size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	}
	system("pause");
}

void function_1(int* &arr, int& size, int a) {
	if (size == 0) {
		arr[0] = a;
		size++;
	}
	else {
		arr[size] = a; size++;
	}
}

int function_3(int* arr, int size) {
	int max = -1000;
	int max_p = 0;
	int p = 0;
	for (int p = 0; p < size; p++) {
		if (arr[p] > max) { max = arr[p]; max_p = p; }
	} 
	return max_p;
}

int function_4(int* arr, int size) {
	int min = 1000;
	int p = 0;
	for (p = 0; p < size; p++) {
		if (min > arr[p]) { min = arr[p]; }
	}
	return min;
}

int function_5(int* arr, int size) {
	int sum = 0;
	for (int p = 0; p < size; p++) {
		sum = sum + arr[p];
	}
	return sum;
}

void function_6(int* arr, int size) {
	for (int i = (size - 1); i >= 0; i--)
	{
		cout << arr[i] << "  ";
	}
}

void check(int* &A, int& n, int x) {

	if (x == 1) {
		int a;
		cout << "������� �����, ������� ���������� ��������" << endl;
		cin >> a;
		function_1(A, n, a);
	}
	if (x == 2) {
		cout << "������:  ";
		function_2(A, n);
		cout << endl;
	}
	if (x == 3) {
		int max_p = 0;
		cout << "����� ������������� �������� �������:  " << endl;
		cout << function_3(A, n) << endl;
		system("pause");
	}
	if (x == 4) {
		int min = 0;
		cout << "������� �������:  " << endl;
		cout << function_4(A, n) << endl;
		system("pause");
	}
	if (x == 5) {
		int sum = 0;
		cout << "����� �������:  " << endl;
		cout << function_5(A, n) << endl;
		system("pause");
	}
	if (x == 6) {
		cout << "������:  ";
		function_6(A, n);
		cout << endl;
		system("pause");
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int x = 1;
	int n = 0;
	int* A = new int[N];
	while (x != 0) {
		system("cls");
		meny();
		cin >> x;
		check(A, n, x);
	}

	delete[] A;
	return 0;
}