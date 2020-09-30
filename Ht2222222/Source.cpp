#include <iostream>
#include <clocale>
#define N 1000
using namespace std;

void menu()
{
	cout << "0 - ����� �� ��������� \n";
	cout << "1 - �������� ����� � ������ \n";
	cout << "2 - ������� ������ �� ����� \n";
	cout << "3 - ����� ����� ������������� �������� ������� \n";
	cout << "4 - ����� ����������� ������� ������� \n";
	cout << "5 - ��������� ����� ��������� ������� \n";
	cout << "6 - ������� ������ � �������� �������\n";
	cout << "7 - ������ ������\n";
}

void function_1(int* &arr, int& size, int a)
{
	arr[size] = a;
	size++;
}

void outArray(int* a, int count)
{
	for (int i = 0; i < count; ++i)
	{
		cout << a[i] << ' ';
	}
	system("pause");
}

int indxMaxElement(int* a, int count)
{
	int result = 0;
	for (int i = 1; i < count; ++i)
	{
		if (a[i] > a[result])
		{
			result = i;
		}
	}
	return result;
}

int minElement(int* a, int count)
{
	int minimum = a[0];
	for (int i = 1; i < count; ++i)
	{
		if (a[i] < minimum)
		{
			minimum = a[i];
		}
	}
	return minimum;
}

int sum(int* a, int count)
{
	int sum = 0;
	for (int i = 0; i < count; ++i)
	{
		sum += a[i];
	}
	return sum;
}

void reverseArray(int* a, int count)
{
	for (int i = count - 1; i >= 0; --i)
	{
		cout << a[i] << ' ';
	}
	cout << endl << endl;
}

void check(int*& A, int& n, int x)
{
	switch (x)
	{
	case 0:
	{
		break;
	}
	case 1:
	{
		int a = 0;
		cout << "������� �����, ������� ���������� ��������" << endl;
		cin >> a;
		function_1(A, n, a);
		break;
	}
	case 2:
	{
		cout << "������ � �������� ��������� �����: ";
		outArray(A, n);
		break;
	}
	case 3:
	{
		cout << "����� ������������� �������� ������� ����� ";
		cout << indxMaxElement(A, n) << endl;
		break;
	}
	case 4:
	{
		cout << "����������� ������� ������� ����� ";
		cout << minElement(A, n) << endl;
		break;
	}
	case 5:
	{
		cout << "����� ��������� ������� ����� ";
		cout << sum(A, n) << endl;
		break;
	}
	case 6:
	{
		cout << "������ � �������� �������: ";
		reverseArray(A, n);
		break;
	}
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int* A = new int[N];
	int count = 0;
	int x = 1;
	while (x != 0)
	{
		system("cls");
		menu();
		cin >> x;
		check(A, count, x);
	}

	delete[] A;
	return 0;
}