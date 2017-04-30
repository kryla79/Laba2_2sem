#include "stdafx.h"
#include <iostream>
//#include <cmath>
#include <locale>

using namespace std;
void display(unsigned int x);
//глобальные переменные

void display(unsigned int x) //перевод в BIN с разделением байтов
{
	for (int i = 0; i < sizeof(int)*8; ++i)
	{
		if (i && !(i % 8)) cout << " ";
		cout << static_cast<bool>(x & 0x80000000);
		x <<= 1;
	}
}

void isSymmetry(unsigned int x) //проверка байтов на симметричность
{
	cout << endl;
	for(int i = 0; i < sizeof(int)/2; i++)
	{
		bool one, two, three, four;
		one = (x & (1 << i * 8));
		two = (x & (1 << 7 + i * 8));
		three = (x & (1 << 1 + i * 8));
		four = (x & (1 << 6 + i * 8));
		if (((!one||two)&&(one||!two))&&((!three||four)&&(three||!four)))
		{
			
		}
	}
}

int main()
{
	unsigned int x;
	cin >> x;
	display(x);
	cout << endl;
	system("PAUSE");
}