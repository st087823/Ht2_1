#include <iostream>
#include <clocale>
#define N 1000
using namespace std;

void menu()
{
	cout << "0 - Выход из программы \n";
	cout << "1 - Добавить число в массив \n";
	cout << "2 - Вывести массив на экран \n";
	cout << "3 - Найти номер максимального элемента массива \n";
	cout << "4 - Найти минимальный элемент массива \n";
	cout << "5 - Посчитать сумму элементов массива \n";
	cout << "6 - Вывести массив в обратном порядке\n";
	cout << "7 - Ввести массив\n";
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
		cout << "Введите число, которое необходимо добавить" << endl;
		cin >> a;
		function_1(A, n, a);
		break;
	}
	case 2:
	{
		cout << "Массив а содержит следующие числа: ";
		outArray(A, n);
		break;
	}
	case 3:
	{
		cout << "Номер максимального элемента массива равен ";
		cout << indxMaxElement(A, n) << endl;
		break;
	}
	case 4:
	{
		cout << "Минимальный элемент массива равен ";
		cout << minElement(A, n) << endl;
		break;
	}
	case 5:
	{
		cout << "Сумма элементов массива равна ";
		cout << sum(A, n) << endl;
		break;
	}
	case 6:
	{
		cout << "Массив в обратном порядке: ";
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