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
	student(const student& Luntik)//копирующий конструктор, переносит все свойства из переданного объекта
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



class height_student :public student
{
protected:
	int height;
public:
	height_student() :student()//конструктор по умолчанию
	{
		printf("height_student()\n");//отладочный вывод, чтоб видеть какой конструктор вызвается
		height = 0; //свойства класса student (поля)   // присваиваем значение свойствам
	}
	height_student(int age, int height) :student(age)//конструктор с параметрами
	{
		printf("height_student(int age)\n");
		this->height = height;
	}
	height_student(const height_student& Luntik)//копирующий конструктор, переносит все свойства из переданного объекта
	{
		printf("height_student(const point &Luntik)\n");
		height = Luntik.height;
	}
	~height_student()//деструктор
	{
		printf("%d, height=%d\n", age, height);//вывод текущего состояния объекта, чтоб видеть что в объекте хранилось
		printf("~height_student()\n\n");
	}
	void change_height(int new_height)
	{
		height = new_height;
	}
	void vozrast();
};



int main()
{
	{
		student Luntik;//создаём объекты
		student Iskander(19);
		student Ainur(Iskander);
	}
	student* DinamLuntik = new student;//динамически создаём объекты
	student* DinamIskander = new student(19);
	student* DinamAinur = new student(*DinamIskander);
	delete DinamLuntik;
	delete DinamIskander;
	delete DinamAinur;


	student* DinamIan = new student(19);
	DinamIan->vozrast();
	DinamIan->summ(2);
	delete DinamIan;


	height_student* Iskander = new height_student(19, 180);
	delete Iskander;


	student *Lee = new student(21);
	//height_student *Vlad = Lee;
    student *Michael = new height_student(20, 12);
	height_student *Vlad = new height_student(20, 13);
	delete Michael;
	delete Vlad;


	_getch();
	return 0;
}

