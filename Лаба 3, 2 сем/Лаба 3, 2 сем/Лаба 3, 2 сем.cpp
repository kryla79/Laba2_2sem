// argc_argv.cpp: ���������� ����� ����� ��� ����������� ����������.

#include "stdafx.h"
#include <iostream>
using namespace std;

void main(int argc, char* argv[])
{
	if (argc > 1)// ���� �������� ���������, �� argc ����� ������ 1(� ����������� �� ���-�� ����������)
		{
			cout << argv[1] << endl;// ����� ������ ������ �� ������� ���������� �� ������
		}
	else
		{
			cout << "Not arguments" << endl;
		}
	system("pause");
}