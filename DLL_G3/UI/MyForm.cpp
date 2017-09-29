#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


void main(array<String^>^ args)
{
	UI::MyForm form;
	Application::Run(%form);
}


//#include "stdafx.h"
//
//using namespace System;
//using namespace myWrapper;
//int main(array<System::String ^> ^args)
//{
//	MyFunctionWrapper ^wrapper = gcnew MyFunctionWrapper();
//	int output = wrapper->sum(2.0, 10.0);
//	Console::WriteLine(L"Output = " + output);
//	return 0;
//}
