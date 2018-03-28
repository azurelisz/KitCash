#pragma once
#include "Connection2.h"

namespace KitCash {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::Runtime::InteropServices;
	using namespace System::Threading;

	/// <summary>
	/// Summary for FormMenu
	/// </summary>
	public ref class FormMenu : public System::Windows::Forms::Form
	{
	public:
		FormMenu(void)
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
		~FormMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panelmain;
	private: System::Windows::Forms::Panel^  panelloginleft;

	protected:
	private: System::Windows::Forms::Panel^  paneledit;
	public: System::Windows::Forms::TextBox^  pro_unitedit;
	private:
	public: System::Windows::Forms::TextBox^  pro_typeedit;
	public: System::Windows::Forms::TextBox^  pro_qtyedit;
	public: System::Windows::Forms::TextBox^  pro_priceedit;
	public: System::Windows::Forms::TextBox^  pro_nameedit;
	public: System::Windows::Forms::TextBox^  pro_idedit;
	private: Bunifu::Framework::UI::BunifuFlatButton^  b_saveedit;
	public:
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Panel^  panelHeader;
	private: System::Windows::Forms::Label^  min;
	private: System::Windows::Forms::Label^  exit;
	private: System::Windows::Forms::Label^  labelheader;
	private: System::Windows::Forms::Panel^  panelMenu;




	private: System::Windows::Forms::Panel^  panelLogo;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  paneladd;
	private: System::Windows::Forms::TextBox^  pro_unitadd;
	private: System::Windows::Forms::TextBox^  pro_typeadd;
	private: System::Windows::Forms::TextBox^  pro_qtyadd;
	private: System::Windows::Forms::TextBox^  pro_priceadd;
	private: System::Windows::Forms::TextBox^  pro_nameadd;
	private: System::Windows::Forms::TextBox^  pro_idadd;
	private: Bunifu::Framework::UI::BunifuFlatButton^  b_deleteadd;
	private: Bunifu::Framework::UI::BunifuFlatButton^  b_saveadd;
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^  DGVadd;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Panel^  panelsale;
	private: Bunifu::Framework::UI::BunifuFlatButton^  b_savesale;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  emp;
	private: System::Windows::Forms::TextBox^  customer_name;
	private: System::Windows::Forms::TextBox^  customer_id;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  tonmoney;
	private: System::Windows::Forms::TextBox^  rubmoney;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  totalmoney;
	private: Bunifu::Framework::UI::BunifuFlatButton^  b_delete;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  pro_price;
	private: Bunifu::Framework::UI::BunifuFlatButton^  b_add;
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^  DGV;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  proid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  proname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  proprice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  prono;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  prounit;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  prototal;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::NumericUpDown^  qty;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  pro_unit;
	private: System::Windows::Forms::TextBox^  pro_type;
	private: System::Windows::Forms::TextBox^  pro_name;
	private: System::Windows::Forms::TextBox^  pro_id;
	private: System::Windows::Forms::TextBox^  tr_id;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  stateuser;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: Bunifu::Framework::UI::BunifuFlatButton^  b_loginmenu;

private: Bunifu::Framework::UI::BunifuFlatButton^  b_itemreport;
private: Bunifu::Framework::UI::BunifuFlatButton^  b_itemedit;
private: Bunifu::Framework::UI::BunifuFlatButton^  b_itemadd;
private: Bunifu::Framework::UI::BunifuFlatButton^  b_itemsale;
private: System::Windows::Forms::Panel^  paneltask;
private: System::Windows::Forms::Panel^  panelloginright;
private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: Bunifu::Framework::UI::BunifuFlatButton^  b_login;




private: Bunifu::Framework::UI::BunifuMetroTextbox^  password;
private: Bunifu::Framework::UI::BunifuMetroTextbox^  username;
private: System::Windows::Forms::PictureBox^  pictureBox5;
private: System::Windows::Forms::PictureBox^  pictureBox4;
private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::Label^  label27;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormMenu::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panelmain = (gcnew System::Windows::Forms::Panel());
			this->panelsale = (gcnew System::Windows::Forms::Panel());
			this->panelloginright = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->password = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->username = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->b_login = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->b_savesale = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->emp = (gcnew System::Windows::Forms::TextBox());
			this->customer_name = (gcnew System::Windows::Forms::TextBox());
			this->customer_id = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tonmoney = (gcnew System::Windows::Forms::TextBox());
			this->rubmoney = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->totalmoney = (gcnew System::Windows::Forms::TextBox());
			this->b_delete = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pro_price = (gcnew System::Windows::Forms::TextBox());
			this->b_add = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->DGV = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->proid = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->proname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->proprice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->prono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->prounit = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->prototal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->qty = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pro_unit = (gcnew System::Windows::Forms::TextBox());
			this->pro_type = (gcnew System::Windows::Forms::TextBox());
			this->pro_name = (gcnew System::Windows::Forms::TextBox());
			this->pro_id = (gcnew System::Windows::Forms::TextBox());
			this->tr_id = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->paneladd = (gcnew System::Windows::Forms::Panel());
			this->pro_unitadd = (gcnew System::Windows::Forms::TextBox());
			this->pro_typeadd = (gcnew System::Windows::Forms::TextBox());
			this->pro_qtyadd = (gcnew System::Windows::Forms::TextBox());
			this->pro_priceadd = (gcnew System::Windows::Forms::TextBox());
			this->pro_nameadd = (gcnew System::Windows::Forms::TextBox());
			this->pro_idadd = (gcnew System::Windows::Forms::TextBox());
			this->b_deleteadd = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->b_saveadd = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->DGVadd = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->paneledit = (gcnew System::Windows::Forms::Panel());
			this->pro_unitedit = (gcnew System::Windows::Forms::TextBox());
			this->pro_typeedit = (gcnew System::Windows::Forms::TextBox());
			this->pro_qtyedit = (gcnew System::Windows::Forms::TextBox());
			this->pro_priceedit = (gcnew System::Windows::Forms::TextBox());
			this->pro_nameedit = (gcnew System::Windows::Forms::TextBox());
			this->pro_idedit = (gcnew System::Windows::Forms::TextBox());
			this->b_saveedit = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->panelHeader = (gcnew System::Windows::Forms::Panel());
			this->stateuser = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->min = (gcnew System::Windows::Forms::Label());
			this->exit = (gcnew System::Windows::Forms::Label());
			this->labelheader = (gcnew System::Windows::Forms::Label());
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->panelloginleft = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->b_loginmenu = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->b_itemreport = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->b_itemedit = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->b_itemadd = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->b_itemsale = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->paneltask = (gcnew System::Windows::Forms::Panel());
			this->panelLogo = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelmain->SuspendLayout();
			this->panelsale->SuspendLayout();
			this->panelloginright->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->qty))->BeginInit();
			this->paneladd->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVadd))->BeginInit();
			this->paneledit->SuspendLayout();
			this->panelHeader->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panelMenu->SuspendLayout();
			this->panelloginleft->SuspendLayout();
			this->panelLogo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panelmain
			// 
			this->panelmain->BackColor = System::Drawing::Color::Gainsboro;
			this->panelmain->Controls->Add(this->panelsale);
			this->panelmain->Controls->Add(this->paneladd);
			this->panelmain->Controls->Add(this->paneledit);
			this->panelmain->Controls->Add(this->panelHeader);
			this->panelmain->Controls->Add(this->panelMenu);
			this->panelmain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelmain->Location = System::Drawing::Point(0, 0);
			this->panelmain->Name = L"panelmain";
			this->panelmain->Size = System::Drawing::Size(900, 673);
			this->panelmain->TabIndex = 0;
			// 
			// panelsale
			// 
			this->panelsale->Controls->Add(this->panelloginright);
			this->panelsale->Controls->Add(this->b_savesale);
			this->panelsale->Controls->Add(this->label13);
			this->panelsale->Controls->Add(this->label12);
			this->panelsale->Controls->Add(this->label11);
			this->panelsale->Controls->Add(this->emp);
			this->panelsale->Controls->Add(this->customer_name);
			this->panelsale->Controls->Add(this->customer_id);
			this->panelsale->Controls->Add(this->label10);
			this->panelsale->Controls->Add(this->label9);
			this->panelsale->Controls->Add(this->tonmoney);
			this->panelsale->Controls->Add(this->rubmoney);
			this->panelsale->Controls->Add(this->label8);
			this->panelsale->Controls->Add(this->totalmoney);
			this->panelsale->Controls->Add(this->b_delete);
			this->panelsale->Controls->Add(this->label7);
			this->panelsale->Controls->Add(this->pro_price);
			this->panelsale->Controls->Add(this->b_add);
			this->panelsale->Controls->Add(this->DGV);
			this->panelsale->Controls->Add(this->label6);
			this->panelsale->Controls->Add(this->qty);
			this->panelsale->Controls->Add(this->label5);
			this->panelsale->Controls->Add(this->label4);
			this->panelsale->Controls->Add(this->pro_unit);
			this->panelsale->Controls->Add(this->pro_type);
			this->panelsale->Controls->Add(this->pro_name);
			this->panelsale->Controls->Add(this->pro_id);
			this->panelsale->Controls->Add(this->tr_id);
			this->panelsale->Controls->Add(this->label3);
			this->panelsale->Controls->Add(this->label2);
			this->panelsale->Controls->Add(this->label14);
			this->panelsale->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelsale->Location = System::Drawing::Point(223, 78);
			this->panelsale->Name = L"panelsale";
			this->panelsale->Size = System::Drawing::Size(677, 595);
			this->panelsale->TabIndex = 59;
			// 
			// panelloginright
			// 
			this->panelloginright->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->panelloginright->Controls->Add(this->pictureBox5);
			this->panelloginright->Controls->Add(this->pictureBox4);
			this->panelloginright->Controls->Add(this->password);
			this->panelloginright->Controls->Add(this->username);
			this->panelloginright->Controls->Add(this->panel4);
			this->panelloginright->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelloginright->Location = System::Drawing::Point(0, 0);
			this->panelloginright->Name = L"panelloginright";
			this->panelloginright->Size = System::Drawing::Size(677, 595);
			this->panelloginright->TabIndex = 94;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::White;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(199, 408);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(47, 49);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 34;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::White;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(198, 343);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(48, 49);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 33;
			this->pictureBox4->TabStop = false;
			// 
			// password
			// 
			this->password->BackColor = System::Drawing::Color::White;
			this->password->BorderColorFocused = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->password->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->password->BorderColorMouseHover = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->password->BorderThickness = 3;
			this->password->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->password->Font = (gcnew System::Drawing::Font(L"Cloud", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->password->isPassword = true;
			this->password->Location = System::Drawing::Point(190, 400);
			this->password->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->password->Name = L"password";
			this->password->Padding = System::Windows::Forms::Padding(60, 5, 0, 0);
			this->password->Size = System::Drawing::Size(310, 64);
			this->password->TabIndex = 27;
			this->password->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// username
			// 
			this->username->BackColor = System::Drawing::Color::White;
			this->username->BorderColorFocused = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->username->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->username->BorderColorMouseHover = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->username->BorderThickness = 3;
			this->username->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->username->Font = (gcnew System::Drawing::Font(L"Cloud", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->username->isPassword = false;
			this->username->Location = System::Drawing::Point(190, 335);
			this->username->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->username->Name = L"username";
			this->username->Padding = System::Windows::Forms::Padding(60, 5, 0, 0);
			this->username->Size = System::Drawing::Size(310, 64);
			this->username->TabIndex = 26;
			this->username->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Controls->Add(this->label27);
			this->panel4->Controls->Add(this->pictureBox3);
			this->panel4->Controls->Add(this->b_login);
			this->panel4->Location = System::Drawing::Point(47, 46);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(583, 501);
			this->panel4->TabIndex = 32;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(194, 239);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(206, 44);
			this->label27->TabIndex = 32;
			this->label27->Text = L"- SIGN IN -";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(196, 33);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(200, 200);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 31;
			this->pictureBox3->TabStop = false;
			// 
			// b_login
			// 
			this->b_login->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->b_login->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->b_login->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b_login->BorderRadius = 0;
			this->b_login->ButtonText = L"LOGIN";
			this->b_login->Cursor = System::Windows::Forms::Cursors::Hand;
			this->b_login->DisabledColor = System::Drawing::Color::Gray;
			this->b_login->Iconcolor = System::Drawing::Color::Transparent;
			this->b_login->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b_login.Iconimage")));
			this->b_login->Iconimage_right = nullptr;
			this->b_login->Iconimage_right_Selected = nullptr;
			this->b_login->Iconimage_Selected = nullptr;
			this->b_login->IconMarginLeft = 0;
			this->b_login->IconMarginRight = 0;
			this->b_login->IconRightVisible = true;
			this->b_login->IconRightZoom = 0;
			this->b_login->IconVisible = true;
			this->b_login->IconZoom = 90;
			this->b_login->IsTab = false;
			this->b_login->Location = System::Drawing::Point(240, 422);
			this->b_login->Name = L"b_login";
			this->b_login->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->b_login->OnHovercolor = System::Drawing::Color::DarkOrange;
			this->b_login->OnHoverTextColor = System::Drawing::Color::White;
			this->b_login->selected = false;
			this->b_login->Size = System::Drawing::Size(130, 48);
			this->b_login->TabIndex = 30;
			this->b_login->Text = L"LOGIN";
			this->b_login->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->b_login->Textcolor = System::Drawing::Color::White;
			this->b_login->TextFont = (gcnew System::Drawing::Font(L"Cloud", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_login->Click += gcnew System::EventHandler(this, &FormMenu::b_login_Click);
			// 
			// b_savesale
			// 
			this->b_savesale->Activecolor = System::Drawing::Color::Navy;
			this->b_savesale->BackColor = System::Drawing::Color::Navy;
			this->b_savesale->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b_savesale->BorderRadius = 0;
			this->b_savesale->ButtonText = L"�ѹ�֡��â��";
			this->b_savesale->Cursor = System::Windows::Forms::Cursors::Hand;
			this->b_savesale->DisabledColor = System::Drawing::Color::Gray;
			this->b_savesale->Iconcolor = System::Drawing::Color::Transparent;
			this->b_savesale->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b_savesale.Iconimage")));
			this->b_savesale->Iconimage_right = nullptr;
			this->b_savesale->Iconimage_right_Selected = nullptr;
			this->b_savesale->Iconimage_Selected = nullptr;
			this->b_savesale->IconMarginLeft = 0;
			this->b_savesale->IconMarginRight = 0;
			this->b_savesale->IconRightVisible = true;
			this->b_savesale->IconRightZoom = 0;
			this->b_savesale->IconVisible = true;
			this->b_savesale->IconZoom = 90;
			this->b_savesale->IsTab = false;
			this->b_savesale->Location = System::Drawing::Point(420, 136);
			this->b_savesale->Name = L"b_savesale";
			this->b_savesale->Normalcolor = System::Drawing::Color::Navy;
			this->b_savesale->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->b_savesale->OnHoverTextColor = System::Drawing::Color::White;
			this->b_savesale->selected = false;
			this->b_savesale->Size = System::Drawing::Size(162, 50);
			this->b_savesale->TabIndex = 93;
			this->b_savesale->Text = L"�ѹ�֡��â��";
			this->b_savesale->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->b_savesale->Textcolor = System::Drawing::Color::White;
			this->b_savesale->TextFont = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_savesale->Click += gcnew System::EventHandler(this, &FormMenu::b_savesale_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label13->Location = System::Drawing::Point(327, 93);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(87, 21);
			this->label13->TabIndex = 92;
			this->label13->Text = L"��ѡ�ҹ��� :";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label12->Location = System::Drawing::Point(349, 58);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 21);
			this->label12->TabIndex = 91;
			this->label12->Text = L"�����١��� :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label11->Location = System::Drawing::Point(343, 23);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(71, 21);
			this->label11->TabIndex = 90;
			this->label11->Text = L"�����١��� :";
			// 
			// emp
			// 
			this->emp->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->emp->Location = System::Drawing::Point(420, 85);
			this->emp->Name = L"emp";
			this->emp->ReadOnly = true;
			this->emp->Size = System::Drawing::Size(240, 29);
			this->emp->TabIndex = 89;
			// 
			// customer_name
			// 
			this->customer_name->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->customer_name->Location = System::Drawing::Point(420, 50);
			this->customer_name->Name = L"customer_name";
			this->customer_name->Size = System::Drawing::Size(240, 29);
			this->customer_name->TabIndex = 88;
			// 
			// customer_id
			// 
			this->customer_id->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->customer_id->Location = System::Drawing::Point(420, 15);
			this->customer_id->Name = L"customer_id";
			this->customer_id->Size = System::Drawing::Size(240, 29);
			this->customer_id->TabIndex = 87;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label10->Location = System::Drawing::Point(499, 261);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 21);
			this->label10->TabIndex = 86;
			this->label10->Text = L"�͹�Թ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label9->Location = System::Drawing::Point(324, 261);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 21);
			this->label9->TabIndex = 85;
			this->label9->Text = L"�Ѻ�Թ";
			// 
			// tonmoney
			// 
			this->tonmoney->Font = (gcnew System::Drawing::Font(L"Cloud Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tonmoney->Location = System::Drawing::Point(446, 285);
			this->tonmoney->Name = L"tonmoney";
			this->tonmoney->ReadOnly = true;
			this->tonmoney->Size = System::Drawing::Size(162, 46);
			this->tonmoney->TabIndex = 84;
			this->tonmoney->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// rubmoney
			// 
			this->rubmoney->Font = (gcnew System::Drawing::Font(L"Cloud Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rubmoney->Location = System::Drawing::Point(264, 285);
			this->rubmoney->Name = L"rubmoney";
			this->rubmoney->Size = System::Drawing::Size(162, 46);
			this->rubmoney->TabIndex = 83;
			this->rubmoney->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->rubmoney->TextChanged += gcnew System::EventHandler(this, &FormMenu::rubmoney_TextChanged);
			this->rubmoney->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormMenu::rubnumber);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label8->Location = System::Drawing::Point(112, 261);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 21);
			this->label8->TabIndex = 82;
			this->label8->Text = L"�Ҥ����������";
			// 
			// totalmoney
			// 
			this->totalmoney->Font = (gcnew System::Drawing::Font(L"Cloud Light", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalmoney->Location = System::Drawing::Point(81, 285);
			this->totalmoney->Name = L"totalmoney";
			this->totalmoney->ReadOnly = true;
			this->totalmoney->Size = System::Drawing::Size(162, 46);
			this->totalmoney->TabIndex = 81;
			this->totalmoney->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// b_delete
			// 
			this->b_delete->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->b_delete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->b_delete->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b_delete->BorderRadius = 0;
			this->b_delete->ButtonText = L"ź�Թ���";
			this->b_delete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->b_delete->DisabledColor = System::Drawing::Color::Gray;
			this->b_delete->Iconcolor = System::Drawing::Color::Transparent;
			this->b_delete->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b_delete.Iconimage")));
			this->b_delete->Iconimage_right = nullptr;
			this->b_delete->Iconimage_right_Selected = nullptr;
			this->b_delete->Iconimage_Selected = nullptr;
			this->b_delete->IconMarginLeft = 0;
			this->b_delete->IconMarginRight = 0;
			this->b_delete->IconRightVisible = true;
			this->b_delete->IconRightZoom = 0;
			this->b_delete->IconVisible = true;
			this->b_delete->IconZoom = 90;
			this->b_delete->IsTab = false;
			this->b_delete->Location = System::Drawing::Point(498, 204);
			this->b_delete->Name = L"b_delete";
			this->b_delete->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->b_delete->OnHovercolor = System::Drawing::Color::Red;
			this->b_delete->OnHoverTextColor = System::Drawing::Color::White;
			this->b_delete->selected = false;
			this->b_delete->Size = System::Drawing::Size(162, 50);
			this->b_delete->TabIndex = 80;
			this->b_delete->Text = L"ź�Թ���";
			this->b_delete->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->b_delete->Textcolor = System::Drawing::Color::White;
			this->b_delete->TextFont = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_delete->Click += gcnew System::EventHandler(this, &FormMenu::b_delete_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label7->Location = System::Drawing::Point(24, 128);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(75, 21);
			this->label7->TabIndex = 79;
			this->label7->Text = L"�Ҥ��Թ��� :";
			// 
			// pro_price
			// 
			this->pro_price->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->pro_price->Location = System::Drawing::Point(105, 120);
			this->pro_price->Name = L"pro_price";
			this->pro_price->ReadOnly = true;
			this->pro_price->Size = System::Drawing::Size(209, 29);
			this->pro_price->TabIndex = 78;
			// 
			// b_add
			// 
			this->b_add->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->b_add->BackColor = System::Drawing::Color::SeaGreen;
			this->b_add->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b_add->BorderRadius = 0;
			this->b_add->ButtonText = L"�����Թ���";
			this->b_add->Cursor = System::Windows::Forms::Cursors::Hand;
			this->b_add->DisabledColor = System::Drawing::Color::Gray;
			this->b_add->Iconcolor = System::Drawing::Color::Transparent;
			this->b_add->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b_add.Iconimage")));
			this->b_add->Iconimage_right = nullptr;
			this->b_add->Iconimage_right_Selected = nullptr;
			this->b_add->Iconimage_Selected = nullptr;
			this->b_add->IconMarginLeft = 0;
			this->b_add->IconMarginRight = 0;
			this->b_add->IconRightVisible = true;
			this->b_add->IconRightZoom = 0;
			this->b_add->IconVisible = true;
			this->b_add->IconZoom = 90;
			this->b_add->IsTab = false;
			this->b_add->Location = System::Drawing::Point(330, 204);
			this->b_add->Name = L"b_add";
			this->b_add->Normalcolor = System::Drawing::Color::SeaGreen;
			this->b_add->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->b_add->OnHoverTextColor = System::Drawing::Color::White;
			this->b_add->selected = false;
			this->b_add->Size = System::Drawing::Size(162, 50);
			this->b_add->TabIndex = 77;
			this->b_add->Text = L"�����Թ���";
			this->b_add->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->b_add->Textcolor = System::Drawing::Color::White;
			this->b_add->TextFont = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_add->Click += gcnew System::EventHandler(this, &FormMenu::b_add_Click);
			// 
			// DGV
			// 
			this->DGV->AllowUserToAddRows = false;
			this->DGV->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->DGV->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->DGV->BackgroundColor = System::Drawing::Color::Gainsboro;
			this->DGV->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DGV->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Cloud Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->proid, this->proname,
					this->proprice, this->prono, this->prounit, this->prototal
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Cloud Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DGV->DefaultCellStyle = dataGridViewCellStyle3;
			this->DGV->DoubleBuffered = true;
			this->DGV->EnableHeadersVisualStyles = false;
			this->DGV->HeaderBgColor = System::Drawing::Color::SeaGreen;
			this->DGV->HeaderForeColor = System::Drawing::Color::White;
			this->DGV->Location = System::Drawing::Point(12, 341);
			this->DGV->Name = L"DGV";
			this->DGV->ReadOnly = true;
			this->DGV->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->DGV->Size = System::Drawing::Size(653, 239);
			this->DGV->TabIndex = 76;
			// 
			// proid
			// 
			this->proid->HeaderText = L"�����Թ���";
			this->proid->Name = L"proid";
			this->proid->ReadOnly = true;
			this->proid->Width = 80;
			// 
			// proname
			// 
			this->proname->HeaderText = L"�����Թ���";
			this->proname->Name = L"proname";
			this->proname->ReadOnly = true;
			this->proname->Width = 200;
			// 
			// proprice
			// 
			this->proprice->HeaderText = L"�Ҥ��Թ���";
			this->proprice->Name = L"proprice";
			this->proprice->ReadOnly = true;
			this->proprice->Width = 80;
			// 
			// prono
			// 
			this->prono->HeaderText = L"�ӹǹ����";
			this->prono->Name = L"prono";
			this->prono->ReadOnly = true;
			this->prono->Width = 80;
			// 
			// prounit
			// 
			this->prounit->HeaderText = L"˹��¹Ѻ";
			this->prounit->Name = L"prounit";
			this->prounit->ReadOnly = true;
			this->prounit->Width = 80;
			// 
			// prototal
			// 
			this->prototal->HeaderText = L"�Ҥ����";
			this->prototal->Name = L"prototal";
			this->prototal->ReadOnly = true;
			this->prototal->Width = 92;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label6->Location = System::Drawing::Point(18, 233);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 21);
			this->label6->TabIndex = 75;
			this->label6->Text = L"�ӹǹ������ :";
			// 
			// qty
			// 
			this->qty->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->qty->Location = System::Drawing::Point(105, 225);
			this->qty->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999, 0, 0, 0 });
			this->qty->Name = L"qty";
			this->qty->Size = System::Drawing::Size(209, 29);
			this->qty->TabIndex = 74;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label5->Location = System::Drawing::Point(33, 198);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 21);
			this->label5->TabIndex = 73;
			this->label5->Text = L"˹��¹Ѻ :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label4->Location = System::Drawing::Point(42, 163);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 21);
			this->label4->TabIndex = 72;
			this->label4->Text = L"������ :";
			// 
			// pro_unit
			// 
			this->pro_unit->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->pro_unit->Location = System::Drawing::Point(105, 190);
			this->pro_unit->Name = L"pro_unit";
			this->pro_unit->ReadOnly = true;
			this->pro_unit->Size = System::Drawing::Size(209, 29);
			this->pro_unit->TabIndex = 71;
			// 
			// pro_type
			// 
			this->pro_type->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->pro_type->Location = System::Drawing::Point(105, 155);
			this->pro_type->Name = L"pro_type";
			this->pro_type->ReadOnly = true;
			this->pro_type->Size = System::Drawing::Size(209, 29);
			this->pro_type->TabIndex = 70;
			// 
			// pro_name
			// 
			this->pro_name->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->pro_name->Location = System::Drawing::Point(105, 85);
			this->pro_name->Name = L"pro_name";
			this->pro_name->ReadOnly = true;
			this->pro_name->Size = System::Drawing::Size(209, 29);
			this->pro_name->TabIndex = 69;
			// 
			// pro_id
			// 
			this->pro_id->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->pro_id->Location = System::Drawing::Point(105, 50);
			this->pro_id->Name = L"pro_id";
			this->pro_id->Size = System::Drawing::Size(209, 29);
			this->pro_id->TabIndex = 68;
			this->pro_id->TextChanged += gcnew System::EventHandler(this, &FormMenu::pro_id_TextChanged);
			// 
			// tr_id
			// 
			this->tr_id->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->tr_id->Location = System::Drawing::Point(105, 15);
			this->tr_id->Name = L"tr_id";
			this->tr_id->ReadOnly = true;
			this->tr_id->Size = System::Drawing::Size(209, 29);
			this->tr_id->TabIndex = 67;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label3->Location = System::Drawing::Point(34, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 21);
			this->label3->TabIndex = 66;
			this->label3->Text = L"�����Թ��� :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label2->Location = System::Drawing::Point(28, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 21);
			this->label2->TabIndex = 65;
			this->label2->Text = L"�����Թ��� :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label14->Location = System::Drawing::Point(13, 23);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(86, 21);
			this->label14->TabIndex = 64;
			this->label14->Text = L"�Ţ����͡��� :";
			// 
			// paneladd
			// 
			this->paneladd->Controls->Add(this->pro_unitadd);
			this->paneladd->Controls->Add(this->pro_typeadd);
			this->paneladd->Controls->Add(this->pro_qtyadd);
			this->paneladd->Controls->Add(this->pro_priceadd);
			this->paneladd->Controls->Add(this->pro_nameadd);
			this->paneladd->Controls->Add(this->pro_idadd);
			this->paneladd->Controls->Add(this->b_deleteadd);
			this->paneladd->Controls->Add(this->b_saveadd);
			this->paneladd->Controls->Add(this->DGVadd);
			this->paneladd->Controls->Add(this->label15);
			this->paneladd->Controls->Add(this->label16);
			this->paneladd->Controls->Add(this->label17);
			this->paneladd->Controls->Add(this->label18);
			this->paneladd->Controls->Add(this->label19);
			this->paneladd->Controls->Add(this->label20);
			this->paneladd->Dock = System::Windows::Forms::DockStyle::Fill;
			this->paneladd->Location = System::Drawing::Point(223, 78);
			this->paneladd->Name = L"paneladd";
			this->paneladd->Size = System::Drawing::Size(677, 595);
			this->paneladd->TabIndex = 58;
			// 
			// pro_unitadd
			// 
			this->pro_unitadd->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->pro_unitadd->Location = System::Drawing::Point(155, 234);
			this->pro_unitadd->Name = L"pro_unitadd";
			this->pro_unitadd->Size = System::Drawing::Size(248, 29);
			this->pro_unitadd->TabIndex = 58;
			// 
			// pro_typeadd
			// 
			this->pro_typeadd->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->pro_typeadd->Location = System::Drawing::Point(155, 191);
			this->pro_typeadd->Name = L"pro_typeadd";
			this->pro_typeadd->Size = System::Drawing::Size(248, 29);
			this->pro_typeadd->TabIndex = 57;
			// 
			// pro_qtyadd
			// 
			this->pro_qtyadd->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->pro_qtyadd->Location = System::Drawing::Point(155, 151);
			this->pro_qtyadd->Name = L"pro_qtyadd";
			this->pro_qtyadd->Size = System::Drawing::Size(248, 29);
			this->pro_qtyadd->TabIndex = 56;
			this->pro_qtyadd->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormMenu::qty_numadd);
			// 
			// pro_priceadd
			// 
			this->pro_priceadd->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->pro_priceadd->Location = System::Drawing::Point(155, 111);
			this->pro_priceadd->Name = L"pro_priceadd";
			this->pro_priceadd->Size = System::Drawing::Size(248, 29);
			this->pro_priceadd->TabIndex = 55;
			this->pro_priceadd->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormMenu::price_numadd);
			// 
			// pro_nameadd
			// 
			this->pro_nameadd->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->pro_nameadd->Location = System::Drawing::Point(155, 70);
			this->pro_nameadd->Name = L"pro_nameadd";
			this->pro_nameadd->Size = System::Drawing::Size(248, 29);
			this->pro_nameadd->TabIndex = 54;
			// 
			// pro_idadd
			// 
			this->pro_idadd->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->pro_idadd->Location = System::Drawing::Point(155, 29);
			this->pro_idadd->Name = L"pro_idadd";
			this->pro_idadd->Size = System::Drawing::Size(248, 29);
			this->pro_idadd->TabIndex = 53;
			// 
			// b_deleteadd
			// 
			this->b_deleteadd->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->b_deleteadd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->b_deleteadd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b_deleteadd->BorderRadius = 0;
			this->b_deleteadd->ButtonText = L"ź������";
			this->b_deleteadd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->b_deleteadd->DisabledColor = System::Drawing::Color::Gray;
			this->b_deleteadd->Iconcolor = System::Drawing::Color::Transparent;
			this->b_deleteadd->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b_deleteadd.Iconimage")));
			this->b_deleteadd->Iconimage_right = nullptr;
			this->b_deleteadd->Iconimage_right_Selected = nullptr;
			this->b_deleteadd->Iconimage_Selected = nullptr;
			this->b_deleteadd->IconMarginLeft = 0;
			this->b_deleteadd->IconMarginRight = 0;
			this->b_deleteadd->IconRightVisible = true;
			this->b_deleteadd->IconRightZoom = 0;
			this->b_deleteadd->IconVisible = true;
			this->b_deleteadd->IconZoom = 90;
			this->b_deleteadd->IsTab = false;
			this->b_deleteadd->Location = System::Drawing::Point(420, 151);
			this->b_deleteadd->Name = L"b_deleteadd";
			this->b_deleteadd->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->b_deleteadd->OnHovercolor = System::Drawing::Color::Red;
			this->b_deleteadd->OnHoverTextColor = System::Drawing::Color::White;
			this->b_deleteadd->selected = false;
			this->b_deleteadd->Size = System::Drawing::Size(214, 112);
			this->b_deleteadd->TabIndex = 52;
			this->b_deleteadd->Text = L"ź������";
			this->b_deleteadd->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->b_deleteadd->Textcolor = System::Drawing::Color::White;
			this->b_deleteadd->TextFont = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_deleteadd->Click += gcnew System::EventHandler(this, &FormMenu::b_deleteadd_Click);
			// 
			// b_saveadd
			// 
			this->b_saveadd->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->b_saveadd->BackColor = System::Drawing::Color::SeaGreen;
			this->b_saveadd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b_saveadd->BorderRadius = 0;
			this->b_saveadd->ButtonText = L"�ѹ�֡������";
			this->b_saveadd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->b_saveadd->DisabledColor = System::Drawing::Color::Gray;
			this->b_saveadd->Iconcolor = System::Drawing::Color::Transparent;
			this->b_saveadd->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b_saveadd.Iconimage")));
			this->b_saveadd->Iconimage_right = nullptr;
			this->b_saveadd->Iconimage_right_Selected = nullptr;
			this->b_saveadd->Iconimage_Selected = nullptr;
			this->b_saveadd->IconMarginLeft = 0;
			this->b_saveadd->IconMarginRight = 0;
			this->b_saveadd->IconRightVisible = true;
			this->b_saveadd->IconRightZoom = 0;
			this->b_saveadd->IconVisible = true;
			this->b_saveadd->IconZoom = 90;
			this->b_saveadd->IsTab = false;
			this->b_saveadd->Location = System::Drawing::Point(420, 29);
			this->b_saveadd->Name = L"b_saveadd";
			this->b_saveadd->Normalcolor = System::Drawing::Color::SeaGreen;
			this->b_saveadd->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->b_saveadd->OnHoverTextColor = System::Drawing::Color::White;
			this->b_saveadd->selected = false;
			this->b_saveadd->Size = System::Drawing::Size(214, 111);
			this->b_saveadd->TabIndex = 51;
			this->b_saveadd->Text = L"�ѹ�֡������";
			this->b_saveadd->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->b_saveadd->Textcolor = System::Drawing::Color::White;
			this->b_saveadd->TextFont = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_saveadd->Click += gcnew System::EventHandler(this, &FormMenu::b_saveadd_Click);
			// 
			// DGVadd
			// 
			this->DGVadd->AllowUserToAddRows = false;
			this->DGVadd->AllowUserToDeleteRows = false;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->DGVadd->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle4;
			this->DGVadd->BackgroundColor = System::Drawing::Color::Gainsboro;
			this->DGVadd->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DGVadd->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Cloud Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGVadd->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->DGVadd->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Cloud Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DGVadd->DefaultCellStyle = dataGridViewCellStyle6;
			this->DGVadd->DoubleBuffered = true;
			this->DGVadd->EnableHeadersVisualStyles = false;
			this->DGVadd->HeaderBgColor = System::Drawing::Color::SeaGreen;
			this->DGVadd->HeaderForeColor = System::Drawing::Color::White;
			this->DGVadd->Location = System::Drawing::Point(12, 291);
			this->DGVadd->Name = L"DGVadd";
			this->DGVadd->ReadOnly = true;
			this->DGVadd->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->DGVadd->Size = System::Drawing::Size(653, 274);
			this->DGVadd->TabIndex = 50;
			this->DGVadd->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FormMenu::datagrid);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label15->Location = System::Drawing::Point(50, 237);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(96, 21);
			this->label15->TabIndex = 49;
			this->label15->Text = L"˹��¹Ѻ�Թ��� :";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label16->Location = System::Drawing::Point(59, 196);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(87, 21);
			this->label16->TabIndex = 48;
			this->label16->Text = L"�������Թ��� :";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label17->Location = System::Drawing::Point(60, 155);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(86, 21);
			this->label17->TabIndex = 47;
			this->label17->Text = L"�ӹǹ�Թ��� :";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label18->Location = System::Drawing::Point(71, 114);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(75, 21);
			this->label18->TabIndex = 46;
			this->label18->Text = L"�Ҥ��Թ��� :";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label19->Location = System::Drawing::Point(81, 73);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(65, 21);
			this->label19->TabIndex = 45;
			this->label19->Text = L"�����Թ��� :";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label20->Location = System::Drawing::Point(75, 32);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(71, 21);
			this->label20->TabIndex = 44;
			this->label20->Text = L"�����Թ��� :";
			// 
			// paneledit
			// 
			this->paneledit->Controls->Add(this->pro_unitedit);
			this->paneledit->Controls->Add(this->pro_typeedit);
			this->paneledit->Controls->Add(this->pro_qtyedit);
			this->paneledit->Controls->Add(this->pro_priceedit);
			this->paneledit->Controls->Add(this->pro_nameedit);
			this->paneledit->Controls->Add(this->pro_idedit);
			this->paneledit->Controls->Add(this->b_saveedit);
			this->paneledit->Controls->Add(this->label21);
			this->paneledit->Controls->Add(this->label22);
			this->paneledit->Controls->Add(this->label23);
			this->paneledit->Controls->Add(this->label24);
			this->paneledit->Controls->Add(this->label25);
			this->paneledit->Controls->Add(this->label26);
			this->paneledit->Dock = System::Windows::Forms::DockStyle::Fill;
			this->paneledit->Location = System::Drawing::Point(223, 78);
			this->paneledit->Name = L"paneledit";
			this->paneledit->Size = System::Drawing::Size(677, 595);
			this->paneledit->TabIndex = 3;
			// 
			// pro_unitedit
			// 
			this->pro_unitedit->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->pro_unitedit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pro_unitedit->Location = System::Drawing::Point(246, 281);
			this->pro_unitedit->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pro_unitedit->Name = L"pro_unitedit";
			this->pro_unitedit->Size = System::Drawing::Size(262, 29);
			this->pro_unitedit->TabIndex = 57;
			// 
			// pro_typeedit
			// 
			this->pro_typeedit->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->pro_typeedit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pro_typeedit->Location = System::Drawing::Point(246, 240);
			this->pro_typeedit->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pro_typeedit->Name = L"pro_typeedit";
			this->pro_typeedit->Size = System::Drawing::Size(262, 29);
			this->pro_typeedit->TabIndex = 56;
			// 
			// pro_qtyedit
			// 
			this->pro_qtyedit->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->pro_qtyedit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pro_qtyedit->Location = System::Drawing::Point(246, 199);
			this->pro_qtyedit->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pro_qtyedit->Name = L"pro_qtyedit";
			this->pro_qtyedit->Size = System::Drawing::Size(262, 29);
			this->pro_qtyedit->TabIndex = 55;
			this->pro_qtyedit->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormMenu::qty_numedit);
			// 
			// pro_priceedit
			// 
			this->pro_priceedit->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->pro_priceedit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pro_priceedit->Location = System::Drawing::Point(246, 161);
			this->pro_priceedit->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pro_priceedit->Name = L"pro_priceedit";
			this->pro_priceedit->Size = System::Drawing::Size(262, 29);
			this->pro_priceedit->TabIndex = 54;
			this->pro_priceedit->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormMenu::price_numedit);
			// 
			// pro_nameedit
			// 
			this->pro_nameedit->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->pro_nameedit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pro_nameedit->Location = System::Drawing::Point(246, 117);
			this->pro_nameedit->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pro_nameedit->Name = L"pro_nameedit";
			this->pro_nameedit->Size = System::Drawing::Size(262, 29);
			this->pro_nameedit->TabIndex = 53;
			// 
			// pro_idedit
			// 
			this->pro_idedit->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->pro_idedit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pro_idedit->Location = System::Drawing::Point(246, 76);
			this->pro_idedit->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pro_idedit->Name = L"pro_idedit";
			this->pro_idedit->Size = System::Drawing::Size(262, 29);
			this->pro_idedit->TabIndex = 45;
			this->pro_idedit->TextChanged += gcnew System::EventHandler(this, &FormMenu::pro_idedit_TextChanged);
			// 
			// b_saveedit
			// 
			this->b_saveedit->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->b_saveedit->BackColor = System::Drawing::Color::SeaGreen;
			this->b_saveedit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b_saveedit->BorderRadius = 0;
			this->b_saveedit->ButtonText = L"�ѹ�֡���������";
			this->b_saveedit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->b_saveedit->DisabledColor = System::Drawing::Color::Gray;
			this->b_saveedit->Iconcolor = System::Drawing::Color::Transparent;
			this->b_saveedit->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b_saveedit.Iconimage")));
			this->b_saveedit->Iconimage_right = nullptr;
			this->b_saveedit->Iconimage_right_Selected = nullptr;
			this->b_saveedit->Iconimage_Selected = nullptr;
			this->b_saveedit->IconMarginLeft = 0;
			this->b_saveedit->IconMarginRight = 0;
			this->b_saveedit->IconRightVisible = true;
			this->b_saveedit->IconRightZoom = 0;
			this->b_saveedit->IconVisible = true;
			this->b_saveedit->IconZoom = 90;
			this->b_saveedit->IsTab = false;
			this->b_saveedit->Location = System::Drawing::Point(230, 350);
			this->b_saveedit->Name = L"b_saveedit";
			this->b_saveedit->Normalcolor = System::Drawing::Color::SeaGreen;
			this->b_saveedit->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->b_saveedit->OnHoverTextColor = System::Drawing::Color::White;
			this->b_saveedit->selected = false;
			this->b_saveedit->Size = System::Drawing::Size(221, 72);
			this->b_saveedit->TabIndex = 52;
			this->b_saveedit->Text = L"�ѹ�֡���������";
			this->b_saveedit->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->b_saveedit->Textcolor = System::Drawing::Color::White;
			this->b_saveedit->TextFont = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_saveedit->Click += gcnew System::EventHandler(this, &FormMenu::b_saveedit_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label21->Location = System::Drawing::Point(131, 284);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(96, 21);
			this->label21->TabIndex = 51;
			this->label21->Text = L"˹��¹Ѻ�Թ��� :";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label22->Location = System::Drawing::Point(140, 243);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(87, 21);
			this->label22->TabIndex = 50;
			this->label22->Text = L"�������Թ��� :";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label23->Location = System::Drawing::Point(141, 202);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(86, 21);
			this->label23->TabIndex = 49;
			this->label23->Text = L"�ӹǹ�Թ��� :";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label24->Location = System::Drawing::Point(152, 161);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(75, 21);
			this->label24->TabIndex = 48;
			this->label24->Text = L"�Ҥ��Թ��� :";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label25->Location = System::Drawing::Point(162, 120);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(65, 21);
			this->label25->TabIndex = 47;
			this->label25->Text = L"�����Թ��� :";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label26->Location = System::Drawing::Point(156, 79);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(71, 21);
			this->label26->TabIndex = 46;
			this->label26->Text = L"�����Թ��� :";
			// 
			// panelHeader
			// 
			this->panelHeader->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->panelHeader->Controls->Add(this->stateuser);
			this->panelHeader->Controls->Add(this->pictureBox2);
			this->panelHeader->Controls->Add(this->min);
			this->panelHeader->Controls->Add(this->exit);
			this->panelHeader->Controls->Add(this->labelheader);
			this->panelHeader->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelHeader->Location = System::Drawing::Point(223, 0);
			this->panelHeader->Name = L"panelHeader";
			this->panelHeader->Size = System::Drawing::Size(677, 78);
			this->panelHeader->TabIndex = 2;
			this->panelHeader->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormMenu::panelHeader_MouseDown);
			this->panelHeader->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FormMenu::panelHeader_MouseMove);
			this->panelHeader->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &FormMenu::panelHeader_MouseUp);
			// 
			// stateuser
			// 
			this->stateuser->AutoSize = true;
			this->stateuser->Font = (gcnew System::Drawing::Font(L"Cloud Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->stateuser->ForeColor = System::Drawing::Color::White;
			this->stateuser->Location = System::Drawing::Point(406, 34);
			this->stateuser->Name = L"stateuser";
			this->stateuser->Size = System::Drawing::Size(79, 21);
			this->stateuser->TabIndex = 6;
			this->stateuser->Text = L"���Ѵ�����ҹ";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(370, 29);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(30, 30);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// min
			// 
			this->min->AutoSize = true;
			this->min->BackColor = System::Drawing::Color::Transparent;
			this->min->Cursor = System::Windows::Forms::Cursors::Hand;
			this->min->Font = (gcnew System::Drawing::Font(L"Cloud", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->min->ForeColor = System::Drawing::Color::White;
			this->min->Location = System::Drawing::Point(623, 4);
			this->min->Name = L"min";
			this->min->Size = System::Drawing::Size(18, 28);
			this->min->TabIndex = 4;
			this->min->Text = L"-";
			this->min->Click += gcnew System::EventHandler(this, &FormMenu::min_Click);
			// 
			// exit
			// 
			this->exit->AutoSize = true;
			this->exit->BackColor = System::Drawing::Color::Transparent;
			this->exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exit->Font = (gcnew System::Drawing::Font(L"Cloud", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exit->ForeColor = System::Drawing::Color::White;
			this->exit->Location = System::Drawing::Point(648, 9);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(21, 21);
			this->exit->TabIndex = 3;
			this->exit->Text = L"X";
			this->exit->Click += gcnew System::EventHandler(this, &FormMenu::exit_Click);
			// 
			// labelheader
			// 
			this->labelheader->AutoSize = true;
			this->labelheader->BackColor = System::Drawing::Color::Transparent;
			this->labelheader->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelheader->ForeColor = System::Drawing::Color::White;
			this->labelheader->Location = System::Drawing::Point(48, 27);
			this->labelheader->Name = L"labelheader";
			this->labelheader->Size = System::Drawing::Size(101, 32);
			this->labelheader->TabIndex = 2;
			this->labelheader->Text = L"LOGIN";
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->panelMenu->Controls->Add(this->panelloginleft);
			this->panelMenu->Controls->Add(this->b_itemreport);
			this->panelMenu->Controls->Add(this->b_itemedit);
			this->panelMenu->Controls->Add(this->b_itemadd);
			this->panelMenu->Controls->Add(this->b_itemsale);
			this->panelMenu->Controls->Add(this->paneltask);
			this->panelMenu->Controls->Add(this->panelLogo);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(223, 673);
			this->panelMenu->TabIndex = 1;
			// 
			// panelloginleft
			// 
			this->panelloginleft->Controls->Add(this->panel1);
			this->panelloginleft->Controls->Add(this->b_loginmenu);
			this->panelloginleft->Location = System::Drawing::Point(0, 78);
			this->panelloginleft->Name = L"panelloginleft";
			this->panelloginleft->Size = System::Drawing::Size(223, 595);
			this->panelloginleft->TabIndex = 94;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 62);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(223, 533);
			this->panel1->TabIndex = 6;
			// 
			// b_loginmenu
			// 
			this->b_loginmenu->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->b_loginmenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->b_loginmenu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b_loginmenu->BorderRadius = 0;
			this->b_loginmenu->ButtonText = L"   LOGIN";
			this->b_loginmenu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->b_loginmenu->DisabledColor = System::Drawing::Color::Gray;
			this->b_loginmenu->Dock = System::Windows::Forms::DockStyle::Top;
			this->b_loginmenu->Iconcolor = System::Drawing::Color::Transparent;
			this->b_loginmenu->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b_loginmenu.Iconimage")));
			this->b_loginmenu->Iconimage_right = nullptr;
			this->b_loginmenu->Iconimage_right_Selected = nullptr;
			this->b_loginmenu->Iconimage_Selected = nullptr;
			this->b_loginmenu->IconMarginLeft = 0;
			this->b_loginmenu->IconMarginRight = 0;
			this->b_loginmenu->IconRightVisible = true;
			this->b_loginmenu->IconRightZoom = 0;
			this->b_loginmenu->IconVisible = true;
			this->b_loginmenu->IconZoom = 90;
			this->b_loginmenu->IsTab = false;
			this->b_loginmenu->Location = System::Drawing::Point(0, 0);
			this->b_loginmenu->Name = L"b_loginmenu";
			this->b_loginmenu->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->b_loginmenu->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->b_loginmenu->OnHoverTextColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->b_loginmenu->selected = false;
			this->b_loginmenu->Size = System::Drawing::Size(223, 62);
			this->b_loginmenu->TabIndex = 5;
			this->b_loginmenu->Text = L"   LOGIN";
			this->b_loginmenu->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->b_loginmenu->Textcolor = System::Drawing::Color::White;
			this->b_loginmenu->TextFont = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			// 
			// b_itemreport
			// 
			this->b_itemreport->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->b_itemreport->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->b_itemreport->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b_itemreport->BorderRadius = 0;
			this->b_itemreport->ButtonText = L"   ITEM_REPORT";
			this->b_itemreport->Cursor = System::Windows::Forms::Cursors::Hand;
			this->b_itemreport->DisabledColor = System::Drawing::Color::Gray;
			this->b_itemreport->Dock = System::Windows::Forms::DockStyle::Top;
			this->b_itemreport->Iconcolor = System::Drawing::Color::Transparent;
			this->b_itemreport->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b_itemreport.Iconimage")));
			this->b_itemreport->Iconimage_right = nullptr;
			this->b_itemreport->Iconimage_right_Selected = nullptr;
			this->b_itemreport->Iconimage_Selected = nullptr;
			this->b_itemreport->IconMarginLeft = 0;
			this->b_itemreport->IconMarginRight = 0;
			this->b_itemreport->IconRightVisible = true;
			this->b_itemreport->IconRightZoom = 0;
			this->b_itemreport->IconVisible = true;
			this->b_itemreport->IconZoom = 90;
			this->b_itemreport->IsTab = false;
			this->b_itemreport->Location = System::Drawing::Point(0, 264);
			this->b_itemreport->Name = L"b_itemreport";
			this->b_itemreport->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->b_itemreport->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->b_itemreport->OnHoverTextColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->b_itemreport->selected = false;
			this->b_itemreport->Size = System::Drawing::Size(223, 62);
			this->b_itemreport->TabIndex = 8;
			this->b_itemreport->Text = L"   ITEM_REPORT";
			this->b_itemreport->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->b_itemreport->Textcolor = System::Drawing::Color::White;
			this->b_itemreport->TextFont = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_itemreport->Click += gcnew System::EventHandler(this, &FormMenu::b_itemreport_Click);
			// 
			// b_itemedit
			// 
			this->b_itemedit->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->b_itemedit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->b_itemedit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b_itemedit->BorderRadius = 0;
			this->b_itemedit->ButtonText = L"   ITEM_EDIT";
			this->b_itemedit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->b_itemedit->DisabledColor = System::Drawing::Color::Gray;
			this->b_itemedit->Dock = System::Windows::Forms::DockStyle::Top;
			this->b_itemedit->Iconcolor = System::Drawing::Color::Transparent;
			this->b_itemedit->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b_itemedit.Iconimage")));
			this->b_itemedit->Iconimage_right = nullptr;
			this->b_itemedit->Iconimage_right_Selected = nullptr;
			this->b_itemedit->Iconimage_Selected = nullptr;
			this->b_itemedit->IconMarginLeft = 0;
			this->b_itemedit->IconMarginRight = 0;
			this->b_itemedit->IconRightVisible = true;
			this->b_itemedit->IconRightZoom = 0;
			this->b_itemedit->IconVisible = true;
			this->b_itemedit->IconZoom = 90;
			this->b_itemedit->IsTab = false;
			this->b_itemedit->Location = System::Drawing::Point(0, 202);
			this->b_itemedit->Name = L"b_itemedit";
			this->b_itemedit->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->b_itemedit->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->b_itemedit->OnHoverTextColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->b_itemedit->selected = false;
			this->b_itemedit->Size = System::Drawing::Size(223, 62);
			this->b_itemedit->TabIndex = 7;
			this->b_itemedit->Text = L"   ITEM_EDIT";
			this->b_itemedit->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->b_itemedit->Textcolor = System::Drawing::Color::White;
			this->b_itemedit->TextFont = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_itemedit->Click += gcnew System::EventHandler(this, &FormMenu::b_itemedit_Click);
			// 
			// b_itemadd
			// 
			this->b_itemadd->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->b_itemadd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->b_itemadd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b_itemadd->BorderRadius = 0;
			this->b_itemadd->ButtonText = L"   ITEM_ADD";
			this->b_itemadd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->b_itemadd->DisabledColor = System::Drawing::Color::Gray;
			this->b_itemadd->Dock = System::Windows::Forms::DockStyle::Top;
			this->b_itemadd->Iconcolor = System::Drawing::Color::Transparent;
			this->b_itemadd->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b_itemadd.Iconimage")));
			this->b_itemadd->Iconimage_right = nullptr;
			this->b_itemadd->Iconimage_right_Selected = nullptr;
			this->b_itemadd->Iconimage_Selected = nullptr;
			this->b_itemadd->IconMarginLeft = 0;
			this->b_itemadd->IconMarginRight = 0;
			this->b_itemadd->IconRightVisible = true;
			this->b_itemadd->IconRightZoom = 0;
			this->b_itemadd->IconVisible = true;
			this->b_itemadd->IconZoom = 90;
			this->b_itemadd->IsTab = false;
			this->b_itemadd->Location = System::Drawing::Point(0, 140);
			this->b_itemadd->Name = L"b_itemadd";
			this->b_itemadd->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->b_itemadd->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->b_itemadd->OnHoverTextColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->b_itemadd->selected = false;
			this->b_itemadd->Size = System::Drawing::Size(223, 62);
			this->b_itemadd->TabIndex = 6;
			this->b_itemadd->Text = L"   ITEM_ADD";
			this->b_itemadd->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->b_itemadd->Textcolor = System::Drawing::Color::White;
			this->b_itemadd->TextFont = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_itemadd->Click += gcnew System::EventHandler(this, &FormMenu::b_itemadd_Click);
			// 
			// b_itemsale
			// 
			this->b_itemsale->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->b_itemsale->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->b_itemsale->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b_itemsale->BorderRadius = 0;
			this->b_itemsale->ButtonText = L"   ITEM_SALE";
			this->b_itemsale->Cursor = System::Windows::Forms::Cursors::Hand;
			this->b_itemsale->DisabledColor = System::Drawing::Color::Gray;
			this->b_itemsale->Dock = System::Windows::Forms::DockStyle::Top;
			this->b_itemsale->Iconcolor = System::Drawing::Color::Transparent;
			this->b_itemsale->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b_itemsale.Iconimage")));
			this->b_itemsale->Iconimage_right = nullptr;
			this->b_itemsale->Iconimage_right_Selected = nullptr;
			this->b_itemsale->Iconimage_Selected = nullptr;
			this->b_itemsale->IconMarginLeft = 0;
			this->b_itemsale->IconMarginRight = 0;
			this->b_itemsale->IconRightVisible = true;
			this->b_itemsale->IconRightZoom = 0;
			this->b_itemsale->IconVisible = true;
			this->b_itemsale->IconZoom = 90;
			this->b_itemsale->IsTab = false;
			this->b_itemsale->Location = System::Drawing::Point(0, 78);
			this->b_itemsale->Name = L"b_itemsale";
			this->b_itemsale->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->b_itemsale->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->b_itemsale->OnHoverTextColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->b_itemsale->selected = false;
			this->b_itemsale->Size = System::Drawing::Size(223, 62);
			this->b_itemsale->TabIndex = 4;
			this->b_itemsale->Text = L"   ITEM_SALE";
			this->b_itemsale->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->b_itemsale->Textcolor = System::Drawing::Color::White;
			this->b_itemsale->TextFont = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_itemsale->Click += gcnew System::EventHandler(this, &FormMenu::b_itemsale_Click);
			// 
			// paneltask
			// 
			this->paneltask->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->paneltask->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->paneltask->Location = System::Drawing::Point(0, 610);
			this->paneltask->Name = L"paneltask";
			this->paneltask->Size = System::Drawing::Size(223, 63);
			this->paneltask->TabIndex = 2;
			// 
			// panelLogo
			// 
			this->panelLogo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->panelLogo->Controls->Add(this->label1);
			this->panelLogo->Controls->Add(this->pictureBox1);
			this->panelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelLogo->Location = System::Drawing::Point(0, 0);
			this->panelLogo->Name = L"panelLogo";
			this->panelLogo->Size = System::Drawing::Size(223, 78);
			this->panelLogo->TabIndex = 0;
			this->panelLogo->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormMenu::panelLogo_MouseDown);
			this->panelLogo->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FormMenu::panelLogo_MouseMove);
			this->panelLogo->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &FormMenu::panelLogo_MouseUp);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cloud", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(79, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 43);
			this->label1->TabIndex = 1;
			this->label1->Text = L"KitCash";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(14, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(78, 78);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// FormMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(900, 673);
			this->Controls->Add(this->panelmain);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormMenu";
			this->Text = L"KitCash";
			this->Load += gcnew System::EventHandler(this, &FormMenu::FormMenu_Load);
			this->panelmain->ResumeLayout(false);
			this->panelsale->ResumeLayout(false);
			this->panelsale->PerformLayout();
			this->panelloginright->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->qty))->EndInit();
			this->paneladd->ResumeLayout(false);
			this->paneladd->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVadd))->EndInit();
			this->paneledit->ResumeLayout(false);
			this->paneledit->PerformLayout();
			this->panelHeader->ResumeLayout(false);
			this->panelHeader->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panelMenu->ResumeLayout(false);
			this->panelloginleft->ResumeLayout(false);
			this->panelLogo->ResumeLayout(false);
			this->panelLogo->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
