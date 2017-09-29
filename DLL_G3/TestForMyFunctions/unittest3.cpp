#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\DLL_G3\DLL_G3.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestForMyFunctions
{
	TEST_CLASS(UnitTest3)
	{
		MyFunctions functions;
	public:

		TEST_METHOD(store_double_6)
		{
			functions.storeNumber(6);
			Assert::AreEqual(6, functions.getStoredNumber(), 0.0001);	
		}
		
		TEST_METHOD(change_sign_6)
		{
			Assert::AreEqual(-6, functions.changeSign(6), 0.0001);
		}

		TEST_METHOD(double_2_int)
		{
			Assert::AreEqual(2, functions.doubleToInt(1.567), 0.0001);
		}

		TEST_METHOD(get_mod_7and3)
		{
			Assert::AreEqual(1, functions.getMod(7, 3), 0.0001);
		}
		
		TEST_METHOD(get_tan_04057)
		{
			Assert::AreEqual(0.4295, functions.getTan(0.4057), 0.0001);
		}

	};
}