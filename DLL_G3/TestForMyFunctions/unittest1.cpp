#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\DLL_G3\DLL_G3.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestForMyFunctions
{		
	TEST_CLASS(UnitTest1)
	{
	
		MyFunctions functions;
	public:
		
		TEST_METHOD(Sum_7plu8_15)
		{
			Assert::AreEqual(15.0, functions.sum(7, 8), 0.0001);
		}

		TEST_METHOD(Substraction_15minus8_7)
		{
			Assert::AreEqual(5, functions.subtraction(15, 10), 0.0001);
		}

		TEST_METHOD(Multiplication_7times3_21)
		{
			Assert::AreEqual(21, functions.multiplication(7, 3), 0.0001);
		}

		TEST_METHOD(division_100dividedby10_10)
		{
			Assert::AreEqual(10, functions.division(100, 10), 0.0001);
		}
		TEST_METHOD(division_by_0_Exception)
		{
			bool exceptionCaught = false;
			try {
				functions.division(10, 0);
			}
			catch (std::invalid_argument& exception) {
				exceptionCaught = true;
			}
			Assert::IsTrue(exceptionCaught);
		
		}

		TEST_METHOD(sqrt_of_100_10)
		{
			Assert::AreEqual(3.5, functions.squareroot(12.25), 0.00001);
		}
		
		TEST_METHOD(sqrt_of_a_negative)
		{
			Assert::AreEqual(-1, functions.squareroot(-1), 0.00001);
		}
		


		TEST_METHOD(binary_of_49_is_100011)
		{
			//Assert::AreEqual("100011", functions.binarynumber(49), 0);
		}

		TEST_METHOD(factorial_of_5_is_120)
		{
			Assert::AreEqual(120, functions.calcFactorial(5), 0.000001);
		}
		TEST_METHOD(factorial1_of_0_is_1)
		{
			Assert::AreEqual(1, functions.calcFactorial(0), 0.000001);
		}
		TEST_METHOD(factorial2_of_1_is_1)
		{
			Assert::AreEqual(1, functions.calcFactorial(1), 0.000001);
		}
		TEST_METHOD(factorial3_of_negnum_is_error)
		{
			Assert::AreEqual(0, functions.calcFactorial(-5), 0.000001);
		}
		TEST_METHOD(factorial4_of_floatnum_is_error)
		{
			Assert::AreEqual(0, functions.calcFactorial(5.5), 0.000001);
		}
	};
}