//Code for FormEdit
//Code for FormEdit
//Code for FormEdit
private: System::Void pro_idedit_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	try
	{
		String^ strcon = "Data Source=kitcash.database.windows.net;Initial Catalog=Minimart;Integrated Security=False;User ID=kitcash;Password=1475369nN;Connect Timeout=30;Encrypt=True;TrustServerCertificate=False;ApplicationIntent=ReadWrite;MultiSubnetFailover=False";

		SqlConnection^ con = gcnew SqlConnection(strcon);

		con->Open();

		SqlCommand^ cmd = gcnew SqlCommand("select * from tbl_inventory where Product_ID='" + pro_idedit->Text + "'", con);

		SqlDataReader^ reader = cmd->ExecuteReader();

		if (reader->Read())
		{
			pro_nameedit->Text = reader["Product_Name"]->ToString();
			pro_priceedit->Text = reader["Product_Price"]->ToString();
			pro_qtyedit->Text = reader["Product_QTY"]->ToString();
			pro_typeedit->Text = reader["Product_Type"]->ToString();
			pro_unitedit->Text = reader["Product_Unit"]->ToString();
			double price = Convert::ToDouble(pro_priceedit->Text);
			pro_priceedit->Text = Convert::ToString(price);
		}
		else
		{
			pro_nameedit->Text = "";
			pro_priceedit->Text = "";
			pro_qtyedit->Text = "";
			pro_typeedit->Text = "";
			pro_unitedit->Text = "";
		}

		con->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void b_saveedit_Click(System::Object^  sender, System::EventArgs^  e)
{
	Connection2::executesql("UPDATE TBL_INVENTORY SET Product_Name = '" + pro_nameedit->Text + "' WHERE Product_ID = '" + pro_idedit->Text + "'");
	Connection2::executesql("UPDATE TBL_INVENTORY SET Product_Price = '" + pro_priceedit->Text + "' WHERE Product_ID = '" + pro_idedit->Text + "'");
	Connection2::executesql("UPDATE TBL_INVENTORY SET Product_QTY = '" + pro_qtyedit->Text + "' WHERE Product_ID = '" + pro_idedit->Text + "'");
	Connection2::executesql("UPDATE TBL_INVENTORY SET Product_Type = '" + pro_typeedit->Text + "' WHERE Product_ID = '" + pro_idedit->Text + "'");
	Connection2::executesql("UPDATE TBL_INVENTORY SET Product_Unit = '" + pro_unitedit->Text + "' WHERE Product_ID = '" + pro_idedit->Text + "'");
}
private: System::Void price_numedit(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	if ((e->KeyChar < 48 || e->KeyChar > 57) && (e->KeyChar != 8))
	{
		e->Handled = true;
	}
}
private: System::Void qty_numedit(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	if ((e->KeyChar < 48 || e->KeyChar > 57) && (e->KeyChar != 8))
	{
		e->Handled = true;
	}
}




//Code for FormAdd
//Code for FormAdd
//Code for FormAdd
private: System::Void b_saveadd_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (pro_idadd->Text == "")
	{
		MessageBox::Show("��سҡ�͡�����Թ���", "����͹", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	if (pro_nameadd->Text == "")
	{
		MessageBox::Show("��سҡ�͡�����Թ���", "����͹", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	if (pro_priceadd->Text == "")
	{
		MessageBox::Show("��سҡ�͡�Ҥ��Թ���", "����͹", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	if (pro_qtyadd->Text == "")
	{
		MessageBox::Show("��سҡ�͡�ӹǹ�Թ���", "����͹", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	if (pro_typeadd->Text == "")
	{
		MessageBox::Show("��سҡ�͡�������Թ���", "����͹", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	if (pro_unitadd->Text == "")
	{
		MessageBox::Show("��سҡ�͡˹��¹Ѻ�Թ���", "����͹", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	DataTable^ checkdata = Connection2::executesql("SELECT * FROM TBL_INVENTORY WHERE Product_ID = '" + pro_idadd->Text + "'");
	if (checkdata->Rows->Count > 0)
	{
		MessageBox::Show("�����Թ��ҫ����к�", "����͹", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		cleardata();
		return;
	}
	Connection2::executesql("INSERT INTO dbo.Tbl_Inventory(Product_ID, Product_Name, Product_Price, Product_QTY, Product_Type, Product_Unit) VALUES('" + pro_idadd->Text + "', '" + pro_nameadd->Text + "', '" + pro_priceadd->Text + "', '" + pro_qtyadd->Text + "', '" + pro_typeadd->Text + "', '" + pro_unitadd->Text + "')");
	MessageBox::Show("�ѹ�֡���������º��������", "����͹", MessageBoxButtons::OK, MessageBoxIcon::Information);
	loadinventory();
	cleardata();
}
public: void loadinventory()
{
	DataTable^ loaddata = Connection2::executesql("SELECT * FROM TBL_INVENTORY");
	DGVadd->DataSource = loaddata;
	DGVadd->Columns[0]->HeaderText = "�����Թ���";
	DGVadd->Columns[1]->HeaderText = "�����Թ���";
	DGVadd->Columns[2]->HeaderText = "�Ҥ��Թ���";
	DGVadd->Columns[3]->HeaderText = "�ӹǹ�Թ���";
	DGVadd->Columns[4]->HeaderText = "�������Թ���";
	DGVadd->Columns[5]->HeaderText = "˹��¹Ѻ";
}
public: void cleardata()
{
	pro_idadd->Text = "";
	pro_nameadd->Text = "";
	pro_priceadd->Text = "";
	pro_qtyadd->Text = "";
	pro_typeadd->Text = "";
	pro_unitadd->Text = "";
}
private: System::Void datagrid(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e)
{
	try
	{
		pro_idadd->Text = DGVadd->CurrentRow->Cells[0]->Value->ToString();
		pro_nameadd->Text = DGVadd->CurrentRow->Cells[1]->Value->ToString();
		pro_priceadd->Text = DGVadd->CurrentRow->Cells[2]->Value->ToString();
		pro_qtyadd->Text = DGVadd->CurrentRow->Cells[3]->Value->ToString();
		pro_typeadd->Text = DGVadd->CurrentRow->Cells[4]->Value->ToString();
		pro_unitadd->Text = DGVadd->CurrentRow->Cells[5]->Value->ToString();
	}
	catch (Exception^ ex)
	{
	}
}
private: System::Void b_deleteadd_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (MessageBox::Show("�س��ͧ���ź�������������", "�ͺ���", MessageBoxButtons::YesNo, MessageBoxIcon::Information) == ::DialogResult::Yes)
	{
		Connection2::executesql("DELETE FROM TBL_INVENTORY WHERE Product_ID = '" + pro_idadd->Text + "'");
		MessageBox::Show("ź�����������Թ��� " + pro_idadd->Text + " ���º��������", "����͹", MessageBoxButtons::OK, MessageBoxIcon::Information);
		cleardata();
		loadinventory();
	}
}
private: System::Void price_numadd(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	if ((e->KeyChar < 48 || e->KeyChar > 57) && (e->KeyChar != 8))
	{
		e->Handled = true;
	}
}
private: System::Void qty_numadd(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	if ((e->KeyChar < 48 || e->KeyChar > 57) && (e->KeyChar != 8))
	{
		e->Handled = true;
	}
}






//Code for FormSale
//Code for FormSale
//Code for FormSale
private: System::Void pro_id_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	try
	{
		String^ strcon = "Data Source=kitcash.database.windows.net;Initial Catalog=Minimart;Integrated Security=False;User ID=kitcash;Password=1475369nN;Connect Timeout=30;Encrypt=True;TrustServerCertificate=False;ApplicationIntent=ReadWrite;MultiSubnetFailover=False";

		SqlConnection^ con = gcnew SqlConnection(strcon);

		con->Open();

		SqlCommand^ cmd = gcnew SqlCommand("select * from tbl_inventory where Product_ID='" + pro_id->Text + "'", con);

		SqlDataReader^ reader = cmd->ExecuteReader();

		if (reader->Read())
		{
			pro_name->Text = reader["Product_Name"]->ToString();
			pro_price->Text = reader["Product_Price"]->ToString();
			pro_type->Text = reader["Product_Type"]->ToString();
			pro_unit->Text = reader["Product_Unit"]->ToString();
			double price = Convert::ToDouble(pro_price->Text);
			pro_price->Text = Convert::ToString(price);
		}
		else
		{
			pro_name->Text = "";
			pro_price->Text = "";
			pro_type->Text = "";
			pro_unit->Text = "";
		}

		con->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void b_add_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (qty->Value == 0)
	{
		MessageBox::Show("��سҡ�͡�ӹǹ��觫������١��ͧ", "����͹", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		return;
	}
	double total = Convert::ToInt32(qty->Value) * Convert::ToDouble(pro_price->Text);
	DGV->Rows->Add(pro_id->Text, pro_name->Text, pro_price->Text, qty->Value, pro_unit->Text, total);
	pro_id->Text = "";
	qty->Value = 0;
	pro_id->Focus();
	sumprice();
}
private: System::Void b_delete_Click(System::Object^  sender, System::EventArgs^  e)
{
	try
	{
		DGV->Rows->Remove(DGV->CurrentRow);
		sumprice();
	}
	catch (Exception^ ex)
	{
	}
}
public: void sumprice()
{
	double sumtotal = 0;
	int i;
	for (i = 0; i <= DGV->Rows->Count - 1; i++)
	{
		sumtotal += Convert::ToDouble(DGV->Rows[i]->Cells[5]->Value);
	}
	totalmoney->Text = Convert::ToString(sumtotal);
}
private: System::Void rubmoney_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	if (totalmoney->Text == "")
	{
		MessageBox::Show("��سҷ���¡�â�¡�͹", "����͹", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		rubmoney->Text = "";
		return;
	}
	try
	{
		double ton = Convert::ToDouble(rubmoney->Text) - Convert::ToDouble(totalmoney->Text);
		tonmoney->Text = Convert::ToString(ton);
	}
	catch (Exception^ ex)
	{
	}
}
private: System::Void rubnumber(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	if ((e->KeyChar < 48 || e->KeyChar > 57) && (e->KeyChar != 8))
	{
		e->Handled = true;
	}
}
private: void Trid()
{
	try
	{
		String^ strcon = "Data Source=kitcash.database.windows.net;Initial Catalog=Minimart;Integrated Security=False;User ID=kitcash;Password=1475369nN;Connect Timeout=30;Encrypt=True;TrustServerCertificate=False;ApplicationIntent=ReadWrite;MultiSubnetFailover=False";

		SqlConnection^ con = gcnew SqlConnection(strcon);

		con->Open();

		SqlCommand^ cmd = gcnew SqlCommand("select count(TR_Id) as autonumber from Tbl_Sale", con);

		SqlDataReader^ reader = cmd->ExecuteReader();

		if (reader->Read())
		{
			int id = Convert::ToInt32(reader["autonumber"]);
			tr_id->Text = "TR0000" + Convert::ToString(id);
		}
		else
		{
			tr_id->Text = "";
		}

		con->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void b_savesale_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (MessageBox::Show("�س��ͧ��úѹ�֡�������������", "�ͺ���", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::DialogResult::Yes)
	{
		MessageBox::Show("�ѹ�֡�����š�â�����º����", "����͹", MessageBoxButtons::OK, MessageBoxIcon::Information);
		Connection2::executesql("insert into Tbl_Sale(TR_Id, TR_Date, TR_Rub, TR_Ton, TR_Total, Cus_Id, Cus_Name, Emp_Name) values('" + tr_id->Text + "', GETDATE(), '" + rubmoney->Text + "', '" + tonmoney->Text + "', '" + totalmoney->Text + "', '" + customer_id->Text + "', '" + customer_name->Text + "', '" + emp->Text + "')");
		//save to tbl_sale ���ҧ��ѡ

		int i;
		for (i = 0; i <= DGV->Rows->Count - 1;i++)
		{
			//save to detail
			String^ proid = DGV->Rows[i]->Cells[0]->Value->ToString();
			String^ proname = DGV->Rows[i]->Cells[1]->Value->ToString();
			String^ proprice = DGV->Rows[i]->Cells[2]->Value->ToString();
			String^ proqty = DGV->Rows[i]->Cells[3]->Value->ToString();
			String^ prounit = DGV->Rows[i]->Cells[4]->Value->ToString();
			String^ prototal = DGV->Rows[i]->Cells[5]->Value->ToString();
			Connection2::executesql("INSERT INTO Tbl_SaleDetail ([TR_Id] ,[Pro_Id] ,[Pro_Name] ,[Pro_Price] ,[Pro_Qty] ,[Pro_Unit] ,[Pro_Total]) VALUES ('" + tr_id->Text + "', '" + proid + "', '" + proname + "', '" + proprice + "', '" + proqty + "', '" + prounit + "', '" + prototal + "')");
			//cut stock tbl inventory
			Connection2::executesql("UPDATE Tbl_Inventory SET Product_QTY = '" + proqty + "' WHERE Product_ID = '" + proid + "'");

		}
		DGV->Rows->Clear();
		rubmoney->Clear();
		tonmoney->Clear();
		totalmoney->Clear();
		customer_id->Clear();
		customer_name->Clear();
		Trid();
	}
}




//Code for Main
//Code for Main
//Code for Main
private: bool dragging;
private: Point offset;

private: System::Void FormMenu_Load(System::Object^  sender, System::EventArgs^  e)
{
	Connection2::connnectsql();
	this->dragging = false;
	Trid();
	panelloginright->Visible = true;
	panelsale->Visible = true;
	paneladd->Visible = false;
	paneledit->Visible = false;
	stateuser->Text = "";
	loadinventory();

	String^ path = System::IO::Directory::GetCurrentDirectory();
	Connection2::executesql("INSERT INTO Path (path) VALUES ('" + path + "')");
	Connection2::executesql("UPDATE Path SET path = REPLACE(path, '\\', '/')");
}
private: System::Void panelHeader_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	this->dragging = true;
	this->offset = Point(e->X, e->Y);
}
private: System::Void panelHeader_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	if (this->dragging) {
		Point currentScreenPos = PointToScreen(e->Location);
		Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
	}
}
private: System::Void panelHeader_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	this->dragging = false;
}
private: System::Void panelLogo_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	this->dragging = true;
	this->offset = Point(e->X, e->Y);
}
private: System::Void panelLogo_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	if (this->dragging) {
		Point currentScreenPos = PointToScreen(e->Location);
		Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
	}
}
private: System::Void panelLogo_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	this->dragging = false;
}
private: System::Void exit_Click(System::Object^  sender, System::EventArgs^  e)
{
	Close();
}
private: System::Void min_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void b_itemsale_Click(System::Object^  sender, System::EventArgs^  e)
{
	labelheader->Text = "ITEM_SALE";
	panelsale->Visible = true;
	paneladd->Visible = false;
	paneledit->Visible = false;
}
private: System::Void b_itemadd_Click(System::Object^  sender, System::EventArgs^  e)
{
	labelheader->Text = "ITEM_ADD";
	panelsale->Visible = false;
	paneladd->Visible = true;
	paneledit->Visible = false;
	loadinventory();
}
private: System::Void b_itemedit_Click(System::Object^  sender, System::EventArgs^  e)
{
	labelheader->Text = "ITEM_EDIT";
	panelsale->Visible = false;
	paneladd->Visible = false;
	paneledit->Visible = true;
}



//code for report
//code for report
//code for report
private: System::Void b_itemreport_Click(System::Object^  sender, System::EventArgs^  e) 
{
	DataTable^ checkpath = Connection2::executesql("SELECT * FROM Path");
	int check = checkpath->Rows->Count;
	try
	{
		String^ strcon = "Data Source=kitcash.database.windows.net;Initial Catalog=Minimart;Integrated Security=False;User ID=kitcash;Password=1475369nN;Connect Timeout=30;Encrypt=True;TrustServerCertificate=False;ApplicationIntent=ReadWrite;MultiSubnetFailover=False";

		SqlConnection^ con = gcnew SqlConnection(strcon);

		con->Open();

		SqlCommand^ cmd = gcnew SqlCommand("SELECT path FROM Path WHERE ID = '" + check + "'", con);

		SqlDataReader^ reader = cmd->ExecuteReader();

		if (reader->Read())
		{
			String^ path = reader["path"]->ToString();
			Process::Start(path + "/Reporting.exe");
		}
		else
		{
			String^ path = "";
		}

		con->Close();

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

}


//code for fromlogin
//code for fromlogin
//code for fromlogin

private: System::Void b_login_Click(System::Object^  sender, System::EventArgs^  e)
{
	DataTable^ checkloginemp = Connection2::executesql("SELECT * FROM Tbl_Employee Where Emp_Id = '" + username->Text + "' and Emp_Password = '" + password->Text + "'");
	if (checkloginemp->Rows->Count > 0)
	{
		MessageBox::Show("�����", "����͹", MessageBoxButtons::OK, MessageBoxIcon::Information);
		panelloginright->Visible = false;
		panelloginleft->Visible = false;
		labelheader->Text = "ITEM_SALE";
		try
		{
			String^ strcon = "Data Source=kitcash.database.windows.net;Initial Catalog=Minimart;Integrated Security=False;User ID=kitcash;Password=1475369nN;Connect Timeout=30;Encrypt=True;TrustServerCertificate=False;ApplicationIntent=ReadWrite;MultiSubnetFailover=False";

			SqlConnection^ con = gcnew SqlConnection(strcon);

			con->Open();

			SqlCommand^ cmdemp = gcnew SqlCommand("select * from tbl_employee where Emp_Id='" + username->Text + "'", con);

			SqlDataReader^ readeremp = cmdemp->ExecuteReader();

			if (readeremp->Read())
			{
				stateuser->Text = readeremp["Emp_Name"]->ToString();
				emp->Text = readeremp["Emp_Name"]->ToString();
			}
			else
			{
				stateuser->Text = "";
			}

			con->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	else
	{
		MessageBox::Show("��������", "����͹", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
};
}
