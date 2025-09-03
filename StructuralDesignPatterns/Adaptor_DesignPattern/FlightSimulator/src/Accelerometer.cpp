#include "../inc/Accelerometer.h"
#include "../inc/KeyBoard.h"
#include <random>
#include <iostream>
double Accelerometer::GetHorizontalAAxis() {
	std::uniform_int_distribution<> dist{ -10,10 };

	double val = dist(KeyBoard::MyRand);
	std::cout << "Horizontal value is " << val << " " << std::endl;
	return val;
}

double Accelerometer::GetVerticalAAxis() {
	std::uniform_int_distribution<>dist{-10, 10};
	double val = dist(KeyBoard::MyRand);
	std::cout << "Vertical value is " << val << " " << std::endl;
	return val;
}