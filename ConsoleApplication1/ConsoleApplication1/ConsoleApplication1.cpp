// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
//#include "stdlib.h"
#include "iostream"//������ �����/������
#include "cstdlib" //������ ������� system
#include <ctime> // �������� time()
using namespace std;


void random(int c2) //��������� ������ � ���������� �������
{
	srand(time(NULL));
	int *m = (int*)malloc(c2 * sizeof(int)); //m �������, �2 ���-�� ��������� 
											//void* calloc(c, 1);

	for (int i = 0; i < c2; i++)
	{
		m[i] = rand();
		cout << m[i] << endl;
	}
}


int main()
{
	setlocale(LC_ALL, "RUSSIAN");//��������� �������� �����
	int c = 0;
	cout << "���������� ��������� ������� = ";
	cin >> c; 
	cout << endl;
	random(c);
	
	system("pause");
}
