#pragma once
#include "Form2.h"
#include "SessionHistory.h"


namespace UI {
	using namespace myWrapper;
	using namespace Weather;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	
	// The form widgets
	protected:
	private: System::Windows::Forms::Button^  bdefine;
	private: System::Windows::Forms::Button^  bdel;
	private: System::Windows::Forms::Button^  bpi;
	private: System::Windows::Forms::Button^  bc;
	private: System::Windows::Forms::Button^  b4;
	private: System::Windows::Forms::TextBox^  screen;
	private: System::Windows::Forms::Button^  bequal;
	private: System::Windows::Forms::Button^  bpower;
	private: System::Windows::Forms::Button^  bplus;
	private: System::Windows::Forms::Button^  bsub;
	private: System::Windows::Forms::Button^  bfact;
	private: System::Windows::Forms::Button^  bmulti;
	private: System::Windows::Forms::Button^  bdivid;
	private: System::Windows::Forms::Button^  bpoint;
	private: System::Windows::Forms::Button^  b3;
	private: System::Windows::Forms::Button^  b6;
	private: System::Windows::Forms::Button^  b9;
	private: System::Windows::Forms::Button^  b2;
	private: System::Windows::Forms::Button^  b5;
	private: System::Windows::Forms::Button^  b8;
	private: System::Windows::Forms::Button^  b0;
	private: System::Windows::Forms::Button^  b1;
	private: System::Windows::Forms::Button^  b7;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  bnegpos;
	private: System::Windows::Forms::Button^  bweather;
	private: System::Windows::Forms::ComboBox^  constants;
	private: System::Windows::Forms::Button^  bsqur;
	private: System::Windows::Forms::Button^  bmod;
	private: System::Windows::Forms::Button^  bretrive;
	private: System::Windows::Forms::Button^  bstorenum;
	private: System::Windows::Forms::Button^  blastans;
	private: System::Windows::Forms::Button^  breset;
	private: System::Windows::Forms::Label^  exp;
	private: System::Windows::Forms::TextBox^  expr;
	private: System::Windows::Forms::Button^  bdtoi;
	private: System::Windows::Forms::Button^  breadfile;
	private: System::Windows::Forms::Button^  babs;
	private: System::Windows::Forms::Button^  bbinary;
	private: System::Windows::Forms::Button^  tanb;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		// Flags and the variables needed for claculation
		bool optPressed, uoptPressed, equalPressed, powerPressed, nonNumberEntered, p, i, dot, weatherPressed = false;
		double num1 = 0;
		double result;
		char opt = '\0';

