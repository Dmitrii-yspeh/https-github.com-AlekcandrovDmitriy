#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите количество чисел массива." << endl << "Число должно быть больше 1." << endl << "Количество чисел: ";
	int t;
	cin >> t;
	int *a = new int[t];                                      // int *arr = new int[N];
	cout << "Перед вами " << t << " рандомных чисел." << endl;
	for (int i = 0; i < t; i++)
	{
		a[i] = rand() % 101;
	}

	{
		for (int n = 0; n < t; n++)
		{
			cout << a[n] << "  ";
		}
	}
	////////////////////////////////////////////////////////////////////////////////////                                                                             
	int k;
	int *ar = new int[t - 1];
	cout << endl << "\nВведите номер ячейки, число которой вы хотите удалить." << "\nЧисло может быть только в промежутке от 1 до " << t << "." << "\nНомер ячейки: ";
	cin >> k;
	cout << endl << "Вы удалили ячейку: " << k << endl;

	for (int n = 0; n < t - 1; n++)
	{
		if (k > n + 1)
		{
			ar[n] = a[n];
		}
		else
		{
			ar[n] = a[n + 1];
		}
	}

	{
		for (int n = 0; n < t -1; n++)
		{
			cout << ar[n] << "  ";
		}
		cout << endl;
	}
	cout << endl;
	///////////////////////////////////////////////////////////////

	cout << "Здесь выведен массив, где после каждого чётного числа добавлен ноль." << endl;
	int N = t - 1;
	int d = 0;
	{
		for (int n = 0; n < t - 1; n++)
		{
			if (!(ar[n] % 2))
			{
				N++;
			}
		}

		int *arr = new int[N];
		
		for (int n = 0; n < t - 1; n++) 
	    {
			if (!(ar[n] % 2))
			{
				arr[n + d] = ar[n];
				arr[n + d + 1] = 0;
				d++;
			}
			else
			{
				arr[n + d] = ar[n];
			}
		}

		for (int n = 0; n < N; n++)
		{
			cout << arr[n] << "  ";
		}
	}
	cout << endl << endl << "Конец програмы." << endl;
}