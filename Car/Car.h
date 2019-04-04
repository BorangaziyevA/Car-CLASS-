#pragma once
#include<iostream>
#include<Windows.h>

using namespace std;
class Car
{
	char *model;
	char *color;
	int date;
	int maxSpeed;

public:
	Car(const char* a,const char*b,int c,int d);

	~Car();

	void info();
	void start();
};