		// The Function Wrapper
		MyFunctionWrapper ^myf = gcnew MyFunctionWrapper();
		WeatherClient ^myw = gcnew WeatherClient();




#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->constants = (gcnew System::Windows::Forms::ComboBox());
			this->bdefine = (gcnew System::Windows::Forms::Button());
			this->bdel = (gcnew System::Windows::Forms::Button());
			this->bpi = (gcnew System::Windows::Forms::Button());
			this->bc = (gcnew System::Windows::Forms::Button());
			this->b4 = (gcnew System::Windows::Forms::Button());
			this->screen = (gcnew System::Windows::Forms::TextBox());
			this->bequal = (gcnew System::Windows::Forms::Button());
			this->bpower = (gcnew System::Windows::Forms::Button());
			this->bplus = (gcnew System::Windows::Forms::Button());
			this->bsub = (gcnew System::Windows::Forms::Button());
			this->bfact = (gcnew System::Windows::Forms::Button());
			this->bmulti = (gcnew System::Windows::Forms::Button());
			this->bdivid = (gcnew System::Windows::Forms::Button());
			this->bpoint = (gcnew System::Windows::Forms::Button());
			this->b3 = (gcnew System::Windows::Forms::Button());
			this->b6 = (gcnew System::Windows::Forms::Button());
			this->b9 = (gcnew System::Windows::Forms::Button());
			this->b2 = (gcnew System::Windows::Forms::Button());
			this->b5 = (gcnew System::Windows::Forms::Button());
			this->b8 = (gcnew System::Windows::Forms::Button());
			this->b0 = (gcnew System::Windows::Forms::Button());
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->b7 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bnegpos = (gcnew System::Windows::Forms::Button());
			this->bweather = (gcnew System::Windows::Forms::Button());
			this->bsqur = (gcnew System::Windows::Forms::Button());
			this->bmod = (gcnew System::Windows::Forms::Button());
			this->bretrive = (gcnew System::Windows::Forms::Button());
			this->bstorenum = (gcnew System::Windows::Forms::Button());
			this->blastans = (gcnew System::Windows::Forms::Button());
			this->breset = (gcnew System::Windows::Forms::Button());
			this->exp = (gcnew System::Windows::Forms::Label());
			this->expr = (gcnew System::Windows::Forms::TextBox());
			this->bdtoi = (gcnew System::Windows::Forms::Button());
			this->breadfile = (gcnew System::Windows::Forms::Button());
			this->babs = (gcnew System::Windows::Forms::Button());
			this->bbinary = (gcnew System::Windows::Forms::Button());
			this->tanb = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// constants
			// 
			this->constants->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 9.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->constants->FormattingEnabled = true;
			this->constants->ItemHeight = 34;
			this->constants->Location = System::Drawing::Point(311, 1111);
			this->constants->Name = L"constants";
			this->constants->Size = System::Drawing::Size(412, 42);
			this->constants->TabIndex = 53;
			this->constants->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::constants_SelectedIndexChanged);
			// 
			// bdefine
			// 
			this->bdefine->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bdefine.BackgroundImage")));
			this->bdefine->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bdefine->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->bdefine->Location = System::Drawing::Point(20, 1111);
			this->bdefine->Name = L"bdefine";
			this->bdefine->Size = System::Drawing::Size(274, 68);
			this->bdefine->TabIndex = 52;
			this->bdefine->Text = L"Constant+";
			this->bdefine->UseVisualStyleBackColor = true;
			this->bdefine->Click += gcnew System::EventHandler(this, &MyForm::bdefine_Click);
			// 
			// bdel
			// 
			this->bdel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bdel.BackgroundImage")));
			this->bdel->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bdel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->bdel->Location = System::Drawing::Point(454, 541);
			this->bdel->Name = L"bdel";
			this->bdel->Size = System::Drawing::Size(126, 112);
			this->bdel->TabIndex = 51;
			this->bdel->Text = L"DEL";
			this->bdel->UseVisualStyleBackColor = true;
			this->bdel->Click += gcnew System::EventHandler(this, &MyForm::bdel_Click);
			// 
			// bpi
			// 
			this->bpi->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bpi.BackgroundImage")));
			this->bpi->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bpi->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->bpi->Location = System::Drawing::Point(309, 964);
			this->bpi->Name = L"bpi";
			this->bpi->Size = System::Drawing::Size(126, 112);
			this->bpi->TabIndex = 50;
			this->bpi->Text = L"π";
			this->bpi->UseVisualStyleBackColor = true;
			this->bpi->Click += gcnew System::EventHandler(this, &MyForm::bpi_Click);
			// 
			// bc
			// 
			this->bc->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bc.BackgroundImage")));
			this->bc->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bc->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->bc->Location = System::Drawing::Point(597, 541);
			this->bc->Name = L"bc";
			this->bc->Size = System::Drawing::Size(126, 112);
			this->bc->TabIndex = 49;
			this->bc->Text = L"C";
			this->bc->UseVisualStyleBackColor = true;
			this->bc->Click += gcnew System::EventHandler(this, &MyForm::bc_Click);
			// 
			// b4
			// 
			this->b4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b4.BackgroundImage")));
			this->b4->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->b4->Location = System::Drawing::Point(21, 682);
			this->b4->Name = L"b4";
			this->b4->Size = System::Drawing::Size(126, 112);
			this->b4->TabIndex = 48;
			this->b4->Text = L"4";
			this->b4->UseVisualStyleBackColor = true;
			this->b4->Click += gcnew System::EventHandler(this, &MyForm::num_Click);
			// 
			// screen
			// 
			this->screen->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->screen->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->screen->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 20.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->screen->Location = System::Drawing::Point(19, 76);
			this->screen->Name = L"screen";
			this->screen->Size = System::Drawing::Size(714, 70);
			this->screen->TabIndex = 0;
			this->screen->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->screen->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::screen_KeyDown);
			this->screen->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::screen_KeyPress);
			// 
			// bequal
			// 
			this->bequal->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bequal.BackgroundImage")));
			this->bequal->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bequal->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->bequal->Location = System::Drawing::Point(597, 964);
			this->bequal->Name = L"bequal";
			this->bequal->Size = System::Drawing::Size(126, 112);
			this->bequal->TabIndex = 46;
			this->bequal->Text = L"=";
			this->bequal->UseVisualStyleBackColor = true;
			this->bequal->Click += gcnew System::EventHandler(this, &MyForm::bequal_Click);
			// 
			// bpower
			// 
			this->bpower->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bpower.BackgroundImage")));
			this->bpower->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 9.9F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bpower->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->bpower->Location = System::Drawing::Point(597, 303);
			this->bpower->Name = L"bpower";
			this->bpower->Size = System::Drawing::Size(126, 85);
			this->bpower->TabIndex = 45;
			this->bpower->Text = L"Xⁿ";
			this->bpower->UseVisualStyleBackColor = true;
			this->bpower->Click += gcnew System::EventHandler(this, &MyForm::power_Click);
			// 
			// bplus
			// 
			this->bplus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bplus.BackgroundImage")));
			this->bplus->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bplus->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->bplus->Location = System::Drawing::Point(597, 822);
			this->bplus->Name = L"bplus";
			this->bplus->Size = System::Drawing::Size(126, 112);
			this->bplus->TabIndex = 44;
			this->bplus->Text = L"+";
			this->bplus->UseVisualStyleBackColor = true;
			this->bplus->Click += gcnew System::EventHandler(this, &MyForm::operation_Click);
			// 
			// bsub
			// 
			this->bsub->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bsub.BackgroundImage")));
			this->bsub->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bsub->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->bsub->Location = System::Drawing::Point(454, 822);
			this->bsub->Name = L"bsub";
			this->bsub->Size = System::Drawing::Size(126, 112);
			this->bsub->TabIndex = 43;
			this->bsub->Text = L"-";
			this->bsub->UseVisualStyleBackColor = true;
			this->bsub->Click += gcnew System::EventHandler(this, &MyForm::operation_Click);
			// 
			// bfact
			// 
			this->bfact->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bfact.BackgroundImage")));
			this->bfact->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 9.9F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bfact->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->bfact->Location = System::Drawing::Point(309, 304);
			this->bfact->Name = L"bfact";
			this->bfact->Size = System::Drawing::Size(126, 85);
			this->bfact->TabIndex = 42;
			this->bfact->Text = L"X!";
			this->bfact->UseVisualStyleBackColor = true;
			this->bfact->Click += gcnew System::EventHandler(this, &MyForm::bfact_Click);
			// 
			// bmulti
			// 
			this->bmulti->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bmulti.BackgroundImage")));
			this->bmulti->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bmulti->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->bmulti->Location = System::Drawing::Point(597, 682);
			this->bmulti->Name = L"bmulti";
			this->bmulti->Size = System::Drawing::Size(126, 112);
			this->bmulti->TabIndex = 47;
			this->bmulti->Text = L"x";
			this->bmulti->UseVisualStyleBackColor = true;
			this->bmulti->Click += gcnew System::EventHandler(this, &MyForm::operation_Click);
			// 
			// bdivid
			// 
			this->bdivid->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bdivid.BackgroundImage")));
			this->bdivid->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->bdivid->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bdivid->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->bdivid->Location = System::Drawing::Point(454, 682);
			this->bdivid->Name = L"bdivid";
			this->bdivid->Size = System::Drawing::Size(126, 112);
			this->bdivid->TabIndex = 31;
			this->bdivid->Text = L"÷";
			this->bdivid->UseVisualStyleBackColor = true;
			this->bdivid->Click += gcnew System::EventHandler(this, &MyForm::operation_Click);
			// 
			// bpoint
			// 
			this->bpoint->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bpoint.BackgroundImage")));
			this->bpoint->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bpoint->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->bpoint->Location = System::Drawing::Point(164, 964);
			this->bpoint->Name = L"bpoint";
			this->bpoint->Size = System::Drawing::Size(126, 112);
			this->bpoint->TabIndex = 39;
			this->bpoint->Text = L".";
			this->bpoint->UseVisualStyleBackColor = true;
			this->bpoint->Click += gcnew System::EventHandler(this, &MyForm::num_Click);
			// 
			// b3
			// 
			this->b3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b3.BackgroundImage")));
			this->b3->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->b3->Location = System::Drawing::Point(309, 822);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(126, 112);
			this->b3->TabIndex = 38;
			this->b3->Text = L"3";
			this->b3->UseVisualStyleBackColor = true;
			this->b3->Click += gcnew System::EventHandler(this, &MyForm::num_Click);
			// 
			// b6
			// 
			this->b6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b6.BackgroundImage")));
			this->b6->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->b6->Location = System::Drawing::Point(309, 682);
			this->b6->Name = L"b6";
			this->b6->Size = System::Drawing::Size(126, 112);
			this->b6->TabIndex = 37;
			this->b6->Text = L"6";
			this->b6->UseVisualStyleBackColor = true;
			this->b6->Click += gcnew System::EventHandler(this, &MyForm::num_Click);
			// 
			// b9
			// 
			this->b9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b9.BackgroundImage")));
			this->b9->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->b9->Location = System::Drawing::Point(309, 541);
			this->b9->Name = L"b9";
			this->b9->Size = System::Drawing::Size(126, 112);
			this->b9->TabIndex = 36;
			this->b9->Text = L"9";
			this->b9->UseVisualStyleBackColor = true;
			this->b9->Click += gcnew System::EventHandler(this, &MyForm::num_Click);
			// 
			// b2
			// 
			this->b2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b2.BackgroundImage")));
			this->b2->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->b2->Location = System::Drawing::Point(164, 822);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(126, 112);
			this->b2->TabIndex = 35;
			this->b2->Text = L"2";
			this->b2->UseVisualStyleBackColor = true;
			this->b2->Click += gcnew System::EventHandler(this, &MyForm::num_Click);
			// 
			// b5
			// 
			this->b5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b5.BackgroundImage")));
			this->b5->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->b5->Location = System::Drawing::Point(164, 682);
			this->b5->Name = L"b5";
			this->b5->Size = System::Drawing::Size(126, 112);
			this->b5->TabIndex = 34;
			this->b5->Text = L"5";
			this->b5->UseVisualStyleBackColor = true;
			this->b5->Click += gcnew System::EventHandler(this, &MyForm::num_Click);
			// 
			// b8
			// 
			this->b8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b8.BackgroundImage")));
			this->b8->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->b8->Location = System::Drawing::Point(164, 541);
			this->b8->Name = L"b8";
			this->b8->Size = System::Drawing::Size(126, 112);
			this->b8->TabIndex = 33;
			this->b8->Text = L"8";
			this->b8->UseVisualStyleBackColor = true;
			this->b8->Click += gcnew System::EventHandler(this, &MyForm::num_Click);
			// 
			// b0
			// 
			this->b0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b0.BackgroundImage")));
			this->b0->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b0->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->b0->Location = System::Drawing::Point(21, 964);
			this->b0->Name = L"b0";
			this->b0->Size = System::Drawing::Size(126, 112);
			this->b0->TabIndex = 32;
			this->b0->Text = L"0";
			this->b0->UseVisualStyleBackColor = true;
			this->b0->Click += gcnew System::EventHandler(this, &MyForm::num_Click);
			// 
			// b1
			// 
			this->b1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b1.BackgroundImage")));
			this->b1->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->b1->Location = System::Drawing::Point(21, 822);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(126, 112);
			this->b1->TabIndex = 40;
			this->b1->Text = L"1";
			this->b1->UseVisualStyleBackColor = true;
			this->b1->Click += gcnew System::EventHandler(this, &MyForm::num_Click);
			// 
			// b7
			// 
			this->b7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b7.BackgroundImage")));
			this->b7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->b7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->b7->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->b7->Location = System::Drawing::Point(21, 541);
			this->b7->Name = L"b7";
			this->b7->Size = System::Drawing::Size(126, 112);
			this->b7->TabIndex = 41;
			this->b7->Text = L"7";
			this->b7->UseVisualStyleBackColor = true;
			this->b7->Click += gcnew System::EventHandler(this, &MyForm::num_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 9.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(160, 303);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 85);
			this->button1->TabIndex = 50;
			this->button1->Text = L"√";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::bsquareroot_Click);
			// 
			// bnegpos
			// 
			this->bnegpos->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bnegpos.BackgroundImage")));
			this->bnegpos->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 9.9F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bnegpos->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->bnegpos->Location = System::Drawing::Point(19, 419);
			this->bnegpos->Name = L"bnegpos";
			this->bnegpos->Size = System::Drawing::Size(126, 85);
			this->bnegpos->TabIndex = 50;
			this->bnegpos->Text = L"+/-";
			this->bnegpos->UseVisualStyleBackColor = true;
			this->bnegpos->Click += gcnew System::EventHandler(this, &MyForm::bnegpos_Click);
			// 
			// bweather
			// 
			this->bweather->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bweather.BackgroundImage")));
			this->bweather->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 9.9F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bweather->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->bweather->Location = System::Drawing::Point(160, 197);
			this->bweather->Name = L"bweather";
			this->bweather->Size = System::Drawing::Size(126, 85);
			this->bweather->TabIndex = 32;
			this->bweather->Text = L"°C";
			this->bweather->UseVisualStyleBackColor = true;
			this->bweather->Click += gcnew System::EventHandler(this, &MyForm::bweather_Click);
			// 
			// bsqur
			// 
			this->bsqur->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bsqur.BackgroundImage")));
			this->bsqur->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 9.9F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bsqur->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->bsqur->Location = System::Drawing::Point(454, 303);
			this->bsqur->Name = L"bsqur";
			this->bsqur->Size = System::Drawing::Size(126, 85);
			this->bsqur->TabIndex = 54;
			this->bsqur->Text = L"X²";
			this->bsqur->UseVisualStyleBackColor = true;
			this->bsqur->Click += gcnew System::EventHandler(this, &MyForm::bsqur_Click);
			// 
			// bmod
			// 
			this->bmod->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bmod.BackgroundImage")));
			this->bmod->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->bmod->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bmod->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->bmod->Location = System::Drawing::Point(21, 304);
			this->bmod->Name = L"bmod";
			this->bmod->Size = System::Drawing::Size(126, 85);
			this->bmod->TabIndex = 55;
			this->bmod->Text = L"%";
			this->bmod->UseVisualStyleBackColor = true;
			this->bmod->Click += gcnew System::EventHandler(this, &MyForm::operation_Click);
			// 
			// bretrive
			// 
			this->bretrive->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bretrive.BackgroundImage")));
			this->bretrive->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->bretrive->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 9.9F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bretrive->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->bretrive->Location = System::Drawing::Point(309, 419);
			this->bretrive->Name = L"bretrive";
			this->bretrive->Size = System::Drawing::Size(126, 85);
			this->bretrive->TabIndex = 56;
			this->bretrive->Text = L"M";
			this->bretrive->UseVisualStyleBackColor = true;
			this->bretrive->Click += gcnew System::EventHandler(this, &MyForm::bretrive_Click);
			// 
			// bstorenum
			// 
			this->bstorenum->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bstorenum.BackgroundImage")));
			this->bstorenum->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->bstorenum->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 9.9F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bstorenum->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->bstorenum->Location = System::Drawing::Point(164, 419);
			this->bstorenum->Name = L"bstorenum";
			this->bstorenum->Size = System::Drawing::Size(126, 85);
			this->bstorenum->TabIndex = 57;
			this->bstorenum->Text = L"M+";
			this->bstorenum->UseVisualStyleBackColor = true;
			this->bstorenum->Click += gcnew System::EventHandler(this, &MyForm::bstorenum_Click);
			// 
			// blastans
			// 
			this->blastans->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"blastans.BackgroundImage")));
			this->blastans->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->blastans->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->blastans->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->blastans->Location = System::Drawing::Point(454, 964);
			this->blastans->Name = L"blastans";
			this->blastans->Size = System::Drawing::Size(126, 112);
			this->blastans->TabIndex = 58;
			this->blastans->Text = L"Ans";
			this->blastans->UseVisualStyleBackColor = true;
			this->blastans->Click += gcnew System::EventHandler(this, &MyForm::blastans_Click);
			// 
			// breset
			// 
			this->breset->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"breset.BackgroundImage")));
			this->breset->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->breset->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 9.9F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->breset->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->breset->Location = System::Drawing::Point(454, 420);
			this->breset->Name = L"breset";
			this->breset->Size = System::Drawing::Size(126, 85);
			this->breset->TabIndex = 59;
			this->breset->Text = L"M-";
			this->breset->UseVisualStyleBackColor = true;
			this->breset->Click += gcnew System::EventHandler(this, &MyForm::breset_Click);
			// 
			// exp
			// 
			this->exp->AutoSize = true;
			this->exp->BackColor = System::Drawing::Color::White;
			this->exp->ForeColor = System::Drawing::Color::Gray;
			this->exp->Location = System::Drawing::Point(65, 22);
			this->exp->Name = L"exp";
			this->exp->Size = System::Drawing::Size(0, 32);
			this->exp->TabIndex = 62;
			// 
			// expr
			// 
			this->expr->BackColor = System::Drawing::Color::White;
			this->expr->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->expr->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->expr->ForeColor = System::Drawing::Color::Gray;
			this->expr->Location = System::Drawing::Point(19, 36);
			this->expr->Name = L"expr";
			this->expr->ReadOnly = true;
			this->expr->Size = System::Drawing::Size(714, 42);
			this->expr->TabIndex = 63;
			// 
			// bdtoi
			// 
			this->bdtoi->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bdtoi.BackgroundImage")));
			this->bdtoi->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bdtoi->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->bdtoi->Location = System::Drawing::Point(597, 420);
			this->bdtoi->Name = L"bdtoi";
			this->bdtoi->Size = System::Drawing::Size(126, 85);
			this->bdtoi->TabIndex = 46;
			this->bdtoi->Text = L"int";
			this->bdtoi->UseVisualStyleBackColor = true;
			this->bdtoi->Click += gcnew System::EventHandler(this, &MyForm::doubleToInt);
			// 
			// breadfile
			// 
			this->breadfile->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"breadfile.BackgroundImage")));
			this->breadfile->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->breadfile->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->breadfile->Location = System::Drawing::Point(597, 198);
			this->breadfile->Name = L"breadfile";
			this->breadfile->Size = System::Drawing::Size(128, 85);
			this->breadfile->TabIndex = 49;
			this->breadfile->Text = L"Read";
			this->breadfile->UseVisualStyleBackColor = true;
			this->breadfile->Click += gcnew System::EventHandler(this, &MyForm::breadfile_Click);
			// 
			// babs
			// 
			this->babs->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"babs.BackgroundImage")));
			this->babs->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->babs->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->babs->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->babs->Location = System::Drawing::Point(19, 199);
			this->babs->Name = L"babs";
			this->babs->Size = System::Drawing::Size(126, 85);
			this->babs->TabIndex = 56;
			this->babs->Text = L"Abs";
			this->babs->UseVisualStyleBackColor = true;
			this->babs->Click += gcnew System::EventHandler(this, &MyForm::babs_Click);
			// 
			// bbinary
			// 
			this->bbinary->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bbinary.BackgroundImage")));
			this->bbinary->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->bbinary->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bbinary->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->bbinary->Location = System::Drawing::Point(309, 199);
			this->bbinary->Name = L"bbinary";
			this->bbinary->Size = System::Drawing::Size(126, 85);
			this->bbinary->TabIndex = 57;
			this->bbinary->Text = L"bin";
			this->bbinary->UseVisualStyleBackColor = true;
			this->bbinary->Click += gcnew System::EventHandler(this, &MyForm::binary_Click);
			// 
			// tanb
			// 
			this->tanb->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tanb.BackgroundImage")));
			this->tanb->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->tanb->Font = (gcnew System::Drawing::Font(L"Digital dream Fat Narrow", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tanb->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tanb->Location = System::Drawing::Point(454, 197);
			this->tanb->Name = L"tanb";
			this->tanb->Size = System::Drawing::Size(126, 85);
			this->tanb->TabIndex = 59;
			this->tanb->Text = L"tan";
			this->tanb->UseVisualStyleBackColor = true;
			this->tanb->Click += gcnew System::EventHandler(this, &MyForm::tanb_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(738, 1212);
			this->Controls->Add(this->expr);
			this->Controls->Add(this->exp);
			this->Controls->Add(this->tanb);
			this->Controls->Add(this->breset);
			this->Controls->Add(this->blastans);
			this->Controls->Add(this->bbinary);
			this->Controls->Add(this->bstorenum);
			this->Controls->Add(this->babs);
			this->Controls->Add(this->bretrive);
			this->Controls->Add(this->bmod);
			this->Controls->Add(this->bsqur);
			this->Controls->Add(this->constants);
			this->Controls->Add(this->bdefine);
			this->Controls->Add(this->bdel);
			this->Controls->Add(this->bnegpos);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->bpi);
			this->Controls->Add(this->breadfile);
			this->Controls->Add(this->bc);
			this->Controls->Add(this->b4);
			this->Controls->Add(this->bdtoi);
			this->Controls->Add(this->screen);
			this->Controls->Add(this->bequal);
			this->Controls->Add(this->bpower);
			this->Controls->Add(this->bplus);
			this->Controls->Add(this->bsub);
			this->Controls->Add(this->bfact);
			this->Controls->Add(this->bmulti);
			this->Controls->Add(this->bdivid);
			this->Controls->Add(this->bpoint);
			this->Controls->Add(this->b3);
			this->Controls->Add(this->b6);
			this->Controls->Add(this->b9);
			this->Controls->Add(this->b2);
			this->Controls->Add(this->b5);
			this->Controls->Add(this->bweather);
			this->Controls->Add(this->b8);
			this->Controls->Add(this->b0);
			this->Controls->Add(this->b1);
			this->Controls->Add(this->b7);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(770, 1300);
			this->MinimumSize = System::Drawing::Size(770, 1300);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	myf->deleteSessionFile();
}
	
// The numbers buttons clicke handler, which dispalyes the pressed number to screen
private: System::Void num_Click(System::Object^  sender, System::EventArgs^  e) {

	// To Clear the expression screen 
	if (equalPressed || uoptPressed )
	{
		expr->Clear();
		screen->Clear();
		equalPressed = false;
	}
	// To Clear the main displaying screen
	if (optPressed || uoptPressed || weatherPressed)
		{
			screen->Clear();
			optPressed = uoptPressed =weatherPressed = false;
		}

	// Define a button object to get the clicked button
	Button^ btn = safe_cast<Button^>(sender);

	// To handle clicking "."
	if (btn->Text == ".")
	{
		// When the user press "." and the screen is empty
		if (screen->Text == "")
			screen->Text = "0.";

		else {
			if (!screen->Text->Contains("."))
				screen->Text += btn->Text;
		}
	}
	// To display the other numbers
	else
		screen->Text += btn->Text;
}

// The 5 basic operation (+ , - , X , ÷ , mod ) handler
private: System::Void operation_Click(System::Object^  sender, System::EventArgs^  e) {
	
	// Used to clear the expression screen 
	// whenever the user statrs a new calculation using the previous results
	if (equalPressed )
	{
		expr->Clear();
		equalPressed = false;
	}

	//To clear the screen from the weather condition
	if (weatherPressed)
	{
		screen->Text = "";
		weatherPressed = false;
	}

		Button^ btn = safe_cast<Button^>(sender);

		if (screen->Text != "")
		{
			// In case of multiple terms expressions (e.g: x + y * z / w)
			// The clicking will evaluate the expression first and starts the new expression
			if (num1 != 0)
			{ 
				calculate(); // To evaluate the previous expression before starting the new one
				opt = btn->Text[0]; 
				expr->Text += " " + btn->Text[0] + " ";
				optPressed = true;
			}

			// In case of it is pressed once
			else
			{
				opt = btn->Text[0];
				num1 = Convert::ToDouble(screen->Text); // To save the number displayed on the screen
				expr->Text += num1 + " " + btn->Text[0] + " ";
				optPressed = true;
			}
		}
	}

// The power button click handler which calculate the power of risng on number to other
private: System::Void power_Click(System::Object^  sender, System::EventArgs^  e) {
	
	// To clear the expression screen
	if (equalPressed)
	{
		expr->Clear();
		equalPressed = false;
	}

	//To clear the screen from the weather condition
	if (weatherPressed)
	{
		screen->Text = "";
		weatherPressed = false;
	}

	// A flag is setted if the power button is pressed
	if (screen->Text != "")
	{
			powerPressed = true;
			num1 = Convert::ToDouble(screen->Text);
			expr->Text += num1 + " ^ ";
			optPressed = true;
	}
}

// factorial button click handler which calculate the factorial of the number
private: System::Void bfact_Click(System::Object^  sender, System::EventArgs^  e) {
	if (equalPressed)
	{
		expr->Clear();
		equalPressed = false;
	}

	//To clear the screen from the weather condition
	if (weatherPressed)
	{
		screen->Text = "";
		weatherPressed = false;
	}

		if (screen->Text != "")
		{
			expr->Text += screen->Text + " !";
			num1 = Convert::ToDouble(screen->Text);
			result = myf->calcFactorial(num1);
			myf->writeExpressionToFile(expr->Text + "=" + result); // To write the expression the the file

			// In case of error occures it return 0
			if (result == 0)
				screen->Text = "Math Error";
			else
				screen->Text = "" + result;
			uoptPressed = true;
			
		}
	}

// squareroot button click handler which calculate the squareroot of the number
private: System::Void bsquareroot_Click(System::Object^  sender, System::EventArgs^  e) {
	if (equalPressed)
	{
		expr->Clear();
		equalPressed = false;
	}

	//To clear the screen from the weather condition
	if (weatherPressed)
	{
		screen->Text = "";
		weatherPressed = false;
	}

	if (screen->Text != "")
	{
		num1 = Convert::ToDouble(screen->Text);
		result = myf->squareroot(num1);
		expr->Text = "sqrt( " + num1 + " )";
		myf->writeExpressionToFile(expr->Text + "=" + result);
		uoptPressed = true;

		// In case of error occures it return -1
		if (result == -1)
			screen->Text = "Math Error";
		else
			screen->Text = "" + result;
	}
}

// square button click event handler which calculate the square of number
private: System::Void bsqur_Click(System::Object^  sender, System::EventArgs^  e) {
	if (equalPressed)
	{
		expr->Clear();
		equalPressed = false;
	}

	//To clear the screen from the weather condition
	if (weatherPressed)
	{
		screen->Text = "";
		weatherPressed = false;
	}

		if (screen->Text != "")
		{
			num1 = Convert::ToDouble(screen->Text);
			result = myf->squareNumber(num1);
			screen->Text = "" + result;
			expr->Text = "sqr( " + num1 + " )";
			myf->writeExpressionToFile(expr->Text + "=" + result);
			uoptPressed = true;
		}

	}

// tan button click event handler which calculate the tangent of angle
private: System::Void tanb_Click(System::Object^  sender, System::EventArgs^  e) {
	if (equalPressed)
	{
		expr->Clear();
		equalPressed = false;
	}

	//To clear the screen from the weather condition
	if (weatherPressed)
	{
		screen->Text = "";
		weatherPressed = false;
	}

	if (screen->Text != "")
	{
		num1 = Convert::ToDouble(screen->Text);
		result = myf->getTan(num1);
		screen->Text = "" + result;
		expr->Text = "tan( " + num1 + " )";
		myf->writeExpressionToFile(expr->Text + "=" + result);
		uoptPressed = true;
	}
}

// double to int button click handler which convert a double to integer
private: System::Void doubleToInt(System::Object^  sender, System::EventArgs^  e) {
	if (equalPressed)
	{
		expr->Clear();
		equalPressed = false;
	}

	//To clear the screen from the weather condition
	if (weatherPressed)
	{
		screen->Text = "";
		weatherPressed = false;
	}

	if (screen->Text != "")
	{
		num1 = Convert::ToDouble(screen->Text);
		screen->Text = "" + myf->doubleToInt(num1);
		expr->Text = "Int( " + num1 + " )";
		myf->writeExpressionToFile(expr->Text + "=" + screen->Text);
		uoptPressed = true;
	}
}

// binary button click handler which convert a decimal number to binary
private: System::Void binary_Click(System::Object^  sender, System::EventArgs^  e) {
	if (equalPressed)
	{
		expr->Clear();
		equalPressed = false;
	}

	//To clear the screen from the weather condition
	if (weatherPressed)
	{
		screen->Text = "";
		weatherPressed = false;
	}

		if (screen->Text != "")
		{
			num1 = Convert::ToInt64(screen->Text);
			screen->Text = "" + myf->binarynumber(num1);
			expr->Text = "Binary( " + num1 + " )";
			myf->writeExpressionToFile(expr->Text + "=" + screen->Text);
			uoptPressed = true;
		}
}

// Abs button click handler which return absolute value of a number
private: System::Void babs_Click(System::Object^  sender, System::EventArgs^  e) {
	if (equalPressed)
	{
		expr->Clear();
		equalPressed = false;
	}

	//To clear the screen from the weather condition
	if (weatherPressed)
	{
		screen->Text = "";
		weatherPressed = false;
	}

		if (screen->Text != "")
		{
			num1 = Convert::ToDouble(screen->Text);
			result = myf->absolutevalue(num1);
			screen->Text = "" + result;
			expr->Text = "sqrt( " + num1 + " )";
			myf->writeExpressionToFile(expr->Text + "=" + screen->Text);
			uoptPressed = true;
		}
}

// The function to evaluate the multiple terms expression
private: System::Void calculate(){

		expr->Text += "" + screen->Text;
		// switch over the operations to evaluate the pressed one
		switch (opt)
		{
		case '+':
			result = myf->sum(num1, Convert::ToDouble(screen->Text));
			break;
		case '-':
			result = myf->subtraction(num1, Convert::ToDouble(screen->Text));
			break;
		case 'x':
			result = myf->multiplication(num1, Convert::ToDouble(screen->Text));
			break;
		case '÷':
			try{
				result = myf->division(num1, Convert::ToDouble(screen->Text));
			}
			catch (...)
			{
				screen->Text = "Math Error";
			}
			break;
		case '%':
			result = myf->getMod(num1, Convert::ToDouble(screen->Text));
			break;
		default:
			break;
		}

		// In case of the power button pressed it calls the power function
		if (powerPressed)
		{
			// To catch the exception of raising 0 to 0
			try{
				result = myf->calcPower(num1, Convert::ToDouble(screen->Text));
				powerPressed = false;
			}
			catch (...)
			{
				screen->Text = "Math Error";
			}
		}

		screen->Text = "" + result;
		opt = '\0';
		num1 = Convert::ToDouble(screen->Text);
	}

// equal button click handler which evaluate expressions
private: System::Void bequal_Click(System::Object^  sender, System::EventArgs^  e) {
	Button^ btn = safe_cast<Button^>(sender);
	if (equalPressed)
	{
		expr->Text = expr->Text;
		screen->Text = screen->Text;
	}
	else{
		equalPressed = true;

		switch (opt)
		{
		case '+':
			result = myf->sum(num1, Convert::ToDouble(screen->Text));
			break;
		case '-':
			result = myf->subtraction(num1, Convert::ToDouble(screen->Text));
			break;
		case 'x':
			result = myf->multiplication(num1, Convert::ToDouble(screen->Text));
			break;
		case '÷':
			try{
				result = myf->division(num1, Convert::ToDouble(screen->Text));
			}
			catch (...)
			{
				screen->Text = "Math Error";
			}
			break;
		case '%':
			result = myf->getMod(num1, Convert::ToDouble(screen->Text));
			break;
		default:
			break;
		}

		if (powerPressed)
		{
			try{
				result = myf->calcPower(num1, Convert::ToDouble(screen->Text));
				powerPressed = false;
			}
			catch (...)
			{
				screen->Text = "Math Error";
			}
		}

		// To display the result on the screen and update the expression screen
		expr->Text += "" + screen->Text;
		screen->Text = "" + result;
		myf->writeExpressionToFile(expr->Text + "=" + result);
		opt = '\0';
		num1 = 0;
	}
	}

// Ans button click handler which return the last answer
private: System::Void blastans_Click(System::Object^  sender, System::EventArgs^  e) {
	//To clear the screen from the weather condition
	if (weatherPressed)
	{
		screen->Text = "";
		weatherPressed = false;
	}

		screen->Text = "" + result;
		expr->Clear();
}

// M button click handler which retrive a stored number
private: System::Void bretrive_Click(System::Object^  sender, System::EventArgs^  e) {
	//To clear the screen from the weather condition
	if (weatherPressed)
	{
		screen->Text = "";
		weatherPressed = false;
	}

		screen->Text = "" + myf->getStoredNumber();
	}

// M+ button click handler which enable the user to save a number
private: System::Void bstorenum_Click(System::Object^  sender, System::EventArgs^  e) {
	//To clear the screen from the weather condition
	if (weatherPressed)
	{
		screen->Text = "";
		weatherPressed = false;
	}

		myf->storeNumber(Convert::ToDouble(screen->Text));
	}

//M- button click handler which reset the M+ button
private: System::Void breset_Click(System::Object^  sender, System::EventArgs^  e) {
		myf->storeNumber(0);
	}

// Clear all the screens and setted flags
private: System::Void bc_Click(System::Object^  sender, System::EventArgs^  e) {
		screen->Clear();
		expr->Clear();
		optPressed, uoptPressed, equalPressed, powerPressed, nonNumberEntered, p, i, dot, weatherPressed = false;
		num1 = 0;
		result = 0;
		opt = '\0';
	}

// Weather button click handler which displays the weather
private: System::Void bweather_Click(System::Object^  sender, System::EventArgs^  e) {
	screen->Text = myw->getWeatherCondition();
	weatherPressed = true;
	}

// -/+ button click handler which change the sign of a number
private: System::Void bnegpos_Click(System::Object^  sender, System::EventArgs^  e) {
	//To clear the screen from the weather condition
	if (weatherPressed)
	{
		screen->Text = "";
		weatherPressed = false;
	}

		if (screen->Text != "")
		{
			screen->Text = "" + myf->changeSign(Convert::ToDouble(screen->Text));
		}

	}

// π button click handler which return the pi number
private: System::Void bpi_Click(System::Object^  sender, System::EventArgs^  e) {
	//To clear the screen from the weather condition
	if (weatherPressed)
	{
		screen->Text = "";
		weatherPressed = false;
	}

		screen->Text = "" + myf->getPI();
	}

// Del button click handler which delete the last number in screen
private: System::Void bdel_Click(System::Object^  sender, System::EventArgs^  e) {
		if (screen->Text->Length >= 1)
		{	// Remove function would remove one letter from the last 
			screen->Text = screen->Text->Remove(screen->Text->Length - 1, 1); 
			if (screen->Text->Length == 1 && screen->Text[0] == '-')
			{
				screen->Text = "";
			}

		}
		else
		{
			screen->Text = "";
		}
	}

// Constant+ button click handler which show another form to enable the user to add thier constans
private: System::Void bdefine_Click(System::Object^  sender, System::EventArgs^  e) {
		Form2^ f2 = gcnew Form2(constants);
		f2->Show();
	}

// whenever the user enters the screen it start from the last letter
private: System::Void screen_Enter(System::Object^  sender, System::EventArgs^  e) {
		screen->SelectionStart = screen->Text->Length;
	}

//the list item select handler To display the selected item from the item list to screen
private: System::Void constants_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	//To clear the screen from the weather condition
	if (weatherPressed)
	{
		screen->Text = "";
		weatherPressed = false;
	}

		String^ constVar = constants->SelectedItem->ToString();

		// it only displyed the number not the name of constant after = sign
		int i = 0;
		while (constVar[i] != '=') 
			i++;
		screen->Text = constVar->Substring(i + 1);
	}

