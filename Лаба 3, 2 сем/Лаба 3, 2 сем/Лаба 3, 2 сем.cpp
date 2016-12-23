// argc_argv.cpp: определяет точку входа для консольного приложения.

#include "stdafx.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <cstring>
#include <fstream>
//#include <string>
#include <sstream>

using namespace std;

void main(int argc, char *argv[])
{
	int b = 0;
	int e = 0;
	//char diapazon[] = "1,2,5,7-9"; правка №2
	int p = 0;
	string way;
	char keys[] = "bepC";
	/*for (int i = 0; strlen(diapazon); i++)
		if (diapazon[i] == '-')
			diapazon[strlen(diapazon) + 1];*/ //(раскоментировать при удачной правке)
	//писать здесь правка №2

	
		
	
	for(int i=1; i<argc; i++)
	{
		if (strspn(argv[i], keys) > 1) //проверка на две буквы в одном аргументе
		{
			std::cout << "Неверный ввод аргумента "<<i;
			//system("pause");
			break;
		}
		char *letter = strpbrk(argv[i], keys);
		if ((*letter == 'b')&&(b==0))
		{
			letter += 2;
			b = atoi(letter);
		}//вытягиваем из чара int
		if ((*letter == 'e') && (e == 0))
		{
			letter += 2;
			e = atoi(letter);
		}//вытягиваем из чара int
		if ((*letter == 'p') && (p == 0))
		{
			letter += 2;
			p = atoi(letter);
		}//вытягиваем из чара int
		if (*letter == 'C')
		{
			way = letter;
		}
		/*else
		{
			cout << "Ошибка программы";
			system("pause");
			break;
		}*/

	}
		
	

	cout << "\n arg b = " << b << endl;
	cout << "\n arg e = " << e << endl;
	cout << "\n arg p = " << p << endl;
	cout << "\n" << way << endl<<endl;
	
	ifstream F; //далее следует код, который я писал в полусознательном состоянии и я его вряд-ли смогу объяснить
	F.open(way, ios::in);
	char s[256];
	string w;
	if (F)
	{
		while (!F.eof())
		{
			int words = 0;
			F.getline(s, 256);
			cout << s <<endl;
			istringstream iss(s);
			char *pstr= strtok(s, " ");
			while (pstr != nullptr)
			{
				pstr = strtok(nullptr, " ");
				words++;

			}

			for (int i = 0; i < words; i++)
			{
				iss >> w;
				if (i==p)
				{				
				cout << w <<endl;
				}
			}
		}
	}
//	istringstream iss(s);
//	int i = 1;
/*	while (i <= 3)
	{
		iss >> w;
		++i;
	}*/
	
	
	
	
	F.close();	
	system("pause");
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*if (argc > 1)// если передаем аргументы, то argc будет больше 1(в зависимости от кол-ва аргументов)
		{
			cout << argv[1] << endl;// вывод второй строки из массива указателей на строки(нумерация в строках начинается с 0 )
		}
		else
		{
			cout << "Not arguments" << endl;
		}

		int n;
		n = strlen(argv[1]); // n= длина текста
							 //for (int i = 0; i<n; i++)
		if ((*argv[1] >= '0')&&(*argv[1] <= '9')) // если цифру найдено - то выводим ее
			cout << atoi(argv[1])<< " ";*/
		//system("pause");








	/*int N=0, M=0;

	if (argc > 1)// если передаем аргументы, то argc будет больше 1(в зависимости от кол-ва аргументов)
	{
		cout << argv[1] << endl;// вывод второй строки из массива указателей на строки
	}
	else
	{
		cout << "Not arguments" << endl;
	}




	//char *str = new char;
	int n;
	// ввод текста
	//	cout << "Vvedit` txt \n\n";
	//gets(str);
	n = strlen(argv[1]); // n= длина текста
	//for (int i = 0; i<n; i++)
		if (*argv[1] >= '0'&&*argv[1] <= '9') // если цифру найдено - то выводим ее
			cout << argv[1] << " ";


	system("pause");


	/*const char *b = argv[1];
	int sizeB = strlen(b);
	char *buf = (char*)malloc(sizeB + 1);;

	if (argc > 1)// если передаем аргументы, то argc будет больше 1(в зависимости от кол-ва аргументов)
	{
	if(b[0] == '-' && b[1] == 'b' && b[2] == '=')
	{
	for(int i = 3; i < sizeB; ++i)
	{
	strcat(buf, b[i]);
	}
	N = atoi(buf);
	cout << sizeB << endl;
	}
	cout << argv[1][1] << endl;// вывод второй строки из массива указателей на строки
	}
	else
	{
	cout << "Not arguments" << endl;
	}
	cout << N << endl;*/
}