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

	cout << "������:  ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	}
	system("pause");
}

int* function_1(int* arr, size_t size) {
	int a;
	cout << "������� �����, ������� ���������� ��������" << endl;
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
	int max = -1000;
	int max_p = 0;
	int p = 0;
	cout << "�������� �������:  " << endl;
	for (int p = 0; p < size; p++) {
		if (arr[p] > max) { max = arr[p]; max_p = p; }
	}
	cout << max_p << endl;
	system("pause");
}

void function_4(int* arr, size_t size) {
	int min = 1000;
	int p = 0;
	cout << "������� �������:  " << endl;
	for (p = 0; p < size; p++) {
		if (min > arr[p]) { min = arr[p]; }
	}
	cout << min << endl;
	system("pause");
}

void function_5(int* arr, size_t size) {
	int sum = 0;
	cout << "����� �������:  " << endl;
	for (int p = 0; p < size; p++) {
		sum = sum + arr[p];
	}
	cout << sum << endl;
	system("pause");
}

void function_6(int* arr, size_t size) {

	cout << "������:  ";
	for (int i = (size - 1); i >= 0; i--)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
	system("pause");
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
		meny();
		cin >> x;

		if (x == 0) { t = 1; }
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