#include "Car.h"

Car::Car(const char * a, const char * b, int c, int d)
{
	color = new char[strlen(a) + 1];
	strcpy_s(color, strlen(a) + 1, a);
	model = new char[strlen(b) + 1];
	strcpy_s(model, strlen(a) + 1, b);
	date = c;
	maxSpeed = d;
}

Car::~Car()
{
	delete[] model;
	delete[] color;
}

void Car::info() {

	cout << color << " " << model << " year:" << date << " Max Speed:" << maxSpeed << endl;
}

void Car::start(){

}
