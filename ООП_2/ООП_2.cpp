#include <iostream>
#include <conio.h>
#include "stdio.h"

class student//создание класса student
{
public:
	int age; // два публичных атрибута
	student()//конструктор
	{
		printf("student()\n");//отладочный вывод, чтоб видеть какой конструктор вызвается
		age = 33; //свойства класса student (поля)   // присваиваем значение свойствам
	}
	student(int age)//конструктор с параметрами
	{
		printf("student(int age)\n");
		this->age = age;
	}
	student(const student& FORT)//копирующий конструктор, переносит все свойства из переданного объекта
	{
		printf("student(const point &FORT)\n");
		age = FORT.age;
	}
	~student()//деструктор
	{
		printf("%d\n", age);//вывод текущего состояния объекта, чтоб видеть что в объекте хранилось
		printf("~student()\n");
	}
};

int main()
{
	{
		student Luntik;//создаём объекты
		student Iskander(19);
		student Ainur(Iskander);
	}
	_getch();
	return 0;
}

