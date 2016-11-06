// Лаба 3, 2 сем.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

void main(int argc, char *argv[])
{
	if (argc > 0)
	{
		std::cout<<argc << argv[1];
	}
	else
	{
		std::cout <<argc;
		
	}
}

