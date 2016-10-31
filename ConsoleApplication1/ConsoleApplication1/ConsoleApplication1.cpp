// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
//#include "stdlib.h"
#include "iostream"//работа ввода/вывода
#include "cstdlib" //работа функции system
#include <ctime> // содержит time()
using namespace std;


void random(int c2) //выделение памяти и наполнение массива
{
	srand(time(NULL));
	int *m = (int*)malloc(c2 * sizeof(int)); //m матрица, с2 кол-во элементов 
											//void* calloc(c, 1);

	for (int i = 0; i < c2; i++)
	{
		m[i] = rand();
		cout << m[i] << endl;
	}
}


int main()
{
	setlocale(LC_ALL, "RUSSIAN");//поддержка русского языка
	int c = 0;
	cout << "Количество элементов матрицы = ";
	cin >> c; 
	cout << endl;
	random(c);
	
	system("pause");
}
