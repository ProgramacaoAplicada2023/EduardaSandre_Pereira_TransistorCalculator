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
			this->menuprincipal = (gcnew System::Windows::Forms::Panel());
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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->projpol2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->menuprincipal->SuspendLayout();
			this->projpol1->SuspendLayout();
			this->anapol1->SuspendLayout();
			this->anapol2->SuspendLayout();
			this->projpol2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
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
			this->botprojpol2->Location = System::Drawing::Point(209, 248);
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
			this->label1->Location = System::Drawing::Point(84, 22);
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
			this->label2->Location = System::Drawing::Point(84, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(189, 24);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Análise Polarização 1";
			// 
			// anapol2
			// 
			this->anapol2->Controls->Add(this->button4);
			this->anapol2->Controls->Add(this->label3);
			this->anapol2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->anapol2->Location = System::Drawing::Point(0, 0);
			this->anapol2->Name = L"anapol2";
			this->anapol2->Size = System::Drawing::Size(372, 408);
			this->anapol2->TabIndex = 5;
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
			this->label3->Location = System::Drawing::Point(84, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(189, 24);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Análise Polarização 2";
			// 
			// projpol2
			// 
			this->projpol2->Controls->Add(this->button1);
			this->projpol2->Controls->Add(this->label4);
			this->projpol2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->projpol2->Location = System::Drawing::Point(0, 0);
			this->projpol2->Name = L"projpol2";
			this->projpol2->Size = System::Drawing::Size(372, 408);
			this->projpol2->TabIndex = 7;
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
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(27, 71);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(157, 118);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(27, 238);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(157, 118);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(60, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(224, 24);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Calculadora de Transistor";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(72, 192);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Polarização 1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(72, 362);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(71, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Polarização 2";
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
			this->MinimumSize = System::Drawing::Size(388, 447);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuprincipal->ResumeLayout(false);
			this->menuprincipal->PerformLayout();
			this->projpol1->ResumeLayout(false);
			this->projpol1->PerformLayout();
			this->anapol1->ResumeLayout(false);
			this->anapol1->PerformLayout();
			this->anapol2->ResumeLayout(false);
			this->anapol2->PerformLayout();
			this->projpol2->ResumeLayout(false);
			this->projpol2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
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
};
}
