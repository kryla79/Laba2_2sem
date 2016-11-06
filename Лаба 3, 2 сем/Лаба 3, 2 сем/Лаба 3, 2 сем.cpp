// argc_argv.cpp: определяет точку входа для консольного приложения.

#include "stdafx.h"
#include <iostream>
using namespace std;

void main(int argc, char* argv[])
{
	if (argc > 1)// если передаем аргументы, то argc будет больше 1(в зависимости от кол-ва аргументов)
		{
			cout << argv[1] << endl;// вывод второй строки из массива указателей на строки
		}
	else
		{
			cout << "Not arguments" << endl;
		}
	system("pause");
}