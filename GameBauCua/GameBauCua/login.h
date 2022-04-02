#pragma once
#include"HomeGame.h"
#include"DataAccount.h"
#include <msclr\marshal_cppstd.h>
namespace GameBauCua {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
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
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtuser;
	private: System::Windows::Forms::TextBox^ txtPass;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnLogin;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;




	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(login::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtuser = (gcnew System::Windows::Forms::TextBox());
			this->txtPass = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 60);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tài Khoản";
			// 
			// txtuser
			// 
			this->txtuser->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtuser->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtuser->Location = System::Drawing::Point(69, 56);
			this->txtuser->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtuser->Name = L"txtuser";
			this->txtuser->Size = System::Drawing::Size(186, 25);
			this->txtuser->TabIndex = 2;
			this->txtuser->TextChanged += gcnew System::EventHandler(this, &login::textBox1_TextChanged);
			// 
			// txtPass
			// 
			this->txtPass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPass->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPass->Location = System::Drawing::Point(69, 100);
			this->txtPass->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtPass->Name = L"txtPass";
			this->txtPass->PasswordChar = '*';
			this->txtPass->Size = System::Drawing::Size(186, 25);
			this->txtPass->TabIndex = 4;
			this->txtPass->TextChanged += gcnew System::EventHandler(this, &login::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 104);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Mật Khẩu";
			// 
			// btnLogin
			// 
			this->btnLogin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnLogin->Location = System::Drawing::Point(99, 137);
			this->btnLogin->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(101, 50);
			this->btnLogin->TabIndex = 5;
			this->btnLogin->Text = L"Đăng Nhập";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &login::btnLogin_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label3->Location = System::Drawing::Point(76, 11);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 33);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Bầu Cua T-6";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(278, 11);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(174, 180);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(458, 212);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->txtPass);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtuser);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MinimumSize = System::Drawing::Size(229, 251);
			this->Name = L"login";
			this->Padding = System::Windows::Forms::Padding(2);
			this->Text = L"login";
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		std::string user = context.marshal_as<std::string>(txtuser->Text);
		std::string pass = context.marshal_as<std::string>(txtPass->Text);
		if (DataAccount().findByUser(user) > 0 && DataAccount().getList()[DataAccount().findByUser(user)].getPass().compare(pass)==0 ) {
			this->Hide();
			GameBauCua::HomeGame m(txtuser->Text);
			m.ShowDialog();
			this->Close();
		}else {
			MessageBox::Show(L"Tài khoản hoặc mật khẩu không tồn tại", "Login !", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		/*if (DataAccount().getList().at(DataAccount().findByUser(user)).getPass().compare(pass) == 0) {
			*/
		}
		/*else {
			MessageBox::Show(L"Tài khoản hoặc mật khẩu không tồn tại", "Login !", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}*/
		
private: System::Void login_Load(System::Object^ sender, System::EventArgs^ e) {
}
};; // Thừa kí tự ;
}