// Read click button handler which reads and display the session history in a new form
private: System::Void breadfile_Click(System::Object^  sender, System::EventArgs^  e) {
		SessionHistory^ f3 = gcnew SessionHistory();
		f3->Show();
	}

//This part of code was taken from:
// https://msdn.microsoft.com/en-us/library/system.windows.forms.control.keypress%28v=vs.110%29.aspx
// To handle the key presses events and allow numbers only
private: System::Void screen_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^ e)
	{

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
					if (e->KeyCode == Keys::P)
						p = true;
					if (e->KeyCode == Keys::I)
						i = true;
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
private: System::Void screen_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		int pos;
		// Check for the flag being set in the KeyDown event. 
		if (nonNumberEntered == true)
		{         // Stop the character from being entered into the control since it is non-numerical.
			if (p == true)
			{
				if (i == true)
				{
					screen->Text = "3.1415926535";
					screen->SelectionStart = screen->Text->Length;
					p = i = false;
				}
			}
			if (dot == true)
			{
				if (screen->Text == "")
					screen->Text = "0.";
				else
				{
					for (int i = 0; i < screen->Text->Length; i++)
					{
						if (screen->Text[i] == '.')
						{
							pos = i;
							break;
						}
					}
					if (pos != 0)
						screen->Text += "";
					else
						screen->Text += ".";
					screen->SelectionStart = screen->Text->Length;
					dot = false;
				}
			}
			e->Handled = true;
		}
	}
};
}
