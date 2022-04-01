#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"DataAccount.h"
#include<string>
#include <msclr\marshal_cppstd.h>
namespace GameBauCua {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	using namespace System::Threading::Tasks;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for HomeGame
	/// </summary>
	public ref class HomeGame : public System::Windows::Forms::Form
	{
	private:
	// đặt tên biến ngu
		String^ a;
		int momo;
	public:
		//check event button
		int check = 0;
		bool checkStop = true;
		//automatic number generation
		// 1 nai
		// 2 bau
		// 3 ga
		// 4 ca
		// 5 cua
		// 6 tom
		//hàm chức năng không cmt
		int Random(int a, int b)
		{
			return a + rand() % (b - a + 1);
		}
		HomeGame(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		HomeGame(String^ a )
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->a = a;
			this->userName->Text = "";
			this->userName->Text = a;
		}
		HomeGame(String^ a , int momo)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->a = a;
			this->momo = momo;
			this->userName->Text = "";
			this->userName->Text = a;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HomeGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnGa;
	protected:

	private: System::Windows::Forms::Button^ btnBau;

	private: System::Windows::Forms::Button^ btnNai;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ btnTom;

	private: System::Windows::Forms::Button^ btnCua;

	private: System::Windows::Forms::Button^ btnCa;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtSodu;


	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ userName;
	private: System::Windows::Forms::Button^ btnDat;



	private:
		
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HomeGame::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnDat = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnTom = (gcnew System::Windows::Forms::Button());
			this->btnCua = (gcnew System::Windows::Forms::Button());
			this->btnCa = (gcnew System::Windows::Forms::Button());
			this->btnGa = (gcnew System::Windows::Forms::Button());
			this->btnBau = (gcnew System::Windows::Forms::Button());
			this->btnNai = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtSodu = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->userName = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox1->Controls->Add(this->btnDat);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->btnTom);
			this->groupBox1->Controls->Add(this->btnCua);
			this->groupBox1->Controls->Add(this->btnCa);
			this->groupBox1->Controls->Add(this->btnGa);
			this->groupBox1->Controls->Add(this->btnBau);
			this->groupBox1->Controls->Add(this->btnNai);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->groupBox1->Location = System::Drawing::Point(0, 108);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(464, 419);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Home Game";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &HomeGame::groupBox1_Enter);
			// 
			// btnDat
			// 
			this->btnDat->BackColor = System::Drawing::SystemColors::Control;
			this->btnDat->Enabled = false;
			this->btnDat->Location = System::Drawing::Point(374, 162);
			this->btnDat->Margin = System::Windows::Forms::Padding(2);
			this->btnDat->Name = L"btnDat";
			this->btnDat->Size = System::Drawing::Size(66, 70);
			this->btnDat->TabIndex = 7;
			this->btnDat->Text = L"Đặt";
			this->btnDat->UseVisualStyleBackColor = false;
			this->btnDat->Click += gcnew System::EventHandler(this, &HomeGame::btnDat_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(126, 27);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(207, 205);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &HomeGame::pictureBox1_Click);
			// 
			// btnTom
			// 
			this->btnTom->BackColor = System::Drawing::SystemColors::Control;
			this->btnTom->Location = System::Drawing::Point(286, 332);
			this->btnTom->Margin = System::Windows::Forms::Padding(2);
			this->btnTom->Name = L"btnTom";
			this->btnTom->Size = System::Drawing::Size(94, 57);
			this->btnTom->TabIndex = 5;
			this->btnTom->Text = L"Tôm";
			this->btnTom->UseVisualStyleBackColor = false;
			this->btnTom->Click += gcnew System::EventHandler(this, &HomeGame::button4_Click);
			// 
			// btnCua
			// 
			this->btnCua->BackColor = System::Drawing::SystemColors::Control;
			this->btnCua->Location = System::Drawing::Point(177, 332);
			this->btnCua->Margin = System::Windows::Forms::Padding(2);
			this->btnCua->Name = L"btnCua";
			this->btnCua->Size = System::Drawing::Size(94, 57);
			this->btnCua->TabIndex = 4;
			this->btnCua->Text = L"Cua";
			this->btnCua->UseVisualStyleBackColor = false;
			this->btnCua->Click += gcnew System::EventHandler(this, &HomeGame::button5_Click);
			// 
			// btnCa
			// 
			this->btnCa->BackColor = System::Drawing::SystemColors::Control;
			this->btnCa->Location = System::Drawing::Point(69, 332);
			this->btnCa->Margin = System::Windows::Forms::Padding(2);
			this->btnCa->Name = L"btnCa";
			this->btnCa->Size = System::Drawing::Size(94, 57);
			this->btnCa->TabIndex = 3;
			this->btnCa->Text = L"Cá";
			this->btnCa->UseVisualStyleBackColor = false;
			this->btnCa->Click += gcnew System::EventHandler(this, &HomeGame::button6_Click);
			// 
			// btnGa
			// 
			this->btnGa->BackColor = System::Drawing::SystemColors::Control;
			this->btnGa->Location = System::Drawing::Point(286, 257);
			this->btnGa->Margin = System::Windows::Forms::Padding(2);
			this->btnGa->Name = L"btnGa";
			this->btnGa->Size = System::Drawing::Size(94, 57);
			this->btnGa->TabIndex = 2;
			this->btnGa->Text = L"Gà";
			this->btnGa->UseVisualStyleBackColor = false;
			this->btnGa->Click += gcnew System::EventHandler(this, &HomeGame::button3_Click);
			// 
			// btnBau
			// 
			this->btnBau->BackColor = System::Drawing::SystemColors::Control;
			this->btnBau->Location = System::Drawing::Point(177, 257);
			this->btnBau->Margin = System::Windows::Forms::Padding(2);
			this->btnBau->Name = L"btnBau";
			this->btnBau->Size = System::Drawing::Size(94, 57);
			this->btnBau->TabIndex = 1;
			this->btnBau->Text = L"Bầu";
			this->btnBau->UseVisualStyleBackColor = false;
			this->btnBau->Click += gcnew System::EventHandler(this, &HomeGame::button2_Click);
			// 
			// btnNai
			// 
			this->btnNai->BackColor = System::Drawing::SystemColors::Control;
			this->btnNai->Location = System::Drawing::Point(69, 257);
			this->btnNai->Margin = System::Windows::Forms::Padding(2);
			this->btnNai->Name = L"btnNai";
			this->btnNai->Size = System::Drawing::Size(94, 57);
			this->btnNai->TabIndex = 0;
			this->btnNai->Text = L"Nai";
			this->btnNai->UseVisualStyleBackColor = false;
			this->btnNai->Click += gcnew System::EventHandler(this, &HomeGame::button1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->txtSodu);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(264, 20);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(186, 84);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"*******";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(14, 15);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Số dư tài khoản";
			this->label1->Click += gcnew System::EventHandler(this, &HomeGame::label1_Click);
			// 
			// txtSodu
			// 
			this->txtSodu->Location = System::Drawing::Point(5, 37);
			this->txtSodu->Margin = System::Windows::Forms::Padding(2);
			this->txtSodu->Multiline = true;
			this->txtSodu->Name = L"txtSodu";
			this->txtSodu->ReadOnly = true;
			this->txtSodu->Size = System::Drawing::Size(156, 19);
			this->txtSodu->TabIndex = 0;
			this->txtSodu->Text = L"10000000";
			this->txtSodu->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtSodu->ReadOnlyChanged += gcnew System::EventHandler(this, &HomeGame::txtSodu_TextChanged);
			this->txtSodu->TextChanged += gcnew System::EventHandler(this, &HomeGame::txtSodu_TextChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->userName);
			this->groupBox3->Location = System::Drawing::Point(9, 20);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2);
			this->groupBox3->Size = System::Drawing::Size(239, 84);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"User Name";
			// 
			// userName
			// 
			this->userName->AutoSize = true;
			this->userName->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userName->Location = System::Drawing::Point(10, 24);
			this->userName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->userName->Name = L"userName";
			this->userName->Size = System::Drawing::Size(81, 29);
			this->userName->TabIndex = 0;
			this->userName->Text = L"label2";
			this->userName->Click += gcnew System::EventHandler(this, &HomeGame::userName_Click);
			// 
			// HomeGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(464, 527);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximumSize = System::Drawing::Size(480, 700);
			this->MinimumSize = System::Drawing::Size(480, 542);
			this->Name = L"HomeGame";
			this->Text = L"Bầu Cua T-6";
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	// defause check =0 
	//btnNai
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// reset the state for the button
	this->btnDat->Enabled = true;
	this->btnNai->Enabled = false;
	this->btnBau->Enabled = true;;
	this->btnCa->Enabled = true;
	this->btnCua->Enabled = true;
	this->btnTom->Enabled = true;
	this->btnGa->Enabled = true;
	//catch event for button
	this->check = 1;

}
	//btnBau
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// reset the state for the button
	this->btnDat->Enabled = true;
	this->btnNai->Enabled = true;
	this->btnBau->Enabled = false;
	this->btnCa->Enabled = true;
	this->btnCua->Enabled = true;
	this->btnTom->Enabled = true;
	this->btnGa->Enabled = true;
	//catch event for button
	this->check = 2;
}
	//btnGa
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// reset the state for the button
	this->btnDat->Enabled = true;
	this->btnNai->Enabled = true;
	this->btnBau->Enabled = true;;
	this->btnCa->Enabled = true;
	this->btnCua->Enabled = true;
	this->btnTom->Enabled = true;
	this->btnGa->Enabled = false;
	//catch event for button
	this->check = 3;
}
	//btnTom
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	// reset the state for the button
	this->btnDat->Enabled = true;
	this->btnNai->Enabled = true;
	this->btnBau->Enabled = true;;
	this->btnCa->Enabled = true;
	this->btnCua->Enabled = true;
	this->btnTom->Enabled = false;
	this->btnGa->Enabled = true;
	//catch event for button
	this->check = 6;
}
	//btnCua
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	// reset the state for the button
	this->btnDat->Enabled = true;
	this->btnNai->Enabled = true;
	this->btnBau->Enabled = true;
	this->btnCa->Enabled = true;
	this->btnCua->Enabled = false;
	this->btnTom->Enabled = true;
	this->btnGa->Enabled = true;
	//catch event for button
	this->check = 5;
}
	//btnCa
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	// reset the state for the button
	this->btnDat->Enabled = true;
	this->btnNai->Enabled = true;
	this->btnBau->Enabled = true;;
	this->btnCa->Enabled = false;
	this->btnCua->Enabled = true;
	this->btnTom->Enabled = true;
	this->btnGa->Enabled = true;
	//catch event for button
	this->check = 4;
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
	//btnSubmit
