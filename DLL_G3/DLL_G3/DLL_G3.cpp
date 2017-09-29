// DLL_G3.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "DLL_G3.h"
#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <algorithm>


using namespace std;
//Test for function sum 
double MyFunctions::sum(double a, double b){
	double sum1;
	sum1 = a + b;
	return sum1;
}
// TDD for function sustraction
double MyFunctions::subtraction(double a, double b){
	double substraction;
	substraction = a - b;
	return substraction;
}
// TDD for function multiplication
double MyFunctions::multiplication(double a, double b){
	double multiplication;
	multiplication = a*b;
	return  multiplication;
}
// TDD for function division
double MyFunctions::division(double a, double b){
	double division;
	if (b == 0)
		throw std::invalid_argument("Undefined operation. Cannot divided by 0.");
	division = a / b;
	return division;
}
//absolute value function to be use in the squareroot function
double MyFunctions::absolutevalue(double a){
	if (a < 0)
	{
		a = -a;
	}
	return a;
}

//TTD square root
//implementation of the babilon algorithm to calculate the square root of a number
double MyFunctions::squareroot(double x){
	double r = x, t = 0;
	if (x < 0)
		return -1;
	while (absolutevalue(t - r) > 0.0000001) {
		t = r;
		r = (x / r + r) / 2;
	}

	return r;
}

//This function return the factorial of a number
double MyFunctions::calcFactorial(double a){
	double result = 1;
	// check if it has fraction part
	if (a - int(a) != 0)
		return 0;
	else
	{
		if (a >= 0)
		{
			if (a == 0 || a == 1)
				return 1;
			else
			{
				for (double i = a; i >= 1; i--)
				{
					result *= i;
				}
				return result;
			}
		}
		else
			return 0;
	}
}

//this function return the binary number of an integer in base 2
int MyFunctions::binarynumber(int a){
	int mod, cont,b;
	b = a;
	vector<int> binary;
	cont = 0;

	a = absolutevalue(a);

	do{
		//we take the module 2 of the number
		//if it has a residuous equals to 1 we get 1 to add to the binary representation
		//if not with a zero to the binary representation
		mod = a % 2;
		if (mod == 1)
		{
			a = a - 1;
			binary.push_back(1);
		}
		else
		{
			binary.push_back(0);
		}
		a = a / 2;
		cont = cont + 1;
	} while (a > 0);
	//for negatives we add a bit more with 1 at the begining
	if (b < 0)
	{
		binary.push_back(1);
		cont = cont + 1;
	}
	reverse(binary.begin(), binary.end());
		
	stringstream ss;
	for (int i = 0; i < cont; i++)
	{
		ss << binary[i];
	}


	string str = ss.str();
	//cout << str << endl;
	a = atoi(str.c_str());

	return a;

}


void MyFunctions::storeNumber(double number) {
	storedVal = number;
}
double MyFunctions::getStoredNumber() {
	return storedVal;
}
double MyFunctions::getPI() { return 3.1415926535; }

double MyFunctions::calcPower(double number, int power) {
	double result = 1;
	if (number == 0 && power == 0)
		throw std::invalid_argument("Undefined operation. Cannot raise 0 to the power of 0.");
	else if (power < 0)
		for (int i = 0; i > power; i--)
			result *= 1 / number;
	else
		for (int i = 0; i < power; i++)
			result *= number;
	return result;
}
//double MyFunctions::calcTangent(double number) { return 0; }
//int MyFunctions::calcModule(double number) { return 0; }

double MyFunctions::changeSign(double number) {
	return number * -1;
}

double MyFunctions::squareNumber(double number) {
		return number*number;
}

double MyFunctions::getTan(double number) {
	return tan(number);
}

int MyFunctions::doubleToInt(double number) {
	double x = number < 0.0 ? -0.5 : 0.5;
	return static_cast<int>(number + x);
}

double MyFunctions::getMod(double x, double y) {
	return doubleToInt(x) % doubleToInt(y);;
}

void MyFunctions::deleteSessionFile() {
	remove("../SessionHistory.txt");
}

void MyFunctions::writeExpressionToFile(std::string expression) {
	ofstream outFile("../SessionHistory.txt", std::ios_base::app);
	outFile << expression << "\r\n";
	outFile.close();
}

std::string MyFunctions::getExpressionsFromFile() {
	ifstream inFile("../SessionHistory.txt");
	std::string expressions((std::istreambuf_iterator<char>(inFile)), std::istreambuf_iterator<char>());
	return expressions;
}