#include <iostream>
#include <math.h>
#include <conio.h> // ��� getch
#include <cstdlib> // system("pause");
#define N 1000
using namespace std;

void meny() {
	cout << "0 - ����� �� ���������" << endl;
	cout << "1 - �������� � ������ c ��������� ����� � ���������� �� a �� b" << endl;
	cout << "2 - ���������� ������" << endl;
	cout << "3 - �������� �������� ������� ������� � �����" << endl;
	cout << "4 - ����������� ����� ������ �� 1" << endl;
	cout << "5 - ���������� ��� ��������� �������" << endl;
	cout << "7 - ������� ������" << endl;
}

void function_7(int* arr, int size) { // ������� ������
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	}
}

void function_1(int* &arr, int& size, int numb_rand, int a, int b) { // �������� ��������� �����
	int new_size = size + numb_rand;
	while (size < new_size) {
		arr[size] = rand() % (b - a + 1) + a;
		size++;
	}
}

void function_2(int*& arr, int size) { // ����������� ������
	int temp = 0;
	int i = 0;
	while (i < size) {
		temp = arr[(size - 1)];
		arr[(size - 1)] = arr[i];
		arr[i] = temp;
		i++;
		size--;
	}
}

void function_3(int*& arr, int size) { // �������� ������� ��������
	int i = 0;
	int temp = 0;
	while (i < (size/2)*2) {
		temp = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = temp;
		i += 2;
	}
}

void function_5(int*& arr, int size, int numb_middle) { // ���������� ��� ��������� �������
	int i = 0;
	int temp = 0;
	
	int numb_middle_l = numb_middle - 1;;
	int numb_middle_r = numb_middle + 1;

	while (i <= numb_middle_l) {
		temp = arr[i];
		arr[i] = arr[numb_middle_l];
		arr[numb_middle_l] = temp;
		i++;
		numb_middle_l--;
	}
	
	while (size >= numb_middle_r) {
		temp = arr[numb_middle_r];
		arr[numb_middle_r] = arr[size - 1];
		arr[size - 1] = temp;
		numb_middle_r++;
		size--;
	}
}

void function_4(int*& arr, int size) {
	int i = 0;
	int temp = arr[size - 1];
	for (int i = size - 1; i > 0; i--) {
		arr[i] = arr[i - 1];
	}
	arr[0] = temp;
}

void check(int*& A, int& n, int x) {
	
	if (x == 1) {
		int c = 0;
		cout << "����� ���-�� ��������� ����� �� ������ ��������?" << endl;
		cin >> c;
		int a = 0;
		int b = 0;
		cout << "� ����� ���������� ���������� ��������� �����?" << endl;
		cin >> a >> b;
		function_1(A, n, c, a, b);
	}
	if (x == 2) { function_2(A, n); }
	if (x == 3) { function_3(A, n); }
	if (x == 4) { function_4(A, n); }
	if (x == 5) {
		int numb_middle = 0;
		cout << "������� ������ ��������, ������� �������� ������ �� ��� �����?" << endl;
		cin >> numb_middle;
		function_5(A, n, numb_middle);
	}
	if (x == 7) {
		cout << "������:  ";
		function_7(A, n); 
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