private: System::Void btnDat_Click(System::Object^ sender, System::EventArgs^ e) {
	// reset the state of the button
	this->btnDat->Enabled = false;
	this->btnNai->Enabled = true;
	this->btnBau->Enabled = true;;
	this->btnCa->Enabled = true;
	this->btnCua->Enabled = true;
	this->btnTom->Enabled = true;
	this->btnGa->Enabled = true;
	//Generate random numbers from 1 to 6
	int val = Random(1,6);
	//compare the random function and print the corresponding image
	if (val == 1) {
		pictureBox1->Image = Image::FromFile("Nai.png");
	}
	else if (val == 2) {
		pictureBox1->Image = Image::FromFile("Bau.png");
	}
	else if (val == 3) {
		pictureBox1->Image = Image::FromFile("Ga.png");
	}
	else if (val == 4) {
		pictureBox1->Image = Image::FromFile("Ca.png");
	}
	else if (val == 5) {
		pictureBox1->Image = Image::FromFile("Cua.png");
	}
	else if (val == 6) {
		pictureBox1->Image = Image::FromFile("Tom.png");
	}
	//check the money in the account
	int tmp = Int32::Parse(txtSodu->Text);
	if (tmp < 200) {
		MessageBox::Show(L"Bạn không đủ tiền vui lòng nạp thêm!!!","Thông Báo !", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		MessageBox::Show(L"Người Không chơi là người thắng!!!", "Thông Báo !", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		if (this->check == val) {
			this->txtSodu->Text = "";
			this->txtSodu->Text += tmp + 200;
		}
		else {
			this->txtSodu->Text = "";
			this->txtSodu->Text += tmp - 200;
		}
	}
	// reset check
	this->check = 0;
}
private: System::Void txtSodu_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
}
private: System::Void userName_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
