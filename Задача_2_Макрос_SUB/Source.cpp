#include <cstdio>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

#define SUB(a,b) ((a)-(b))
#ifndef SUB
#error SUB неопределен
#endif // !SUB





int main(int argc, char** argv)
{
	int a = 6;
	int b = 5;
	int c = 2;
	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;

	return 0;
}