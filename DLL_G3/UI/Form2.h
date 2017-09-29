#pragma once
//#include "MyForm.h"

namespace UI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			constantsbox1 = gcnew ComboBox();
			//TODO: Add the constructor code here
			//
		}

		Form2(System::Windows::Forms::ComboBox^ constantsbox)
			: constantsbox1(constantsbox)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Label^  label3;
	public:

	public:
	private: System::Windows::Forms::Label^  warning2;
	private: System::Windows::Forms::ComboBox^ constantsbox1;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  convalue;
	protected:

	private: System::Windows::Forms::TextBox^  conlabel;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;

	protected:






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		bool nonNumberEntered, dot = false;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>

		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->convalue = (gcnew System::Windows::Forms::TextBox());
			this->conlabel = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->warning2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.900001F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(354, 225);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(158, 62);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// convalue
			// 
			this->convalue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.900001F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->convalue->Location = System::Drawing::Point(271, 128);
			this->convalue->Name = L"convalue";
			this->convalue->Size = System::Drawing::Size(241, 45);
			this->convalue->TabIndex = 10;
			this->convalue->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form2::convalue_KeyDown);
			this->convalue->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form2::convalue_KeyPress);
			// 
			// conlabel
			// 
			this->conlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.900001F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->conlabel->Location = System::Drawing::Point(271, 27);
			this->conlabel->Name = L"conlabel";
			this->conlabel->Size = System::Drawing::Size(241, 45);
			this->conlabel->TabIndex = 0;
			this->conlabel->TextChanged += gcnew System::EventHandler(this, &Form2::conlabel_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.900001F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(19, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 39);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Value";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.900001F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(19, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(246, 39);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Constant Lable";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.900001F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(181, 225);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 62);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(271, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 32);
			this->label3->TabIndex = 12;
			// 
			// warning2
			// 
			this->warning2->AutoSize = true;
			this->warning2->ForeColor = System::Drawing::Color::Red;
			this->warning2->Location = System::Drawing::Point(271, 187);
			this->warning2->Name = L"warning2";
			this->warning2->Size = System::Drawing::Size(0, 32);
			this->warning2->TabIndex = 13;
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(518, 312);
			this->Controls->Add(this->warning2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->convalue);
			this->Controls->Add(this->conlabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->Name = L"Form2";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Define Constant";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (conlabel->Text == "")
		label3->Text = "Add constant label";
	else if (convalue->Text == "")
		warning2->Text = "Add constant value";
	else
	{
		label3->Text = "";
		warning2->Text = "";
		constantsbox1->Items->Add(conlabel->Text+ "=" + convalue->Text);
		Form2::Close();
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Form2::Close();
}

private: System::Void conlabel_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void convalue_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^ e)
{
	// Initialize the flag to false.
	nonNumberEntered = false;

	// Determine whether the keystroke is a number from the top of the keyboard. 
	if (e->KeyCode < Keys::D0 || e->KeyCode > Keys::D9)
	{
		// Determine whether the keystroke is a number from the keypad. 
		if (e->KeyCode < Keys::NumPad0 || e->KeyCode > Keys::NumPad9)
		{
			// Determine whether the keystroke is a backspace. 
			if (e->KeyCode != Keys::Back)
			{

				if (e->KeyCode == Keys::OemPeriod)
					dot = true;
				// A non-numerical keystroke was pressed. 
				// Set the flag to true and evaluate in KeyPress event.
				nonNumberEntered = true;
			}
		}
	}
	//If shift key was pressed, it's not a number. 
	if (Control::ModifierKeys == Keys::Shift) {
		nonNumberEntered = true;
	}
}

		 // This event occurs after the KeyDown event and can be used to prevent 
		 // characters from entering the control. 
	private: System::Void convalue_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		// Check for the flag being set in the KeyDown event. 
		if (nonNumberEntered == true)
		{         // Stop the character from being entered into the control since it is non-numerical.
	
			if (dot == true)
			{
				if (convalue->Text == "")
					convalue->Text = "0.";
				else
					convalue->Text += ".";
				convalue->SelectionStart = convalue->Text->Length;
				dot = false;
			}
			e->Handled = true;
		}
	}
};
}
