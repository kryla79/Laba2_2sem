// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>//������ �����/������
#include <ctime> // �������� time()
#include <iomanip>// ������ setw()
using namespace std;
int c = 0; //���������� ���������
int t = 0; //���������� �������


void computing(int); //�������� �������

int main()
{
	setlocale(LC_ALL, "RUSSIAN");//��������� �������� �����
	cout << "������ ������� = ";
	cin >> c; 
	cout << endl;
	cout << "���������� ������� ������� = ";
	cin >> t;
	computing(c);
	system("pause");
}


void computing(int c) //��������� ������, ���������� ������� � ��� �����������
{
	int lstdgt;//��������� �������� � �������
	srand(time(nullptr)); //���������� ������
	int **m = (int **)malloc(c * sizeof(int*)); //��������� ������, m -- �������
	for (int i = 0; i < c; i++)
		m[i] = (int*)malloc(c * sizeof(int));
	for (int i = 0; i < c; i++)
		for (int j = 0; j < c; j++)
			m[i][j] = rand();
	for (int i = 0; i < c; i++) //����� 
	{
		for (int j = 0; j < c; j++)
			cout << setw(5) << m[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	for (int tc = 0; tc < t; tc++) 
	{
		if (c % 2 == 1)
			lstdgt = m[c - 1][c - 1];
		else lstdgt = m[0][c - 1];
		for (int j = c - 1;j >= 0;j--) //��������
		{
			if (j == 0 || j % 2 == 0)
				for (int i = c - 1;i > 0; i--)				
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
					else m[i][j] = m[i - 1][j];
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
		}
		for (int i = 0; i < c; i++) //����� 
		{
			for (int j = 0; j < c; j++)
				cout << setw(5) << m[i][j] << " ";
			cout << endl;
		}
		cout << endl;
	}
}
