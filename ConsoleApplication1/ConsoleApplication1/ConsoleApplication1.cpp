// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>//работа ввода/вывода
#include <ctime> // содержит time()
#include <iomanip>// работа setw()
using namespace std;
int c = 0; //количество элементов
int t = 0; //количество сдвигов


void computing(int); //прототип функции
void move(int, int); 

int main()
{
	setlocale(LC_ALL, "RUSSIAN");//поддержка русского языка
	cout << "Размер матрицы = ";
	cin >> c; 
	cout << endl;
	cout << "Количество сдвигов матрицы = ";
	cin >> t;
	/*int **a = */computing(c);
	//move(t, **a);
	/*for (int i = 0; i < c; i++) //вывод 
	{
		for (int j = 0; j < c; j++)
			cout << setw(5) << a[i][j] << " ";
		cout << endl;
	}*/

	system("pause");
}


void computing(int c) //выделение памяти, наполнение массива и его отображение
{
	int lstdgt=0;//последнее значение в матрице
	srand(time(nullptr)); //неистинный рандом
	int **m = (int **)malloc(c * sizeof(int*)); //выделение памяти, m -- матрица
	for (int i = 0; i < c; i++)
		m[i] = (int*)malloc(c * sizeof(int));
	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < c; j++)
		{
			m[i][j] = rand();
		}
	}
	
	for (int i = 0; i < c; i++) //вывод 
	{
		for (int j = 0; j < c; j++)
		{
			cout << setw(5) << m[i][j] << " ";
			if (c % 2 == 1)
				lstdgt = m[c - 1][c - 1];
			else lstdgt= m[0][c - 1];
		}
		cout << endl;
	}
	

	cout << endl;
	//m[0][0] = lstdgt;
	for(int j=c-1;j>=0;j--) //карусель
	{
		if (j==0||j%2==0)
		{
			for (int i = c - 1;i > 0; i--)
			{
				if (i == 1)
				{
					if (j == 0)
					{
						m[i][j] = m[i - 1][j];
						m[0][0] = lstdgt;
					}
					else
					{
						m[i][j] = m[i - 1][j];
						m[0][j] = m[0][j - 1];
					}
				}
				else {
					//if (j != 0)
						{
							m[i][j] = m[i - 1][j];
						}

					/*else
						{
							m[i][j] = m[i - 1][j];
							m[0][0] = lstdgt;
						}*/
					}
			}
		}

		if (j % 2 == 1)
			for (int i = 1; i < c;i++)
			{
				if (i == 1)
					m[0][j] = m[1][j];
				if (i == c - 1)
					m[i][j] = m[i][j - 1];
				else
					m[i][j] = m[i + 1][j];
			}
		
		/*if (j % 2 == 1)
		{
			for (int i = 0; i>=c; i++)

			{
				if (i = c)
					if (j==0)

					m[i-1][j] = m[i-1][j - 1];
				else
					m[i][j] = m[i + 1][j];
			}
		}*/
	}
	
		
	/*int *buff = (int*)malloc(c*sizeof(int));//буфер матрицы
	for(int j=0;j<c;j++)
	{
		if (j%2==0)
		{
			for (int i = c - 1; i > 0; i--)
			{
				buff[j] = m[i][j];
				m[i][j] = m[i - 1][j];
			}
		}
		if (j % 2 == )
		{
			for (int i = c - 1; i > 0; i--)
			{
				buff[j] = m[i][j];
				m[i][j] = m[i - 1][j];
			}
		}
	}*/








	/*for (int i = c-1; i > 0; i--)
	{
		for (int j = 0; j < c; j++)
		{
			if (j == 0)
			{
				m[0][0] = m[c - 1][c - 1];
			}
			else
			{
				m[c-1][c-1] = m[c - 1][j];
			}
			m[i][j] = m[i - 1][j];
		}
	}*/

	for (int i = 0; i < c; i++) //вывод 
	{
		for (int j = 0; j < c; j++)
			cout << setw(10) << m[i][j] << " ";
		cout << endl;
	}

		//return m;
}

/*void move(int t, int **a)
{
	for (int i = 0; i < c; i++) //вывод 
	{
		for (int j = 0; j < c; j++)
			cout << setw(5) << a[i][j] << " ";
		cout << endl;
	}
}*/