#include <iostream>
#include <math.h>
#include <conio.h> // ��� getch
#define N 1000
using namespace std;

void function_7(int* arr, size_t size) { // ������� ������

	cout << "������:  ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	}
	getchar(); getchar();
	cout << endl;
}

int function_0(int r) { // ����� �� ���������
	int t = 0;
	return t;
}

int* function_1(int* arr, size_t size, int numb_rand) { // �������� ��������� �����
	int a = 0;
	int b = 0;
	int r = 0;
	int new_size = size + numb_rand;
	cout << "� ����� ���������� ���������� ��������� �����?" << endl;
	cin >> a >> b;
	while (size <= new_size) {
		r = (a + rand()) % (b + 1);
		if (r >= a) {
			arr[size] = r;
			size++;
		}
	}
	getchar(); getchar();
	return arr;
}

int* function_2(int* arr, size_t size) { // ����������� ������
	int temp = 0;
	int i = 0;
	//while (size - 1 >= 0) {
	while (i < size) {
		temp = arr[(size - 1)];
		arr[(size - 1)] = arr[i];
		arr[i] = temp;
		i++;
		size--;
	}
	//arr[i] = arr[size - 1];
	getchar(); getchar();
	return arr;
}

int* function_3(int* arr, size_t size) { // �������� ������� ��������
	int i = 0;
	int temp = 0;
	if (size % 2 == 0) {
		while (i + 1 < size) {
			temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
			i += 2;
		}
	}
	else {
		while (i + 1 < size-1) {
			temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
			i += 2;
		}
	}
	getchar(); getchar();
	return arr;
}

int* function_5(int* arr, size_t size) { // ���������� ��� ��������� �������
	int numb_middle = 0;
	int i = 0;
	int temp = 0;
	
	cout << "������� ������ ��������, ������� �������� ������ �� ��� �����?" << endl;
	cin >> numb_middle;
	int numb_middle_l = numb_middle - 1;;
	int numb_middle_r = numb_middle + 1;

	while (i < numb_middle_l) {
		temp = arr[i];
		arr[i] = arr[numb_middle_l];
		arr[numb_middle_l] = temp;
		i++;
		numb_middle_l--;
	}
	
	while (numb_middle_r < size) {
		temp = arr[numb_middle_r];
		arr[numb_middle_r] = arr[size - 1];
		arr[size - 1] = temp;
		numb_middle_r++;
		size--;
	}
	getchar(); getchar();
	return arr;
}

int* function_4(int* arr, size_t size) {
	int i = 0;
	int temp = arr[size - 1];
	for (int i = size - 1; i > 0; i--) {
		arr[i] = arr[i - 1];
	}
	arr[0] = temp;
	getchar(); getchar();
	return arr;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	int x = 0;
	int n = 0;
	int c = 0;
	int* A = new int[N];

	n = 0;
	int t = 1;
	while (t != 0) {
		system("cls");
		cout << "0 - ����� �� ���������" << endl;
		cout << "1 - �������� � ������ c ��������� ����� � ���������� �� a �� b" << endl;
		cout << "2 - ���������� ������" << endl;
		cout << "3 - �������� �������� ������� ������� � �����" << endl;
		cout << "4 - ����������� ����� ������ �� 1" << endl;
		cout << "5 - ���������� ��� ��������� �������" << endl;
		cout << "7 - ������� ������" << endl;
		cin >> x;

		if (x == 0) { t = function_0(t); }
		if (x == 1) {
			cout << "����� ���-�� ��������� ����� �� ������ ��������?" << endl;
			cin >> c;
			A = function_1(A, n, c);
			n += c;
		}
		if (x == 2) { A = function_2(A, n); }
		if (x == 3) { A = function_3(A, n); }
		if (x == 4) { A = function_4(A, n); }
		if (x == 5) { A = function_5(A, n); }
		if (x == 7) { function_7(A, n); }
	}

	delete[] A;
	return 0;
}