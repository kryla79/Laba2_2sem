#include "stdafx.h"
#include <stdlib.h>
#include <iostream>//������ �����/������
#include <ctime> // �������� time()
#include <iomanip>// ������ setw()
using namespace std;
int c = 0; //���������� ���������
//int t = 0; ���������� �������
void computing(int, int); //�������� �������

int main()
{
	int t = 0;
	setlocale(LC_ALL, "RUSSIAN");//��������� �������� �����
	cout << "������ ������� = ";
	cin >> c; 
	cout << "���������� ������� ������� = ";
	cin >> t;
	computing(c, t);
	system("pause");
}

void computing(int c, int t)
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
#pragma.region ��������
		for (int j = c - 1;j >= 0;j--)
		{
#pragma.region �������� ����. j=0, 2, 4...
			if (j % 2 == 0)
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
#pragma.endregion  
#pragma region ׸���� ����. j=1, 3, 5...
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
#pragma endregion
#pragma.endregion
		for (int i = 0; i < c; i++) //����� 
		{
			for (int j = 0; j < c; j++)
				cout << setw(5) << m[i][j] << " ";
			cout << endl;
		}
		cout << endl;
	}
}
