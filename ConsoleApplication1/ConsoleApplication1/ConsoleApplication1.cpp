// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>//������ �����/������
#include "cstdlib" //������ ������� system
#include <ctime> // �������� time()
using namespace std;
int c = 0; //���������� ���������


void random(int c) //��������� ������ � ���������� �������
{
	srand(time(nullptr)); //���������� ������
	int *m = (int*)malloc(c * sizeof(int)); //m �������, �2 ���-�� ��������� 
											//void* calloc(c, 1);


	for (int i = 0; i < c; i++)
	{
		m[i] = rand(); //% sizeof(int) + 1;//*time(NULL);
		cout << m[i] << endl;
	}
}


int main()
{
	setlocale(LC_ALL, "RUSSIAN");//��������� �������� �����
	cout << "���������� ��������� ������� = ";
	cin >> c; 
	cout << endl;
	random(c);
	system("pause");
}
