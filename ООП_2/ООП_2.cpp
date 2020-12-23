#include <iostream>
#include <conio.h>
#include "stdio.h"

class Point//создание класса Point
{
public:
		int x, y; // два публичных атрибута
		Point()//конструктор
	{
		printf("Point()\n");//отладочный вывод, чтоб видеть какой конструктор вызвается
		x = 0;
		y = 0;
	}
	Point(int x, int y)//конструктор с параметрами
	{
		printf("Point(int x, int y)\n");
		this->x = x;
		this->y = y;
	}
	Point(const Point &p)//копирующий конструктор, переносит все свойства из переданного объекта
	{
		printf("Point(const point &p)\n");
		x = p.x;
		y = p.y;
	}
	~Point()//деструктор
	{
		printf("%d, %d\n", x, y);//вывод текущего состояния объекта, чтоб видеть что в объекте хранилось
		printf("~Point()\n");
	}
};  

int main()
{
	{
		Point p;//создаём объекты
		Point p2(10, 20);
		Point p3(p2);
	}
	_getch();
	return 0;
}

