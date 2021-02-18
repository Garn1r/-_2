#include <iostream>
#include <conio.h>
#include "stdio.h"

class student//создание класса student
{
//protected:
public:
	int age; //  публичныq атрибут
public:
	student()//конструктор по умолчанию
	{
		printf("student()\n");//отладочный вывод, чтоб видеть какой конструктор вызвается
		age = 33; //свойства класса student (поля)   // присваиваем значение свойствам
	}
	student(int age)//конструктор с параметрами
	{
		printf("student(int age)\n");
		this->age = age;
	}
	student(const student &Luntik)//копирующий конструктор, переносит все свойства из переданного объекта
	{
		printf("student(const point &Luntik)\n");
		age = Luntik.age;
	}
	~student()//деструктор
	{
		printf("%d\n", age);//вывод текущего состояния объекта, чтоб видеть что в объекте хранилось
		printf("~student()\n\n");
	}
	void summ(int overage)
	{
		age = age + overage;
	}
	void vozrast();
};
void student::vozrast()
{
	age = 0;
}

int main()
{
	{
		student Luntik;//создаём объекты
		student Iskander(19);
		student Ainur(Iskander);
	}
	student *DinamLuntik=new student;//динамически создаём объекты
	student *DinamIskander=new student(19);
	student *DinamAinur=new student(*DinamIskander);
	delete DinamLuntik;
	delete DinamIskander;
	delete DinamAinur;

	student *DinamIan = new student(19);
	DinamIan->vozrast();
	DinamIan->summ(2);
	delete DinamIan;


	_getch();
	return 0 ;
}

