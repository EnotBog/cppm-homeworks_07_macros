#include <cstdio>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>


#define MODE 1
#ifndef MODE
#error MODE небыл оределен
#endif

#if MODE == 1

int add(int a, int b)
{
	return a + b;
}
#endif




int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

#if MODE==0
	std::cout << "Работаю в режиме тренировки";
	return 0;
#elif MODE==1
	int a = 0, b = 0;
	std::cout << "Работаю в боевом режиме" << "\n";
	std::cout << "Введите число 1: " << "\n";
	std::cin >> a;
	std::cout << "Введите число 2: " << "\n";
	std::cin >> b;
	std::cout << "Результат сложения: "<< add(a, b) << "\n";
	return 0;
#else
	std::cout << "Неизвестный режим. Завершение работы";
	return 1;
#endif


	
}






