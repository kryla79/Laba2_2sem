// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>//работа ввода/вывода
#include "cstdlib" //работа функции system
#include <ctime> // содержит time()
using namespace std;
int c = 0; //количество элементов


void random(int c) //выделение памяти и наполнение массива
{
	srand(time(nullptr)); //неистинный рандом
	int *m = (int*)malloc(c * sizeof(int)); //m массив, с2 кол-во элементов 
													
	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < c; j++)
		{
			m[i][j] = rand();
			cout << m[i] << endl;
		}/*[i] = rand();
		cout << m[i] << endl;*/
	}
}


int main()
{
	setlocale(LC_ALL, "RUSSIAN");//поддержка русского языка
	cout << "Количество элементов матрицы = ";
	cin >> c; 
	cout << endl;
	random(c);
	system("pause");
}
