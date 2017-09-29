// This is the main DLL file.

#include "stdafx.h"
#include "ClassLibrary1.h"


using namespace myWrapper;

namespace myWrapper{
	MyFunctionWrapper::MyFunctionWrapper(){
		_myFunctions = new MyFunctions();
	}

	MyFunctionWrapper::~MyFunctionWrapper(){
		delete _myFunctions;
		_myFunctions = 0;
	}

	

	double MyFunctionWrapper::squareNumber(double a)
	{
		return _myFunctions->squareNumber(a);
	}


	double MyFunctionWrapper::absolutevalue(double a)
	{
		return _myFunctions->absolutevalue(a);
	}


	double MyFunctionWrapper::sum(double a, double b)
	{
		return _myFunctions->sum(a,b);
	}

	double MyFunctionWrapper::subtraction(double a, double b)
	{
		return _myFunctions->subtraction(a, b);
	}

	double MyFunctionWrapper::multiplication(double a, double b)
	{
		return _myFunctions->multiplication(a, b);
	}

	double MyFunctionWrapper::division(double a, double b)
	{
		return _myFunctions->division(a, b);
	}

	double MyFunctionWrapper::squareroot(double a)
	{
		return _myFunctions->squareroot(a);
	}

	//double MyFunctionWrapper::squarenum(double a)
	//{
	//	return _myFunctions->squareNumber(a);
	//}

	int MyFunctionWrapper::binarynumber(int a)
	{
		return _myFunctions->binarynumber(a);
	}
	
	double MyFunctionWrapper::calcFactorial(double number)
	{
		return _myFunctions->calcFactorial(number);
	}

	void MyFunctionWrapper::storeNumber(double number)
	{
		return _myFunctions->storeNumber(number);
	}

	double MyFunctionWrapper::getStoredNumber()
	{
		return _myFunctions->getStoredNumber();
	}

	double MyFunctionWrapper::getPI()
	{
		return _myFunctions->getPI();
	}

	double MyFunctionWrapper::calcPower(double number, int power)
	{
		return _myFunctions->calcPower(number,power);
	}

	double MyFunctionWrapper::changeSign(double number)
	{
		return _myFunctions->changeSign(number);
	}

	double MyFunctionWrapper::getTan(double number)
	{
		return _myFunctions->getTan(number);
	}

	double MyFunctionWrapper::getMod(double x, double y)
	{
		return _myFunctions->getMod(x,y);
	}

	int MyFunctionWrapper::doubleToInt(double number)
	{
		return _myFunctions->doubleToInt(number);
	}

	void MyFunctionWrapper::deleteSessionFile()
	{
		_myFunctions->deleteSessionFile();
	}

	void MyFunctionWrapper::writeExpressionToFile(System::String^ expression)
	{
		msclr::interop::marshal_context context;
		std::string stdStringExpression = context.marshal_as<std::string>(expression);
		_myFunctions->writeExpressionToFile(stdStringExpression);
	}

	System::String^ MyFunctionWrapper::getExpressionsFromFile()
	{
		return gcnew String(_myFunctions->getExpressionsFromFile().c_str());
	}
}
