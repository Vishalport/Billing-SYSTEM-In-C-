#pragma once

namespace CppBillingSYSTEM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		double Pen = 10;
		double book = 50;
		double copy = 30;
		double color = 45;
		double ink = 30;
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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ btnTotal;

	private: System::Windows::Forms::Button^ btnReceipt;

	private: System::Windows::Forms::Button^ btnPrint;

	private: System::Windows::Forms::Button^ btnReset;

	private: System::Windows::Forms::Button^ btnExit;







	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ lblitems;


	private: System::Windows::Forms::Label^ lblcost;


	private: System::Windows::Forms::Label^ lblink;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::NumericUpDown^ numink;

	private: System::Windows::Forms::Label^ lblcolor;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::NumericUpDown^ numcolor;

	private: System::Windows::Forms::Label^ lblcopy;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::NumericUpDown^ numcopy;

	private: System::Windows::Forms::Label^ lblbook;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ numbook;

	private: System::Windows::Forms::Label^ lblpen;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numpen;


	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PageSetupDialog^ pageSetupDialog1;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
	private: System::Windows::Forms::Label^ label5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->btnTotal = (gcnew System::Windows::Forms::Button());
			this->btnReceipt = (gcnew System::Windows::Forms::Button());
			this->btnPrint = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->lblitems = (gcnew System::Windows::Forms::Label());
			this->lblcost = (gcnew System::Windows::Forms::Label());
			this->lblink = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->numink = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblcolor = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numcolor = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblcopy = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->numcopy = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblbook = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numbook = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblpen = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numpen = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pageSetupDialog1 = (gcnew System::Windows::Forms::PageSetupDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->panel1->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numink))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numcolor))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numcopy))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numbook))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numpen))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Desktop;
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->ForeColor = System::Drawing::SystemColors::Control;
			this->panel1->Location = System::Drawing::Point(3, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1365, 741);
			this->panel1->TabIndex = 0;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel6->Controls->Add(this->btnTotal);
			this->panel6->Controls->Add(this->btnReceipt);
			this->panel6->Controls->Add(this->btnPrint);
			this->panel6->Controls->Add(this->btnReset);
			this->panel6->Controls->Add(this->btnExit);
			this->panel6->Location = System::Drawing::Point(0, 612);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1365, 126);
			this->panel6->TabIndex = 2;
			// 
			// btnTotal
			// 
			this->btnTotal->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->btnTotal->Font = (gcnew System::Drawing::Font(L"Rockwell Extra Bold", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTotal->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btnTotal->Location = System::Drawing::Point(26, 24);
			this->btnTotal->Name = L"btnTotal";
			this->btnTotal->Size = System::Drawing::Size(250, 70);
			this->btnTotal->TabIndex = 4;
			this->btnTotal->Text = L"Total";
			this->btnTotal->UseVisualStyleBackColor = false;
			this->btnTotal->Click += gcnew System::EventHandler(this, &MyForm::btnTotal_Click);
			// 
			// btnReceipt
			// 
			this->btnReceipt->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->btnReceipt->Font = (gcnew System::Drawing::Font(L"Rockwell Extra Bold", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReceipt->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btnReceipt->Location = System::Drawing::Point(291, 24);
			this->btnReceipt->Name = L"btnReceipt";
			this->btnReceipt->Size = System::Drawing::Size(250, 70);
			this->btnReceipt->TabIndex = 3;
			this->btnReceipt->Text = L"Receipt";
			this->btnReceipt->UseVisualStyleBackColor = false;
			this->btnReceipt->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// btnPrint
			// 
			this->btnPrint->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->btnPrint->Font = (gcnew System::Drawing::Font(L"Rockwell Extra Bold", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrint->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btnPrint->Location = System::Drawing::Point(547, 24);
			this->btnPrint->Name = L"btnPrint";
			this->btnPrint->Size = System::Drawing::Size(250, 70);
			this->btnPrint->TabIndex = 2;
			this->btnPrint->Text = L"Print";
			this->btnPrint->UseVisualStyleBackColor = false;
			this->btnPrint->Click += gcnew System::EventHandler(this, &MyForm::btnPrint_Click);
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Rockwell Extra Bold", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btnReset->Location = System::Drawing::Point(817, 23);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(250, 70);
			this->btnReset->TabIndex = 1;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Rockwell Extra Bold", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btnExit->Location = System::Drawing::Point(1071, 25);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(250, 70);
			this->btnExit->TabIndex = 0;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->richTextBox1);
			this->panel5->Location = System::Drawing::Point(840, 130);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(525, 476);
			this->panel5->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label4->Location = System::Drawing::Point(149, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 33);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Receipt";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(13, 88);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(500, 374);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label18);
			this->panel3->Controls->Add(this->label17);
			this->panel3->Controls->Add(this->label16);
			this->panel3->Controls->Add(this->lblitems);
			this->panel3->Controls->Add(this->lblcost);
			this->panel3->Controls->Add(this->lblink);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->numink);
			this->panel3->Controls->Add(this->lblcolor);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->numcolor);
			this->panel3->Controls->Add(this->lblcopy);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->numcopy);
			this->panel3->Controls->Add(this->lblbook);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->numbook);
			this->panel3->Controls->Add(this->lblpen);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->numpen);
			this->panel3->Location = System::Drawing::Point(0, 131);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(831, 475);
			this->panel3->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label5->Location = System::Drawing::Point(37, 391);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 35);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Total";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label18->Location = System::Drawing::Point(220, 11);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(237, 33);
			this->label18->TabIndex = 21;
			this->label18->Text = L"Number Items";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label17->Location = System::Drawing::Point(541, 11);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(234, 33);
			this->label17->TabIndex = 20;
			this->label17->Text = L"Cost of Items";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label16->Location = System::Drawing::Point(37, 11);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(102, 33);
			this->label16->TabIndex = 19;
			this->label16->Text = L"Items";
			// 
			// lblitems
			// 
			this->lblitems->BackColor = System::Drawing::SystemColors::Control;
			this->lblitems->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblitems->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 17, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblitems->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblitems->Location = System::Drawing::Point(196, 392);
			this->lblitems->Name = L"lblitems";
			this->lblitems->Size = System::Drawing::Size(261, 37);
			this->lblitems->TabIndex = 17;
			this->lblitems->Text = L"0";
			this->lblitems->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblitems->Click += gcnew System::EventHandler(this, &MyForm::lblitems_Click);
			// 
			// lblcost
			// 
			this->lblcost->BackColor = System::Drawing::SystemColors::Control;
			this->lblcost->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblcost->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 17, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblcost->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblcost->Location = System::Drawing::Point(508, 392);
			this->lblcost->Name = L"lblcost";
			this->lblcost->Size = System::Drawing::Size(276, 37);
			this->lblcost->TabIndex = 16;
			this->lblcost->Text = L"$0.00";
			this->lblcost->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblink
			// 
			this->lblink->BackColor = System::Drawing::SystemColors::Control;
			this->lblink->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblink->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 17, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblink->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblink->Location = System::Drawing::Point(508, 302);
			this->lblink->Name = L"lblink";
			this->lblink->Size = System::Drawing::Size(276, 37);
			this->lblink->TabIndex = 15;
			this->lblink->Text = L"$0.00";
			this->lblink->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label12->Location = System::Drawing::Point(37, 302);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(60, 37);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Ink";
			// 
			// numink
			// 
			this->numink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numink->Location = System::Drawing::Point(203, 302);
			this->numink->Name = L"numink";
			this->numink->Size = System::Drawing::Size(254, 36);
			this->numink->TabIndex = 13;
			this->numink->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numink->ValueChanged += gcnew System::EventHandler(this, &MyForm::numink_ValueChanged);
			// 
			// lblcolor
			// 
			this->lblcolor->BackColor = System::Drawing::SystemColors::Control;
			this->lblcolor->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblcolor->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 17, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblcolor->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblcolor->Location = System::Drawing::Point(508, 250);
			this->lblcolor->Name = L"lblcolor";
			this->lblcolor->Size = System::Drawing::Size(276, 37);
			this->lblcolor->TabIndex = 12;
			this->lblcolor->Text = L"$0.00";
			this->lblcolor->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label8->Location = System::Drawing::Point(37, 250);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(89, 37);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Color";
			// 
			// numcolor
			// 
			this->numcolor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numcolor->Location = System::Drawing::Point(203, 250);
			this->numcolor->Name = L"numcolor";
			this->numcolor->Size = System::Drawing::Size(254, 36);
			this->numcolor->TabIndex = 10;
			this->numcolor->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numcolor->ValueChanged += gcnew System::EventHandler(this, &MyForm::numcolor_ValueChanged);
			// 
			// lblcopy
			// 
			this->lblcopy->BackColor = System::Drawing::SystemColors::Control;
			this->lblcopy->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblcopy->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 17, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblcopy->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblcopy->Location = System::Drawing::Point(508, 191);
			this->lblcopy->Name = L"lblcopy";
			this->lblcopy->Size = System::Drawing::Size(276, 37);
			this->lblcopy->TabIndex = 9;
			this->lblcopy->Text = L"$0.00";
			this->lblcopy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label10->Location = System::Drawing::Point(37, 191);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(84, 37);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Copy";
			// 
			// numcopy
			// 
			this->numcopy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numcopy->Location = System::Drawing::Point(203, 191);
			this->numcopy->Name = L"numcopy";
			this->numcopy->Size = System::Drawing::Size(254, 36);
			this->numcopy->TabIndex = 7;
			this->numcopy->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numcopy->ValueChanged += gcnew System::EventHandler(this, &MyForm::numcopy_ValueChanged);
			// 
			// lblbook
			// 
			this->lblbook->BackColor = System::Drawing::SystemColors::Control;
			this->lblbook->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblbook->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 17, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblbook->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblbook->Location = System::Drawing::Point(508, 135);
			this->lblbook->Name = L"lblbook";
			this->lblbook->Size = System::Drawing::Size(276, 37);
			this->lblbook->TabIndex = 6;
			this->lblbook->Text = L"$0.00";
			this->lblbook->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label6->Location = System::Drawing::Point(37, 135);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 37);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Book";
			// 
			// numbook
			// 
			this->numbook->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numbook->Location = System::Drawing::Point(203, 135);
			this->numbook->Name = L"numbook";
			this->numbook->Size = System::Drawing::Size(254, 36);
			this->numbook->TabIndex = 4;
			this->numbook->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numbook->ValueChanged += gcnew System::EventHandler(this, &MyForm::numbook_ValueChanged);
			// 
			// lblpen
			// 
			this->lblpen->BackColor = System::Drawing::SystemColors::Control;
			this->lblpen->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblpen->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 17, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblpen->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblpen->Location = System::Drawing::Point(508, 76);
			this->lblpen->Name = L"lblpen";
			this->lblpen->Size = System::Drawing::Size(276, 37);
			this->lblpen->TabIndex = 3;
			this->lblpen->Text = L"$0.00";
			this->lblpen->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label3->Location = System::Drawing::Point(37, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 37);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Pen";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// numpen
			// 
			this->numpen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numpen->Location = System::Drawing::Point(203, 76);
			this->numpen->Name = L"numpen";
			this->numpen->Size = System::Drawing::Size(254, 36);
			this->numpen->TabIndex = 1;
			this->numpen->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numpen->ValueChanged += gcnew System::EventHandler(this, &MyForm::numpen_ValueChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Location = System::Drawing::Point(0, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1365, 116);
			this->panel2->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold Condensed", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(228, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1008, 110);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Billing Management System\r\n";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::Control;
			this->panel4->Location = System::Drawing::Point(817, 112);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(549, 495);
			this->panel4->TabIndex = 1;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			this->printPreviewDialog1->Load += gcnew System::EventHandler(this, &MyForm::printPreviewDialog1_Load);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 741);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numink))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numcolor))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numcopy))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numbook))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numpen))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion  Todo 
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Clear();

		richTextBox1->AppendText(label16->Text + "\t" + "\t" + label18->Text + "\t" + "\t" + label17->Text + "\n" + "\n");

		richTextBox1->AppendText(label3->Text + "\t" + "\t" + numpen->Text +"\t" + "\t" + "\t" + lblpen->Text + "\n" + "\n");
		richTextBox1->AppendText(label6->Text + "\t" + "\t" + numbook->Text + "\t" + "\t" + "\t" + lblbook->Text + "\n" + "\n");
		richTextBox1->AppendText(label10->Text + "\t" + "\t" + numcopy->Text + "\t" + "\t" + "\t" + lblcopy->Text + "\n" + "\n");
		richTextBox1->AppendText(label8->Text + "\t" + "" + numcolor->Text + "\t" + "\t" + "\t" + lblcolor->Text + "\n" + "\n");
		richTextBox1->AppendText(label12->Text + "\t" + "\t" + numink->Text + "\t" + "\t" + "\t" + lblink->Text + "\n" + "\n" +"\n");

		richTextBox1->AppendText("TOTAL" + "\t" "" + lblitems->Text + "\t" + "\t" + "\t" + lblcost->Text + "\n" + "\n");


	}

