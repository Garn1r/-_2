#include <iostream>
#include <conio.h>
#include "stdio.h"

class USATU//создание класса USATU
{
public:
		int faculties, filial; // два публичных атрибута
		USATU()//конструктор
	{
		printf("USATU()\n");//отладочный вывод, чтоб видеть какой конструктор вызвается
		faculties = 7; //свойства класса USATU (поля)
		filial = 2;   // присваиваем значение свойствам
	}
	USATU(int faculties, int filial)//конструктор с параметрами
	{
		printf("USATU(int faculties, int filial)\n");
		this->faculties = faculties;
		this->filial = filial;
	}
	USATU(const USATU &year)//копирующий конструктор, переносит все свойства из переданного объекта
	{
		printf("USATU(const point &year)\n");
		faculties = year.faculties;
		filial = year.filial;
	}
	~USATU()//деструктор
	{
		printf("%d, %d\n", faculties, filial);//вывод текущего состояния объекта, чтоб видеть что в объекте хранилось
		printf("~USATU()\n");
	}
};  

int main()
{
	{
		USATU year;//создаём объекты
		USATU year2(1932, 1932);
		USATU year3(year2);
	}
	_getch();
	return 0;
}

