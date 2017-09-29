// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the DLL_G3_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// DLL_G3_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef DLL_G3_EXPORTS
#define DLL_G3_API __declspec(dllexport)
#else
#define DLL_G3_API __declspec(dllimport)
#endif
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>

// This class is exported from the DLL_G3.dll
class DLL_G3_API CDLL_G3 {
public:
	CDLL_G3(void);
	// TODO: add your methods here.
};

extern DLL_G3_API int nDLL_G3;

DLL_G3_API int fnDLL_G3(void);


class DLL_G3_API MyFunctions{
private:
	double storedVal;
public:
	//Active US
	double sum(double a,double b);
	double subtraction(double a, double b);
	double multiplication(double a, double b);
	double division(double a, double b);
	double squareroot(double a);
	double absolutevalue(double a);
	int binarynumber(int a);
	double calcFactorial(double number);
	double squareNumber(double number);
	void storeNumber(double number);
	double getStoredNumber();
	double getPI();
	double calcPower(double number, int power);
	double changeSign(double number);
	double getTan(double number);
	double getMod(double x, double y);
	int doubleToInt(double number);
	void deleteSessionFile();
	void writeExpressionToFile(std::string expression);
	std::string getExpressionsFromFile();
};