private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void printPreviewDialog1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {   // Exit button 
	try {
		System::Windows::Forms::DialogResult iExit;

		iExit = MessageBox::Show("Confirm if you want to Exit", "Billing Manage System", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question);

		if (iExit == System::Windows::Forms::DialogResult::Yes) {
			Application::Exit();
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}

}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnTotal_Click(System::Object^ sender, System::EventArgs^ e) {
	double q[7], p[7];
	
	q[0] = Convert::ToDouble(numpen->Value);
	q[1] = Convert::ToDouble(numbook->Value);
	q[2] = Convert::ToDouble(numcopy->Value);
	q[3] = Convert::ToDouble(numcolor->Value);
	q[4] = Convert::ToDouble(numink->Value);

	q[5] = q[0] + q[1] + q[2] + q[3] + q[4];
	lblitems->Text = Convert::ToString(q[5]);


	 
	p[0] = q[0] * Pen;
	p[1] = q[1] * book;
	p[2] = q[2] * copy;
	p[3] = q[3] * color;
	p[4] = q[4] * ink;

	p[5] = p[0] + p[1] + p[2] + p[3] + p[4];
	lblcost->Text = String::Format("{0:c2}", p[5]);

}
private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		numpen->Value = 0;
		numbook->Value = 0;
		numcopy->Value = 0;
		numcolor->Value = 0;
		numink->Value = 0;

		richTextBox1->Clear();

		lblpen->Text = "$0:00";
		lblbook->Text = "$0:00";
		lblcopy->Text = "$0:00";
		lblcolor->Text = "$0:00";
		lblink->Text = "$0:00";

		lblcost->Text = "$0:00";
		lblitems->Text = "";



	}
	catch(Exception^ ex) {
	MessageBox::Show(ex->Message);
	}
}
private: System::Void numpen_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	double i = Convert::ToDouble(numpen->Value);
	lblpen->Text = String::Format("{0:c2}", i * Pen);
}
private: System::Void numbook_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	double i = Convert::ToDouble(numbook->Value);
	lblbook->Text = String::Format("{0:c2}", i * book);
}
private: System::Void numcopy_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	double i = Convert::ToDouble(numcopy->Value);
	lblcopy->Text = String::Format("{0:c2}", i * copy);
}
private: System::Void numcolor_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	double i = Convert::ToDouble(numcolor->Value);
	lblcolor->Text = String::Format("{0:c2}", i * color);
}
private: System::Void numink_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	double i = Convert::ToDouble(numink->Value);
	lblink->Text = String::Format("{0:c2}", i * ink);
}
private: System::Void lblitems_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnPrint_Click(System::Object^ sender, System::EventArgs^ e) {
	printPreviewDialog1->ShowDialog();
}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	System::Drawing::Font^ fntString = gcnew System::Drawing::Font("time new Rome", 14, FontStyle::Regular);
	e->Graphics->DrawString(richTextBox1->Text, fntString, Brushes::BlueViolet, 120, 150);
}
};
}
