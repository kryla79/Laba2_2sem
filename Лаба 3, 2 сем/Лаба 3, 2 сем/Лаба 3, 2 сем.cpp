// argc_argv.cpp: ���������� ����� ����� ��� ����������� ����������.

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
	//char diapazon[] = "1,2,5,7-9"; ������ �2
	int p = 0;
	string way;
	char keys[] = "bepC";
	/*for (int i = 0; strlen(diapazon); i++)
		if (diapazon[i] == '-')
			diapazon[strlen(diapazon) + 1];*/ //(���������������� ��� ������� ������)
	//������ ����� ������ �2

	
		
	
	for(int i=1; i<argc; i++)
	{
		if (strspn(argv[i], keys) > 1) //�������� �� ��� ����� � ����� ���������
		{
			std::cout << "�������� ���� ��������� "<<i;
			//system("pause");
			break;
		}
		char *letter = strpbrk(argv[i], keys);
		if ((*letter == 'b')&&(b==0))
		{
			letter += 2;
			b = atoi(letter);
		}//���������� �� ���� int
		if ((*letter == 'e') && (e == 0))
		{
			letter += 2;
			e = atoi(letter);
		}//���������� �� ���� int
		if ((*letter == 'p') && (p == 0))
		{
			letter += 2;
			p = atoi(letter);
		}//���������� �� ���� int
		if (*letter == 'C')
		{
			way = letter;
		}
		/*else
		{
			cout << "������ ���������";
			system("pause");
			break;
		}*/

	}
		
	

	cout << "\n arg b = " << b << endl;
	cout << "\n arg e = " << e << endl;
	cout << "\n arg p = " << p << endl;
	cout << "\n" << way << endl<<endl;
	
	ifstream F; //����� ������� ���, ������� � ����� � ���������������� ��������� � � ��� ����-�� ����� ���������
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
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*if (argc > 1)// ���� �������� ���������, �� argc ����� ������ 1(� ����������� �� ���-�� ����������)
		{
			cout << argv[1] << endl;// ����� ������ ������ �� ������� ���������� �� ������(��������� � ������� ���������� � 0 )
		}
		else
		{
			cout << "Not arguments" << endl;
		}

		int n;
		n = strlen(argv[1]); // n= ����� ������
							 //for (int i = 0; i<n; i++)
		if ((*argv[1] >= '0')&&(*argv[1] <= '9')) // ���� ����� ������� - �� ������� ��
			cout << atoi(argv[1])<< " ";*/
		//system("pause");








	/*int N=0, M=0;

	if (argc > 1)// ���� �������� ���������, �� argc ����� ������ 1(� ����������� �� ���-�� ����������)
	{
		cout << argv[1] << endl;// ����� ������ ������ �� ������� ���������� �� ������
	}
	else
	{
		cout << "Not arguments" << endl;
	}




	//char *str = new char;
	int n;
	// ���� ������
	//	cout << "Vvedit` txt \n\n";
	//gets(str);
	n = strlen(argv[1]); // n= ����� ������
	//for (int i = 0; i<n; i++)
		if (*argv[1] >= '0'&&*argv[1] <= '9') // ���� ����� ������� - �� ������� ��
			cout << argv[1] << " ";


	system("pause");


	/*const char *b = argv[1];
	int sizeB = strlen(b);
	char *buf = (char*)malloc(sizeB + 1);;

	if (argc > 1)// ���� �������� ���������, �� argc ����� ������ 1(� ����������� �� ���-�� ����������)
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
	cout << argv[1][1] << endl;// ����� ������ ������ �� ������� ���������� �� ������
	}
	else
	{
	cout << "Not arguments" << endl;
	}
	cout << N << endl;*/
}