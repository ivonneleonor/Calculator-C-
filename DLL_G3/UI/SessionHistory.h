#pragma once
#include <msclr\marshal.h>
#include <msclr\marshal_atl.h>
#include <msclr\marshal_cppstd.h>
#include <msclr\marshal_windows.h>

namespace UI {
	using namespace myWrapper;
	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SessionHistory
	/// </summary>
	public ref class SessionHistory : public System::Windows::Forms::Form
	{
	public:
		SessionHistory(void)
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
		~SessionHistory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  sessionH;
	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		MyFunctionWrapper ^myf = gcnew MyFunctionWrapper();
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->sessionH = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// sessionH
			// 
			this->sessionH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.900001F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sessionH->HideSelection = false;
			this->sessionH->Location = System::Drawing::Point(25, 28);
			this->sessionH->Multiline = true;
			this->sessionH->Name = L"sessionH";
			this->sessionH->ReadOnly = true;
			this->sessionH->Size = System::Drawing::Size(744, 385);
			this->sessionH->TabIndex = 0;
			this->sessionH->TextChanged += gcnew System::EventHandler(this, &SessionHistory::sessionH_TextChanged);
			// 
			// SessionHistory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(796, 446);
			this->Controls->Add(this->sessionH);
			this->MaximizeBox = false;
			this->Name = L"SessionHistory";
			this->Text = L"Session History";
			this->Load += gcnew System::EventHandler(this, &SessionHistory::SessionHistory_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void SessionHistory_Load(System::Object^  sender, System::EventArgs^  e) {
		sessionH->Text = ""+myf->getExpressionsFromFile();
	}
	private: System::Void sessionH_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
