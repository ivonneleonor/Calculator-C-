// ClassLibrary1.h

#pragma once

#include "..\DLL_G3\DLL_G3.h"
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Configuration;
using namespace std;
namespace myWrapper {

	public ref class MyFunctionWrapper {
	private:
		MyFunctions* _myFunctions;
	public:
		MyFunctionWrapper();
		~MyFunctionWrapper();


		double squareNumber(double number);
		double absolutevalue(double a);
		double sum(double a, double b);
		double subtraction(double a, double b);
		double multiplication(double a, double b);
		double division(double a, double b);
		double squareroot(double a);
		int binarynumber(int a);
		double calcFactorial(double number);
		void storeNumber(double number);
		double getStoredNumber();
		double getPI();
		double calcPower(double number, int power);
		double changeSign(double number);
		double getTan(double number);
		double getMod(double x, double y);
		int doubleToInt(double number);
		void deleteSessionFile();
		void writeExpressionToFile(System::String^ expression);
		System::String^ getExpressionsFromFile();

	};
}
