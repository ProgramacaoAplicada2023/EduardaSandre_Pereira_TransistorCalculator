#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ menuprincipal;
	private: System::Windows::Forms::Button^ botprojpol1;
	protected:





	protected:




	private: System::Windows::Forms::Button^ botanapol2;
	private: System::Windows::Forms::Button^ botprojpol2;
	private: System::Windows::Forms::Button^ botanapol1;
	private: System::Windows::Forms::Panel^ projpol1;









	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ anapol1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ anapol2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ projpol2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label39;






























	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuprincipal = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->botanapol2 = (gcnew System::Windows::Forms::Button());
			this->botprojpol2 = (gcnew System::Windows::Forms::Button());
			this->botanapol1 = (gcnew System::Windows::Forms::Button());
			this->botprojpol1 = (gcnew System::Windows::Forms::Button());
			this->projpol1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->anapol1 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->anapol2 = (gcnew System::Windows::Forms::Panel());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->projpol2 = (gcnew System::Windows::Forms::Panel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuprincipal->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->projpol1->SuspendLayout();
			this->anapol1->SuspendLayout();
			this->anapol2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->projpol2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// menuprincipal
			// 
			this->menuprincipal->Controls->Add(this->label7);
			this->menuprincipal->Controls->Add(this->label6);
			this->menuprincipal->Controls->Add(this->label5);
			this->menuprincipal->Controls->Add(this->pictureBox2);
			this->menuprincipal->Controls->Add(this->pictureBox1);
			this->menuprincipal->Controls->Add(this->botanapol2);
			this->menuprincipal->Controls->Add(this->botprojpol2);
			this->menuprincipal->Controls->Add(this->botanapol1);
			this->menuprincipal->Controls->Add(this->botprojpol1);
			this->menuprincipal->Dock = System::Windows::Forms::DockStyle::Fill;
			this->menuprincipal->Location = System::Drawing::Point(0, 0);
			this->menuprincipal->Name = L"menuprincipal";
			this->menuprincipal->Size = System::Drawing::Size(372, 408);
			this->menuprincipal->TabIndex = 0;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(72, 383);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(71, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Polarização 2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(72, 195);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Polarização 1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(84, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(224, 24);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Calculadora de Transistor";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(52, 211);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(123, 172);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(52, 36);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(138, 158);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// botanapol2
			// 
			this->botanapol2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botanapol2->Location = System::Drawing::Point(209, 304);
			this->botanapol2->Name = L"botanapol2";
			this->botanapol2->Size = System::Drawing::Size(75, 37);
			this->botanapol2->TabIndex = 3;
			this->botanapol2->Text = L"Análise";
			this->botanapol2->UseVisualStyleBackColor = true;
			this->botanapol2->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// botprojpol2
			// 
			this->botprojpol2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botprojpol2->Location = System::Drawing::Point(209, 250);
			this->botprojpol2->Name = L"botprojpol2";
			this->botprojpol2->Size = System::Drawing::Size(75, 37);
			this->botprojpol2->TabIndex = 2;
			this->botprojpol2->Text = L"Projeto";
			this->botprojpol2->UseVisualStyleBackColor = true;
			this->botprojpol2->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// botanapol1
			// 
			this->botanapol1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botanapol1->Location = System::Drawing::Point(209, 131);
			this->botanapol1->Name = L"botanapol1";
			this->botanapol1->Size = System::Drawing::Size(75, 37);
			this->botanapol1->TabIndex = 1;
			this->botanapol1->Text = L"Análise";
			this->botanapol1->UseVisualStyleBackColor = true;
			this->botanapol1->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// botprojpol1
			// 
			this->botprojpol1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botprojpol1->Location = System::Drawing::Point(209, 88);
			this->botprojpol1->Name = L"botprojpol1";
			this->botprojpol1->Size = System::Drawing::Size(75, 37);
			this->botprojpol1->TabIndex = 0;
			this->botprojpol1->Text = L"Projeto";
			this->botprojpol1->UseVisualStyleBackColor = true;
			this->botprojpol1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// projpol1
			// 
			this->projpol1->Controls->Add(this->button2);
			this->projpol1->Controls->Add(this->label1);
			this->projpol1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->projpol1->Location = System::Drawing::Point(0, 0);
			this->projpol1->Name = L"projpol1";
			this->projpol1->Size = System::Drawing::Size(372, 408);
			this->projpol1->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(12, 362);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(79, 34);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Voltar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(81, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Projeto Polarização 1";
			// 
			// anapol1
			// 
			this->anapol1->Controls->Add(this->button6);
			this->anapol1->Controls->Add(this->label2);
			this->anapol1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->anapol1->Location = System::Drawing::Point(0, 0);
			this->anapol1->Name = L"anapol1";
			this->anapol1->Size = System::Drawing::Size(372, 408);
			this->anapol1->TabIndex = 4;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(12, 362);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 34);
			this->button6->TabIndex = 1;
			this->button6->Text = L"Voltar";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(84, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(189, 24);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Análise Polarização 1";
			// 
			// anapol2
			// 
			this->anapol2->Controls->Add(this->label42);
			this->anapol2->Controls->Add(this->label41);
			this->anapol2->Controls->Add(this->label40);
			this->anapol2->Controls->Add(this->label39);
			this->anapol2->Controls->Add(this->comboBox5);
			this->anapol2->Controls->Add(this->label38);
			this->anapol2->Controls->Add(this->label26);
			this->anapol2->Controls->Add(this->label27);
			this->anapol2->Controls->Add(this->label28);
			this->anapol2->Controls->Add(this->label29);
			this->anapol2->Controls->Add(this->label30);
			this->anapol2->Controls->Add(this->label31);
			this->anapol2->Controls->Add(this->label32);
			this->anapol2->Controls->Add(this->label33);
			this->anapol2->Controls->Add(this->label34);
			this->anapol2->Controls->Add(this->label35);
			this->anapol2->Controls->Add(this->label36);
			this->anapol2->Controls->Add(this->comboBox3);
			this->anapol2->Controls->Add(this->comboBox4);
			this->anapol2->Controls->Add(this->label37);
			this->anapol2->Controls->Add(this->pictureBox4);
			this->anapol2->Controls->Add(this->button4);
			this->anapol2->Controls->Add(this->label3);
			this->anapol2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->anapol2->Location = System::Drawing::Point(0, 0);
			this->anapol2->Name = L"anapol2";
			this->anapol2->Size = System::Drawing::Size(372, 408);
			this->anapol2->TabIndex = 5;
			this->anapol2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::anapol2_Paint);
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(259, 315);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(41, 15);
			this->label42->TabIndex = 43;
			this->label42->Text = L"0,65 V";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(256, 272);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(59, 15);
			this->label41->TabIndex = 42;
			this->label41->Text = L"10.02 mA";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(224, 344);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(27, 15);
			this->label40->TabIndex = 41;
			this->label40->Text = L"Vcb";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(224, 315);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(28, 15);
			this->label39->TabIndex = 40;
			this->label39->Text = L"Vbe";
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(85, 292);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(73, 21);
			this->comboBox5->TabIndex = 39;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(49, 298);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(26, 15);
			this->label38->TabIndex = 38;
			this->label38->Text = L"Vcc";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(257, 290);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(24, 15);
			this->label26->TabIndex = 37;
			this->label26->Text = L"5 V";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(259, 236);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(42, 15);
			this->label27->TabIndex = 36;
			this->label27->Text = L"10 mA";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(256, 254);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(52, 15);
			this->label28->TabIndex = 35;
			this->label28->Text = L"0.02 mA";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(257, 344);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(24, 15);
			this->label29->TabIndex = 34;
			this->label29->Text = L"4 V";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(256, 214);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(28, 15);
			this->label30->TabIndex = 33;
			this->label30->Text = L"180";
			this->label30->Click += gcnew System::EventHandler(this, &MyForm::label30_Click);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(224, 272);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(17, 15);
			this->label31->TabIndex = 32;
			this->label31->Text = L"Ie";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(224, 254);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(17, 15);
			this->label32->TabIndex = 31;
			this->label32->Text = L"Ib";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(224, 290);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(27, 15);
			this->label33->TabIndex = 30;
			this->label33->Text = L"Vce";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(224, 233);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(16, 15);
			this->label34->TabIndex = 29;
			this->label34->Text = L"Ic";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(221, 214);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(15, 15);
			this->label35->TabIndex = 28;
			this->label35->Text = L"B";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(49, 265);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(23, 15);
			this->label36->TabIndex = 27;
			this->label36->Text = L"Rb";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(85, 259);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(73, 21);
			this->comboBox3->TabIndex = 26;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(85, 232);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(73, 21);
			this->comboBox4->TabIndex = 25;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(49, 232);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(22, 15);
			this->label37->TabIndex = 24;
			this->label37->Text = L"Rc";
			this->label37->Click += gcnew System::EventHandler(this, &MyForm::label37_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(117, 36);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(123, 172);
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(12, 362);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 34);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Voltar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_2);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(81, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(189, 24);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Análise Polarização 2";
			// 
			// projpol2
			// 
			this->projpol2->Controls->Add(this->label25);
			this->projpol2->Controls->Add(this->label24);
			this->projpol2->Controls->Add(this->label23);
			this->projpol2->Controls->Add(this->label22);
			this->projpol2->Controls->Add(this->label21);
			this->projpol2->Controls->Add(this->label20);
			this->projpol2->Controls->Add(this->label19);
			this->projpol2->Controls->Add(this->label18);
			this->projpol2->Controls->Add(this->label17);
			this->projpol2->Controls->Add(this->label16);
			this->projpol2->Controls->Add(this->label15);
			this->projpol2->Controls->Add(this->label14);
			this->projpol2->Controls->Add(this->label13);
			this->projpol2->Controls->Add(this->label12);
			this->projpol2->Controls->Add(this->label11);
			this->projpol2->Controls->Add(this->label10);
			this->projpol2->Controls->Add(this->label9);
			this->projpol2->Controls->Add(this->comboBox2);
			this->projpol2->Controls->Add(this->comboBox1);
			this->projpol2->Controls->Add(this->label8);
			this->projpol2->Controls->Add(this->pictureBox3);
			this->projpol2->Controls->Add(this->button1);
			this->projpol2->Controls->Add(this->label4);
			this->projpol2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->projpol2->Location = System::Drawing::Point(0, 0);
			this->projpol2->Name = L"projpol2";
			this->projpol2->Size = System::Drawing::Size(372, 408);
			this->projpol2->TabIndex = 7;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(244, 368);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(28, 15);
			this->label25->TabIndex = 26;
			this->label25->Text = L"200";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(242, 345);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(34, 15);
			this->label24->TabIndex = 25;
			this->label24->Text = L"0.7 V";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(241, 330);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(24, 15);
			this->label23->TabIndex = 24;
			this->label23->Text = L"3 V";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(241, 305);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(45, 15);
			this->label22->TabIndex = 23;
			this->label22->Text = L"3.5 mA";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(241, 290);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(35, 15);
			this->label21->TabIndex = 22;
			this->label21->Text = L"3 mA";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(241, 272);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(53, 15);
			this->label20->TabIndex = 21;
			this->label20->Text = L"8k  Ohm";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(241, 251);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(53, 15);
			this->label19->TabIndex = 20;
			this->label19->Text = L"1k  Ohm";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(241, 232);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(24, 15);
			this->label18->TabIndex = 19;
			this->label18->Text = L"5 V";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(209, 305);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(17, 15);
			this->label17->TabIndex = 18;
			this->label17->Text = L"Ie";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(209, 290);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(17, 15);
			this->label16->TabIndex = 17;
			this->label16->Text = L"Ib";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(206, 368);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(32, 15);
			this->label15->TabIndex = 16;
			this->label15->Text = L"Beta";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(206, 345);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(28, 15);
			this->label14->TabIndex = 15;
			this->label14->Text = L"Vbe";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(206, 330);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(27, 15);
			this->label13->TabIndex = 14;
			this->label13->Text = L"Vcb";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(209, 272);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(22, 15);
			this->label12->TabIndex = 13;
			this->label12->Text = L"Rc";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(209, 251);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(23, 15);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Re";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(206, 232);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(26, 15);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Vcc";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(34, 283);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 15);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Vce";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(70, 277);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(73, 21);
			this->comboBox2->TabIndex = 9;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(70, 250);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(73, 21);
			this->comboBox1->TabIndex = 8;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(34, 250);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(18, 15);
			this->label8->TabIndex = 7;
			this->label8->Text = L"IC";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(117, 39);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(123, 172);
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 362);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 34);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Voltar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_2);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(98, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(186, 24);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Projeto Polarização 2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(372, 408);
			this->Controls->Add(this->menuprincipal);
			this->Controls->Add(this->projpol2);
			this->Controls->Add(this->anapol2);
			this->Controls->Add(this->anapol1);
			this->Controls->Add(this->projpol1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(388, 447);
			this->Name = L"MyForm";
			this->Text = L"Calculadora de Transistor";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuprincipal->ResumeLayout(false);
			this->menuprincipal->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->projpol1->ResumeLayout(false);
			this->projpol1->PerformLayout();
			this->anapol1->ResumeLayout(false);
			this->anapol1->PerformLayout();
			this->anapol2->ResumeLayout(false);
			this->anapol2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->projpol2->ResumeLayout(false);
			this->projpol2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		menuprincipal->Hide();

		// Mostrar o segundo painel
		projpol1->Show();
		projpol1->BringToFront();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	projpol1->Hide();

	// Mostrar o segundo painel
	menuprincipal->Show();
	menuprincipal->BringToFront();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	anapol1->Hide();

	// Mostrar o segundo painel
	menuprincipal->Show();
	menuprincipal->BringToFront();
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	menuprincipal->Hide();

	// Mostrar o segundo painel
	anapol1->Show();
	anapol1->BringToFront();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	menuprincipal->Hide();

	// Mostrar o segundo painel
	projpol2->Show();
	projpol2->BringToFront();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	menuprincipal->Hide();

	// Mostrar o segundo painel
	anapol2->Show();
	anapol2->BringToFront();
}
private: System::Void splitContainer1_Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	anapol2->Hide();

	// Mostrar o segundo painel
	menuprincipal->Show();
	menuprincipal->BringToFront();
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	

}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	projpol2->Hide();

	// Mostrar o segundo painel
	menuprincipal->Show();
	menuprincipal->BringToFront();
}
private: System::Void button4_Click_2(System::Object^ sender, System::EventArgs^ e) {
	anapol2->Hide();

	// Mostrar o segundo painel
	menuprincipal->Show();
	menuprincipal->BringToFront();
}
private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {
	anapol1->Hide();

	// Mostrar o segundo painel
	menuprincipal->Show();
	menuprincipal->BringToFront();

}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	projpol1->Hide();

	// Mostrar o segundo painel
	menuprincipal->Show();
	menuprincipal->BringToFront();

}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label37_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label30_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void anapol2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
