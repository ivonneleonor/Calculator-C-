#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\DLL_G3\DLL_G3.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestForMyFunctions
{
	TEST_CLASS(UnitTest2)
	{
		MyFunctions functions;
	public:

		TEST_METHOD(sqr_1_1)
		{
			Assert::AreEqual(1, functions.squareNumber(1), 0.0001);
		}
		TEST_METHOD(sqr_0_0) {
			Assert::AreEqual(0, functions.squareNumber(0), 0.0001);
		}
		TEST_METHOD(sqr_minus2_4) {
			Assert::AreEqual(4, functions.squareNumber(-2), 0.0001);
		}
		TEST_METHOD(sqr_4_16) {
			Assert::AreEqual(16, functions.squareNumber(4), 0.0001);
		}
		TEST_METHOD(sqr_1point5_2point25) {
			Assert::AreEqual(25, functions.squareNumber(5), 0.0001);
		}
		TEST_METHOD(sqr_64_8) {
			Assert::AreEqual(64, functions.squareNumber(8), 0.0001);
		}

		TEST_METHOD(power_0_3_0) {
			Assert::AreEqual(0, functions.calcPower(0,3), 0.0001);
		}
		TEST_METHOD(power_1_5_1) {
			Assert::AreEqual(1, functions.calcPower(1, 5), 0.0001);
		}
		TEST_METHOD(power_2_4_16) {
			Assert::AreEqual(16, functions.calcPower(2, 4), 0.0001);
		}
		TEST_METHOD(power_minus3_3_minus27) {
			Assert::AreEqual(-27, functions.calcPower(-3, 3), 0.0001);
		}
		TEST_METHOD(power_0point5_3_0point125) {
			Assert::AreEqual(0.125, functions.calcPower(0.5, 3), 0.0001);
		}
		TEST_METHOD(power_5_0_1) {
			Assert::AreEqual(1, functions.calcPower(5, 0), 0.0001);
		}
		TEST_METHOD(power_2_minus2_0point25) {
			Assert::AreEqual(0.25, functions.calcPower(2, -2), 0.0001);
		}
		TEST_METHOD(power_10_1_10) {
			Assert::AreEqual(10, functions.calcPower(10, 1), 0.0001);
		}
		TEST_METHOD(power_0_0_Exception) {
			bool exceptionCaught = false;
			try {
				functions.calcPower(0, 0);
			}
			catch (std::invalid_argument& exception) {
				exceptionCaught = true;
			}
			Assert::IsTrue(exceptionCaught);
		}
		// Mock Tests
		TEST_METHOD(mockTestSessionFileRemoval) {
			// First create mock file
			std::ofstream outFile("../SessionHistory.txt", std::ios_base::app);
			outFile << "aa" << "\r\n";
			outFile.close();
			// Delete file
			functions.deleteSessionFile();
			// Check if it is deleted
			std::ifstream inFile("../SessionHistory.txt");
			Assert::IsTrue(!inFile.good());
			inFile.close();
		}
		TEST_METHOD(mockTestWriteFile) {
			// First delete file if exists
			remove("../SessionHistory.txt");
			// Use function
			std::string expression1 = "5 + 6 = 11", expression2 = "3! = 6";
			functions.writeExpressionToFile(expression1);
			functions.writeExpressionToFile(expression2);
			// Load expressions written in file
			std::ifstream inFile("../SessionHistory.txt");
			std::string expressions((std::istreambuf_iterator<char>(inFile)), std::istreambuf_iterator<char>());
			inFile.close();
			// Count number of lines in file
			std::ifstream inFile2("../SessionHistory.txt");
			std::string line;
			int linesCount = 0;
			while (std::getline(inFile2, line))
				++linesCount;
			// Check if the two expressions are written (not equal to the end of file)
			// and that the line count is 2
			Assert::IsTrue(expressions.find(expression1) != std::string::npos
				&& expressions.find(expression2) != std::string::npos
				&& linesCount == 2);
		}
		TEST_METHOD(mockTestReadFile) {
			// First delete file if exists
			remove("../SessionHistory.txt");
			// Write the expressions to the file
			std::string expression1 = "0 / 1 = 0", expression2 = "sqrt(64) = 8";
			std::ofstream outFile("../SessionHistory.txt", std::ios_base::app);
			outFile << expression1 << "\r\n";
			outFile << expression2 << "\r\n";
			outFile.close();
			// Use function
			std::string expressions = functions.getExpressionsFromFile();
			// Count number of lines in file
			std::ifstream inFile2("../SessionHistory.txt");
			std::string line;
			int linesCount = 0;
			while (std::getline(inFile2, line))
				++linesCount;
			// Check if the two expressions were read (not equal to the end of file) 
			// and that the number of lines read is 2
			Assert::IsTrue(expressions.find(expression1) != std::string::npos
				&& expressions.find(expression2) != std::string::npos
				&& linesCount == 2);
		}
	};
}