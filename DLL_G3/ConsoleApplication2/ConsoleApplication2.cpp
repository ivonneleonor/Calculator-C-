// ConsoleApplication2.cpp : main project file.

#include "stdafx.h"

using namespace System;
using namespace myWrapper;
int main(array<System::String ^> ^args)
{
	MyFunctionWrapper ^wrapper = gcnew MyFunctionWrapper();
	double output = wrapper->sum(2.0,10.0);
	Console::WriteLine(L"Output = " + output);	
    return 0;
}
