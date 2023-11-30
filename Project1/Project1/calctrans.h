#pragma once
#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>



namespace Project1 {

	// Declaração de variáveis globais
	std::vector<double> ic = { 0.001, 2.0 * pow(10, -3), 3.0 * pow(10, -3), 4.0 * pow(10, -3), 5.0 * pow(10, -3), 6.0 * pow(10, -3), 7.0 * pow(10, -3), 8.0 * pow(10, -3), 9.0 * pow(10, -3), 10.0 * pow(10, -3) };
	std::vector<double> beta = { 175.0, 185.0, 187.5, 190.0, 195.0, 197.5, 200.0, 200.0, 200.0, 200.0 };
	std::vector<double> vbe = { 0.64, 0.66, 0.672, 0.68, 0.69, 0.7, 0.7, 0.71, 0.714, 0.72 };
	std::vector<double> vcc = { 10.0, 10.5, 11.0, 11.5, 12.0, 12.5, 13.0, 13.5, 14.0, 14.5, 15.0, 15.5, 16.0, 16.5, 17.0, 17.5, 18.0, 18.5, 19.0, 19.5, 20.0 };
	double vce = 5;
	double Re = 0;
	double i = -1;
	double j = -1;
	double Rb = 0;
	double Rc =0;
	double Vcc = 0;
	double Vbb =0 ;
	double Rx = 0;
	double Ry = 0;
	double Vce = 0;
	double Vbe = 0;
	double Vcb = 0;
	double Ib = 0;
	double Ie = 0;
	double Ic = 0;


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para MyForm
	/// </summary>
	public ref class calctrans : public System::Windows::Forms::Form
	{
	public:
		
		calctrans(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~calctrans()
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

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox3;





















	private: System::Windows::Forms::Label^ label38;










	private: System::Windows::Forms::Label^ label36;


	private: System::Windows::Forms::Label^ label37;




private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ label60;
private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label12;

private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label61;

private: System::Windows::Forms::Label^ label63;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::Label^ label64;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label62;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::PictureBox^ pictureBox2;


private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::Label^ label84;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::Label^ label68;
private: System::Windows::Forms::Label^ label69;
private: System::Windows::Forms::Label^ label70;
private: System::Windows::Forms::Label^ label71;
private: System::Windows::Forms::Label^ label72;
private: System::Windows::Forms::Label^ label73;
private: System::Windows::Forms::Label^ label74;
private: System::Windows::Forms::Label^ label75;
private: System::Windows::Forms::Label^ label76;
private: System::Windows::Forms::Label^ label77;
private: System::Windows::Forms::Label^ label78;
private: System::Windows::Forms::Label^ label79;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Label^ label80;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Label^ label81;
private: System::Windows::Forms::Label^ label82;
private: System::Windows::Forms::Label^ label83;


private: System::Windows::Forms::Label^ label22;
































	private:
		


		double findClosestE12(double value) {
			// Valores da série E12 em Ohms
			std::vector<float> e12Values = {
				1.0, 1.2, 1.5, 1.8, 2.2, 2.7, 3.3, 3.9, 4.7, 5.6, 6.8, 8.2, 10, 12, 15, 18, 22, 27, 33, 39, 47,
				56, 68, 82, 100, 120, 150, 180, 220, 270, 330, 390, 470, 560, 680, 820, 1000
			};

			double valuek;

			// Se o valor é maior ou igual a 1000, converte para kOhms
			if (value >= 1000) {
				valuek = value / 1000; // Converte para kOhms
			}
			else {
				valuek = value;
			}
			// Inicializa o valor mais próximo como o primeiro valor da série
			float closestValue = e12Values[0];

			// Encontra o valor mais próximo na série E12
			for (float e12Value : e12Values) {
				if (std::fabs(valuek - e12Value) < std::fabs(valuek - closestValue)) {
					closestValue = e12Value;
				}
			}

			// Se o valor original era maior ou igual a 1000, converte de volta para Ohms
			if (value > 1000) {
				closestValue *= 1000; // Converte de volta para Ohms
			}

			return closestValue;
		}

		double findBeta(int i) {

			double betai = beta[i];

			return betai;
		}

		double findVbe(int i) {

			double vbei = vbe[i];

			return vbei;
		}


		double findIe(int i) {
			double Ie = ((beta[i] + 1) * ic[i]) / beta[i];
			return Ie * 1000.0;
		}

		double findIb(int i) {
			double Ib = ic[i] / beta[i];
			return Ib * 1000000.0;
		}



		double findVcb(int i) {

			double Vcb = 5 - vbe[i];

			return Vcb;
		}

		double findRe(int i) {

			double Re = (5 * vbe[i] * beta[i]) / ((beta[i] + 1) * ic[i]);
			Re = findClosestE12(Re);

			return Re / 1000;

		}

		double findRc(int i, int j) {

			double Rc = ((vcc[j] - 5 - 5 * vbe[i]) / ic[i]);
			Rc = findClosestE12(Rc);

			return Rc / 1000;


		}


		double findRx(int i, int j) {

			double Rx = (vbe[i] * beta[i] * vcc[j]) / (ic[i] * (2 * vcc[j] - 13 * vbe[i]));
			Rx = findClosestE12(Rx);

			return Rx / 1000;

		}

		double findRy(int i, int j) {
			double Ry = (beta[i] * vcc[j]) / (13 * ic[i]);
			Ry = findClosestE12(Ry);

			return Ry / 1000;

		}

		double findRb(int i, int j) {

			double Rb = ((vcc[j] - 2 * vbe[i]) * beta[i]) / (2 * ic[i]);
			Rb = findClosestE12(Rb);

			return Rb / 1000;
		}

		double findRc2(int i, int j) {

			double Rc2 = (vcc[j] - 5) / ic[i];
			Rc2 = findClosestE12(Rc2);

			return Rc2 / 1000;
		}

		double findVbb(int j) {

			double vbb = vcc[j] / 2;
			return vbb;
		}


		double getPolarizacao(double Rb, double Rc, double Vbb, double Vcc) {
			double Vce;
			double Ib;
			double Ic;

			if (Vce > 0.7) {
				Ib = (Vbb - 0.7) / Rb;

				Vce = Vcc - 190 * Ib * Rc;
				return 1;
			}
			else if (Ib > 0.0) {
				Ib = (Vbb - 0.72) / Rb;
				return 2;
			}
			else {
				return 3;
			}

		}


		double getPolarizacao2(double Rx, double Ry, double Rc, double Re, double Vcc) {
			double Vce;
			double Ib;
			double Ic;

			if (Vce > 0.7) {
				Ic = 19 * (10 * Rx * Vcc - 7 * (Rx + Ry) )/ (191 * Re * (Rx + Ry) + Rx * Ry);
				Vce = Vcc - Rc * Ic - Re * Ic * 191 / 190;
				return 1;
			}
			else if (Ib > 0.0) {
				Ib = (Vcc * 25 * (Rc * Rx - Re * Ry) - 18 * Rc * (Rx + Ry) - 13 * Re * (Rx + Ry)) / 25 * (Re * Rc * (Rx + Ry) + Rx * Ry * (Re + Rc));
				return 2;
			}
			else {
				return 3;
			}

		}

		double getIb(double Rx, double Ry, double Rc, double Re, double Vcc, double pol) {
			double Ib;
			if (pol == 1)
			{
				Ib = (10 * Rx * Vcc - 7 * (Rx + Ry)) / (10 * (191 * Re * (Rx + Ry) + Rx * Ry));
			}
			else if (pol == 2)
			{
				Ib = (Vcc * 25 * (Rc * Rx - Re * Ry) - 18 * Rc * (Rx + Ry) - 13 * Re * (Rx + Ry)) / 25 * (Re * Rc * (Rx + Ry) + Rx * Ry * (Re + Rc));
			}
			else
			{
				Ib = 0.0;
			}
			return Ib;
		}

		double getIc(double Rx, double Ry, double Rc, double Re, double Vcc, double pol) {

			double Ic;

			if (pol == 1)
			{
				Ic = 19 * (10 * Rx * Vcc - 7 * (Rx + Ry)) / (191 * Re * (Rx + Ry) + Rx * Ry);
			}
			else if (pol == 2)
			{
				Ic = (Vcc * 25 * Ry * (Rx + Re) - 5 * Rx * Ry + 13 * Re * (Rx + Ry)) / 25 * (Re * Rc * (Rx + Ry) + Rx * Ry * (Re + Rc));
			}
			else
			{
				Ic = 0.0;
			}
			return Ic;
		}

		double getIe(double Rx, double Ry, double Rc, double Re, double Vcc, double pol) {

			double Ie;

			if (pol == 1)
			{
				Ie = 191 * (10 * Rx * Vcc - 7 * (Rx + Ry) )/ (10 * (191 * Re * (Rx + Ry) + Rx * Ry));

			}
			else if (pol == 2)
			{
				Ie = (Vcc * 25 * (Rc * Rx + Ry * Re) - 5 * Rx * Ry - 18 * Rc * (Rx + Ry)) / 25 * (Re * Rc * (Rx + Ry) + Rx * Ry * (Re + Rc));
				return Ie;
			}
			else
			{
				Ie = 0.0;
				return Ie;
			}

		}

		double getVbe(double Rx, double Ry, double Rc, double Re, double Vcc, double pol) {

			double Vbe;
			if (pol == 1)
			{
				Vbe = 0.7;
				return Vbe;
			}
			else if (pol == 2)
			{
				Vbe = 0.72;
				return Vbe;
			}
			else
			{
				Vbe = (Vcc * Rx) / (Rx + Ry);
				return Vbe;
			}

		}

		double getVce(double Rx, double Ry, double Rc, double Re, double Vcc, double pol) {
			double Vce;
			if (pol == 1)
			{
				Vce = Vcc - (Rc + Re * 191 / 190) * (190 * Rx * Vcc - 133 * (Rx + Ry)) / (191 * (Rx + Ry) * Re + Rx * Ry);
				return Vce;
			}
			else if (pol == 2)
			{
				Vce = 0.2;
				return Vce;
			}
			else
			{
				Vce = Vcc;
				return Vce;
			}

		}

		double getVcb(double Rx, double Ry, double Rc, double Re, double Vcc, double pol) {
			double Vcb;

			if (pol == 1)
			{
				Vcb = Vcc - (Rc + Re * 191 / 190) * (190 * Rx * Vcc - 133 * (Rx + Ry)) / (191 * (Rx + Ry) * Re + Rx * Ry) - 0.7;
				return Vcb;
			}
			else if (pol == 2)
			{
				Vcb = -0.52;
				return Vcb;
			}
			else
			{
				Vcb = (Vcc * Ry) / (Rx + Ry);
				return Vcb;
			}

		}

		double getIb2(double Rb, double Rc, double Vcc, double Vbb, double pol) {
			double Ib;
			if (pol == 1)
			{
				Ib = (Vbb - 0.7) / Rb;
				return Ib;
			}
			else if (pol == 2)
			{
				Ib = (Vbb - 0.72) / Rb;
				return Ib;
			}
			else
			{
				Ib = 0.0;
				return Ib;
			}
		}

		double getIc2(double Rb, double Rc, double Vcc, double Vbb, double pol) {
			double Ic;
			if (pol == 1)
			{
				Ic = 190 * (Vbb - 0.7) / Rb;
				return Ic;
			}
			else if (pol == 2)
			{
				Ic = (Vcc - 0.2) / Rc;
				return Ic;
			}
			else
			{
				Ic = 0.0;
				return Ic;
			}

		}

		double getIe2(double Rb, double Rc, double Vcc, double Vbb, double pol) {
			double Ie;
			double Vbe;
			if (pol == 1)
			{
				Ie = 191 * (Vbb - 0.7) / Rb;
				return Ie;
			}
			else if (pol == 2)
			{
				Ie = (Vbb - 0.72) / Rb + (Vcc - 0.2) / Rc;
				return Ie;
			}
			else
			{
				Ie = 0.0;
				return Ie;
			}

		}

		double getVbe2(double Rb, double Rc, double Vcc, double Vbb, double pol) {

			double Vbe;

			if (pol == 1)
			{
				Vbe = 0.7;
				return Vbe;
			}
			else if (pol == 2)
			{
				Vbe = 0.72;
				return Vbe;
			}
			else
			{
				Vbe = Vbb;
				return Vbe;
			}

		}

		double getVce2(double Rb, double Rc, double Vcc, double Vbb, double pol) {
			double Vce;
			if (pol == 1)
			{
				Vce = Vcc - Rc * 190 * (Vbb - 0.7) / Rb;
				return Vce;
			}
			else if (pol == 2)
			{
				Vce = 0.2;
				return Vce;
			}
			else
			{
				Vce = Vcc;
				return Vce;
			}

		}

		double getVcb2(double Rb, double Rc, double Vcc, double Vbb, double pol) {
			double Vcb;
			if (pol == 1)
			{
				Vcb = Vcc - Rc * 190 * (Vbb - 0.7) / Rb - 0.7;
				return Vcb;
			}
			else if (pol == 2)
			{
				Vcb = -0.52;
				return Vcb;
			}
			else
			{
				Vcb = Vcc - Vbb;
				return Vcb;
			}

		}



private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::ComboBox^ comboBox6;
private: System::Windows::Forms::ComboBox^ comboBox7;
private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::PictureBox^ pictureBox5;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(calctrans::typeid));
			this->menuprincipal = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->botanapol2 = (gcnew System::Windows::Forms::Button());
			this->botprojpol2 = (gcnew System::Windows::Forms::Button());
			this->botanapol1 = (gcnew System::Windows::Forms::Button());
			this->botprojpol1 = (gcnew System::Windows::Forms::Button());
			this->projpol1 = (gcnew System::Windows::Forms::Panel());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->anapol1 = (gcnew System::Windows::Forms::Panel());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->anapol2 = (gcnew System::Windows::Forms::Panel());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->projpol2 = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuprincipal->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->projpol1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->anapol1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->anapol2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->projpol2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// menuprincipal
			// 
			this->menuprincipal->Controls->Add(this->pictureBox2);
			this->menuprincipal->Controls->Add(this->pictureBox1);
			this->menuprincipal->Controls->Add(this->label7);
			this->menuprincipal->Controls->Add(this->label6);
			this->menuprincipal->Controls->Add(this->label5);
			this->menuprincipal->Controls->Add(this->botanapol2);
			this->menuprincipal->Controls->Add(this->botprojpol2);
			this->menuprincipal->Controls->Add(this->botanapol1);
			this->menuprincipal->Controls->Add(this->botprojpol1);
			this->menuprincipal->Dock = System::Windows::Forms::DockStyle::Fill;
			this->menuprincipal->Location = System::Drawing::Point(0, 0);
			this->menuprincipal->Name = L"menuprincipal";
			this->menuprincipal->Size = System::Drawing::Size(484, 503);
			this->menuprincipal->TabIndex = 0;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(98, 49);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(160, 199);
			this->pictureBox2->TabIndex = 47;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(103, 272);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(155, 189);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(155, 464);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(71, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Polarização 2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(151, 251);
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
			this->label5->Location = System::Drawing::Point(138, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(224, 24);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Calculadora de Transistor";
			// 
			// botanapol2
			// 
			this->botanapol2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botanapol2->Location = System::Drawing::Point(287, 372);
			this->botanapol2->Name = L"botanapol2";
			this->botanapol2->Size = System::Drawing::Size(75, 37);
			this->botanapol2->TabIndex = 3;
			this->botanapol2->Text = L"Análise";
			this->botanapol2->UseVisualStyleBackColor = true;
			this->botanapol2->Click += gcnew System::EventHandler(this, &calctrans::button5_Click);
			// 
			// botprojpol2
			// 
			this->botprojpol2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botprojpol2->Location = System::Drawing::Point(287, 328);
			this->botprojpol2->Name = L"botprojpol2";
			this->botprojpol2->Size = System::Drawing::Size(75, 37);
			this->botprojpol2->TabIndex = 2;
			this->botprojpol2->Text = L"Projeto";
			this->botprojpol2->UseVisualStyleBackColor = true;
			this->botprojpol2->Click += gcnew System::EventHandler(this, &calctrans::button4_Click);
			// 
			// botanapol1
			// 
			this->botanapol1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botanapol1->Location = System::Drawing::Point(287, 143);
			this->botanapol1->Name = L"botanapol1";
			this->botanapol1->Size = System::Drawing::Size(75, 37);
			this->botanapol1->TabIndex = 1;
			this->botanapol1->Text = L"Análise";
			this->botanapol1->UseVisualStyleBackColor = true;
			this->botanapol1->Click += gcnew System::EventHandler(this, &calctrans::button3_Click);
			// 
			// botprojpol1
			// 
			this->botprojpol1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botprojpol1->Location = System::Drawing::Point(287, 100);
			this->botprojpol1->Name = L"botprojpol1";
			this->botprojpol1->Size = System::Drawing::Size(75, 37);
			this->botprojpol1->TabIndex = 0;
			this->botprojpol1->Text = L"Projeto";
			this->botprojpol1->UseVisualStyleBackColor = true;
			this->botprojpol1->Click += gcnew System::EventHandler(this, &calctrans::button1_Click);
			// 
			// projpol1
			// 
			this->projpol1->Controls->Add(this->label60);
			this->projpol1->Controls->Add(this->label59);
			this->projpol1->Controls->Add(this->label57);
			this->projpol1->Controls->Add(this->label47);
			this->projpol1->Controls->Add(this->label58);
			this->projpol1->Controls->Add(this->pictureBox5);
			this->projpol1->Controls->Add(this->label10);
			this->projpol1->Controls->Add(this->label18);
			this->projpol1->Controls->Add(this->label43);
			this->projpol1->Controls->Add(this->label44);
			this->projpol1->Controls->Add(this->label45);
			this->projpol1->Controls->Add(this->label46);
			this->projpol1->Controls->Add(this->label48);
			this->projpol1->Controls->Add(this->label49);
			this->projpol1->Controls->Add(this->label50);
			this->projpol1->Controls->Add(this->label51);
			this->projpol1->Controls->Add(this->label52);
			this->projpol1->Controls->Add(this->label53);
			this->projpol1->Controls->Add(this->label54);
			this->projpol1->Controls->Add(this->label55);
			this->projpol1->Controls->Add(this->comboBox6);
			this->projpol1->Controls->Add(this->comboBox7);
			this->projpol1->Controls->Add(this->label56);
			this->projpol1->Controls->Add(this->button2);
			this->projpol1->Controls->Add(this->label1);
			this->projpol1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->projpol1->Location = System::Drawing::Point(0, 0);
			this->projpol1->Name = L"projpol1";
			this->projpol1->Size = System::Drawing::Size(484, 503);
			this->projpol1->TabIndex = 3;
			this->projpol1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &calctrans::projpol1_Paint);
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label60->Location = System::Drawing::Point(267, 326);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(14, 15);
			this->label60->TabIndex = 51;
			this->label60->Text = L"0";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label59->Location = System::Drawing::Point(267, 302);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(14, 15);
			this->label59->TabIndex = 50;
			this->label59->Text = L"0";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label57->Location = System::Drawing::Point(231, 325);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(17, 15);
			this->label57->TabIndex = 49;
			this->label57->Text = L"Ie";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(231, 302);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(17, 15);
			this->label47->TabIndex = 48;
			this->label47->Text = L"Ib";
			this->label47->Click += gcnew System::EventHandler(this, &calctrans::label47_Click);
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label58->Location = System::Drawing::Point(267, 163);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(14, 15);
			this->label58->TabIndex = 47;
			this->label58->Text = L"0";
			this->label58->Click += gcnew System::EventHandler(this, &calctrans::label58_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(21, 114);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(156, 205);
			this->pictureBox5->TabIndex = 46;
			this->pictureBox5->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(267, 280);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(14, 15);
			this->label10->TabIndex = 45;
			this->label10->Text = L"0";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(267, 262);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(14, 15);
			this->label18->TabIndex = 44;
			this->label18->Text = L"0";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(267, 244);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(14, 15);
			this->label43->TabIndex = 43;
			this->label43->Text = L"0";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(267, 222);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(14, 15);
			this->label44->TabIndex = 42;
			this->label44->Text = L"0";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(266, 201);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(14, 15);
			this->label45->TabIndex = 41;
			this->label45->Text = L"0";
			this->label45->Click += gcnew System::EventHandler(this, &calctrans::label45_Click);
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(266, 184);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(14, 15);
			this->label46->TabIndex = 40;
			this->label46->Text = L"0";
			this->label46->Click += gcnew System::EventHandler(this, &calctrans::label46_Click);
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->Location = System::Drawing::Point(231, 222);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(21, 15);
			this->label48->TabIndex = 38;
			this->label48->Text = L"Ry";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->Location = System::Drawing::Point(231, 201);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(22, 15);
			this->label49->TabIndex = 37;
			this->label49->Text = L"Rx";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->Location = System::Drawing::Point(231, 280);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(32, 15);
			this->label50->TabIndex = 36;
			this->label50->Text = L"Beta";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->Location = System::Drawing::Point(231, 262);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(28, 15);
			this->label51->TabIndex = 35;
			this->label51->Text = L"Vbe";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->Location = System::Drawing::Point(231, 244);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(27, 15);
			this->label52->TabIndex = 34;
			this->label52->Text = L"Vcb";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label53->Location = System::Drawing::Point(231, 184);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(22, 15);
			this->label53->TabIndex = 33;
			this->label53->Text = L"Rc";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->Location = System::Drawing::Point(231, 163);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(23, 15);
			this->label54->TabIndex = 32;
			this->label54->Text = L"Re";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label55->Location = System::Drawing::Point(67, 385);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(26, 15);
			this->label55->TabIndex = 31;
			this->label55->Text = L"Vcc";
			// 
			// comboBox6
			// 
			this->comboBox6->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"10", L"10.5", L"11", L"11.5", L"12", L"12.5",
					L"13", L"13.5", L"14", L"14.5", L"15", L"15.5", L"16", L"16.5", L"17", L"17.5", L"18", L"18.5", L"19", L"19.5", L"20"
			});
			this->comboBox6->Location = System::Drawing::Point(103, 379);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(73, 21);
			this->comboBox6->TabIndex = 30;
			this->comboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &calctrans::comboBox6_SelectedIndexChanged);
			// 
			// comboBox7
			// 
			this->comboBox7->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10"
			});
			this->comboBox7->Location = System::Drawing::Point(103, 352);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(73, 21);
			this->comboBox7->TabIndex = 29;
			this->comboBox7->SelectedIndexChanged += gcnew System::EventHandler(this, &calctrans::comboBox7_SelectedIndexChanged);
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label56->Location = System::Drawing::Point(67, 352);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(18, 15);
			this->label56->TabIndex = 28;
			this->label56->Text = L"IC";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(12, 443);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(79, 34);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Voltar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &calctrans::button2_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(160, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Projeto Polarização 1";
			// 
			// anapol1
			// 
			this->anapol1->Controls->Add(this->textBox9);
			this->anapol1->Controls->Add(this->label84);
			this->anapol1->Controls->Add(this->pictureBox4);
			this->anapol1->Controls->Add(this->label65);
			this->anapol1->Controls->Add(this->label66);
			this->anapol1->Controls->Add(this->label67);
			this->anapol1->Controls->Add(this->label68);
			this->anapol1->Controls->Add(this->label69);
			this->anapol1->Controls->Add(this->label70);
			this->anapol1->Controls->Add(this->label71);
			this->anapol1->Controls->Add(this->label72);
			this->anapol1->Controls->Add(this->label73);
			this->anapol1->Controls->Add(this->label74);
			this->anapol1->Controls->Add(this->label75);
			this->anapol1->Controls->Add(this->label76);
			this->anapol1->Controls->Add(this->label77);
			this->anapol1->Controls->Add(this->label78);
			this->anapol1->Controls->Add(this->label79);
			this->anapol1->Controls->Add(this->button5);
			this->anapol1->Controls->Add(this->textBox1);
			this->anapol1->Controls->Add(this->textBox6);
			this->anapol1->Controls->Add(this->label80);
			this->anapol1->Controls->Add(this->textBox7);
			this->anapol1->Controls->Add(this->textBox8);
			this->anapol1->Controls->Add(this->label81);
			this->anapol1->Controls->Add(this->label82);
			this->anapol1->Controls->Add(this->label83);
			this->anapol1->Controls->Add(this->button6);
			this->anapol1->Controls->Add(this->label2);
			this->anapol1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->anapol1->Location = System::Drawing::Point(0, 0);
			this->anapol1->Name = L"anapol1";
			this->anapol1->Size = System::Drawing::Size(484, 503);
			this->anapol1->TabIndex = 4;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(72, 367);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 97;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &calctrans::textBox9_TextChanged);
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label84->Location = System::Drawing::Point(45, 368);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(26, 15);
			this->label84->TabIndex = 96;
			this->label84->Text = L"Vcc";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(21, 45);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(156, 205);
			this->pictureBox4->TabIndex = 95;
			this->pictureBox4->TabStop = false;
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label65->Location = System::Drawing::Point(304, 127);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(10, 15);
			this->label65->TabIndex = 94;
			this->label65->Text = L" ";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label66->Location = System::Drawing::Point(314, 127);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(0, 15);
			this->label66->TabIndex = 93;
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label67->Location = System::Drawing::Point(229, 127);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(75, 15);
			this->label67->TabIndex = 92;
			this->label67->Text = L"Polarização:";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label68->Location = System::Drawing::Point(229, 344);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(27, 15);
			this->label68->TabIndex = 91;
			this->label68->Text = L"Vcb";
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label69->Location = System::Drawing::Point(264, 344);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(14, 15);
			this->label69->TabIndex = 90;
			this->label69->Text = L"0";
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label70->Location = System::Drawing::Point(264, 307);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(14, 15);
			this->label70->TabIndex = 89;
			this->label70->Text = L"0";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label71->Location = System::Drawing::Point(230, 307);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(27, 15);
			this->label71->TabIndex = 88;
			this->label71->Text = L"Vce";
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label72->Location = System::Drawing::Point(264, 267);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(14, 15);
			this->label72->TabIndex = 87;
			this->label72->Text = L"0";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label73->Location = System::Drawing::Point(264, 229);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(14, 15);
			this->label73->TabIndex = 86;
			this->label73->Text = L"0";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label74->Location = System::Drawing::Point(230, 267);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(28, 15);
			this->label74->TabIndex = 85;
			this->label74->Text = L"Vbe";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label75->Location = System::Drawing::Point(230, 229);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(17, 15);
			this->label75->TabIndex = 84;
			this->label75->Text = L"Ie";
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label76->Location = System::Drawing::Point(264, 200);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(14, 15);
			this->label76->TabIndex = 83;
			this->label76->Text = L"0";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label77->Location = System::Drawing::Point(264, 165);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(14, 15);
			this->label77->TabIndex = 82;
			this->label77->Text = L"0";
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label78->Location = System::Drawing::Point(229, 197);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(16, 15);
			this->label78->TabIndex = 81;
			this->label78->Text = L"Ic";
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label79->Location = System::Drawing::Point(229, 165);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(17, 15);
			this->label79->TabIndex = 80;
			this->label79->Text = L"Ib";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(84, 393);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(64, 24);
			this->button5->TabIndex = 79;
			this->button5->Text = L"Calcular";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &calctrans::button5_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(72, 336);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 78;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &calctrans::textBox1_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(72, 314);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 77;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &calctrans::textBox6_TextChanged);
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label80->Location = System::Drawing::Point(46, 339);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(23, 15);
			this->label80->TabIndex = 76;
			this->label80->Text = L"Re";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(72, 286);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 75;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &calctrans::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(72, 260);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 74;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &calctrans::textBox8_TextChanged);
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label81->Location = System::Drawing::Point(46, 315);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(22, 15);
			this->label81->TabIndex = 72;
			this->label81->Text = L"Rc";
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label82->Location = System::Drawing::Point(46, 287);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(21, 15);
			this->label82->TabIndex = 71;
			this->label82->Text = L"Ry";
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label83->Location = System::Drawing::Point(45, 261);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(22, 15);
			this->label83->TabIndex = 70;
			this->label83->Text = L"Rx";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(21, 443);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 34);
			this->button6->TabIndex = 1;
			this->button6->Text = L"Voltar";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &calctrans::button6_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(141, 9);
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
			this->anapol2->Controls->Add(this->label35);
			this->anapol2->Controls->Add(this->label34);
			this->anapol2->Controls->Add(this->label33);
			this->anapol2->Controls->Add(this->label32);
			this->anapol2->Controls->Add(this->label31);
			this->anapol2->Controls->Add(this->label30);
			this->anapol2->Controls->Add(this->label29);
			this->anapol2->Controls->Add(this->label28);
			this->anapol2->Controls->Add(this->label27);
			this->anapol2->Controls->Add(this->label26);
			this->anapol2->Controls->Add(this->label21);
			this->anapol2->Controls->Add(this->button3);
			this->anapol2->Controls->Add(this->textBox5);
			this->anapol2->Controls->Add(this->textBox4);
			this->anapol2->Controls->Add(this->label22);
			this->anapol2->Controls->Add(this->textBox3);
			this->anapol2->Controls->Add(this->textBox2);
			this->anapol2->Controls->Add(this->pictureBox6);
			this->anapol2->Controls->Add(this->label38);
			this->anapol2->Controls->Add(this->label36);
			this->anapol2->Controls->Add(this->label37);
			this->anapol2->Controls->Add(this->button4);
			this->anapol2->Controls->Add(this->label3);
			this->anapol2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->anapol2->Location = System::Drawing::Point(0, 0);
			this->anapol2->Name = L"anapol2";
			this->anapol2->Size = System::Drawing::Size(484, 503);
			this->anapol2->TabIndex = 5;
			this->anapol2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &calctrans::anapol2_Paint);
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(304, 103);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(10, 15);
			this->label42->TabIndex = 68;
			this->label42->Text = L" ";
			this->label42->Click += gcnew System::EventHandler(this, &calctrans::label42_Click);
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(314, 103);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(0, 15);
			this->label41->TabIndex = 67;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(229, 103);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(75, 15);
			this->label40->TabIndex = 66;
			this->label40->Text = L"Polarização:";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(229, 320);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(27, 15);
			this->label39->TabIndex = 65;
			this->label39->Text = L"Vcb";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(264, 320);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(14, 15);
			this->label35->TabIndex = 64;
			this->label35->Text = L"0";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(264, 283);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(14, 15);
			this->label34->TabIndex = 63;
			this->label34->Text = L"0";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(230, 283);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(27, 15);
			this->label33->TabIndex = 62;
			this->label33->Text = L"Vce";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(264, 243);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(14, 15);
			this->label32->TabIndex = 61;
			this->label32->Text = L"0";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(264, 205);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(14, 15);
			this->label31->TabIndex = 60;
			this->label31->Text = L"0";
			this->label31->Click += gcnew System::EventHandler(this, &calctrans::label31_Click);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(230, 243);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(28, 15);
			this->label30->TabIndex = 59;
			this->label30->Text = L"Vbe";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(230, 205);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(17, 15);
			this->label29->TabIndex = 58;
			this->label29->Text = L"Ie";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(264, 176);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(14, 15);
			this->label28->TabIndex = 57;
			this->label28->Text = L"0";
			this->label28->Click += gcnew System::EventHandler(this, &calctrans::label28_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(264, 141);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(14, 15);
			this->label27->TabIndex = 56;
			this->label27->Text = L"0";
			this->label27->Click += gcnew System::EventHandler(this, &calctrans::label27_Click);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(229, 173);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(16, 15);
			this->label26->TabIndex = 55;
			this->label26->Text = L"Ic";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(229, 141);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(17, 15);
			this->label21->TabIndex = 54;
			this->label21->Text = L"Ib";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(98, 368);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(64, 24);
			this->button3->TabIndex = 53;
			this->button3->Text = L"Calcular";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &calctrans::button3_Click_1);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(77, 332);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 52;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &calctrans::textBox5_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(77, 293);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 50;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &calctrans::textBox4_TextChanged);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(49, 337);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(28, 15);
			this->label22->TabIndex = 49;
			this->label22->Text = L"Vbb";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(77, 267);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 48;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &calctrans::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(77, 232);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 47;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &calctrans::textBox2_TextChanged);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(21, 39);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(155, 189);
			this->pictureBox6->TabIndex = 44;
			this->pictureBox6->TabStop = false;
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
			this->label37->Click += gcnew System::EventHandler(this, &calctrans::label37_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(21, 443);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 34);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Voltar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &calctrans::button4_Click_2);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(157, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(189, 24);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Análise Polarização 2";
			// 
			// projpol2
			// 
			this->projpol2->Controls->Add(this->label19);
			this->projpol2->Controls->Add(this->label17);
			this->projpol2->Controls->Add(this->label8);
			this->projpol2->Controls->Add(this->label9);
			this->projpol2->Controls->Add(this->label11);
			this->projpol2->Controls->Add(this->label12);
			this->projpol2->Controls->Add(this->label13);
			this->projpol2->Controls->Add(this->label14);
			this->projpol2->Controls->Add(this->label15);
			this->projpol2->Controls->Add(this->label16);
			this->projpol2->Controls->Add(this->label20);
			this->projpol2->Controls->Add(this->label23);
			this->projpol2->Controls->Add(this->label24);
			this->projpol2->Controls->Add(this->label25);
			this->projpol2->Controls->Add(this->label61);
			this->projpol2->Controls->Add(this->label62);
			this->projpol2->Controls->Add(this->label63);
			this->projpol2->Controls->Add(this->comboBox1);
			this->projpol2->Controls->Add(this->comboBox2);
			this->projpol2->Controls->Add(this->label64);
			this->projpol2->Controls->Add(this->pictureBox3);
			this->projpol2->Controls->Add(this->button1);
			this->projpol2->Controls->Add(this->label4);
			this->projpol2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->projpol2->Location = System::Drawing::Point(0, 0);
			this->projpol2->Name = L"projpol2";
			this->projpol2->Size = System::Drawing::Size(484, 503);
			this->projpol2->TabIndex = 7;
			this->projpol2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &calctrans::projpol2_Paint);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(255, 329);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(14, 15);
			this->label19->TabIndex = 76;
			this->label19->Text = L"0";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(220, 328);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(28, 15);
			this->label17->TabIndex = 75;
			this->label17->Text = L"Vbb";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(256, 304);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(14, 15);
			this->label8->TabIndex = 74;
			this->label8->Text = L"0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(256, 280);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(14, 15);
			this->label9->TabIndex = 73;
			this->label9->Text = L"0";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(220, 303);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(17, 15);
			this->label11->TabIndex = 72;
			this->label11->Text = L"Ie";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(220, 280);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(17, 15);
			this->label12->TabIndex = 71;
			this->label12->Text = L"Ib";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(256, 181);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(14, 15);
			this->label13->TabIndex = 70;
			this->label13->Text = L"0";
			this->label13->Click += gcnew System::EventHandler(this, &calctrans::label13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(256, 258);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(14, 15);
			this->label14->TabIndex = 69;
			this->label14->Text = L"0";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(256, 240);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(14, 15);
			this->label15->TabIndex = 68;
			this->label15->Text = L"0";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(256, 222);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(14, 15);
			this->label16->TabIndex = 67;
			this->label16->Text = L"0";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(255, 202);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(14, 15);
			this->label20->TabIndex = 64;
			this->label20->Text = L"0";
			this->label20->Click += gcnew System::EventHandler(this, &calctrans::label20_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(220, 258);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(32, 15);
			this->label23->TabIndex = 61;
			this->label23->Text = L"Beta";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(220, 240);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(28, 15);
			this->label24->TabIndex = 60;
			this->label24->Text = L"Vbe";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(220, 222);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(27, 15);
			this->label25->TabIndex = 59;
			this->label25->Text = L"Vcb";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label61->Location = System::Drawing::Point(220, 202);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(22, 15);
			this->label61->TabIndex = 58;
			this->label61->Text = L"Rc";
			this->label61->Click += gcnew System::EventHandler(this, &calctrans::label61_Click);
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label62->Location = System::Drawing::Point(220, 181);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(23, 15);
			this->label62->TabIndex = 57;
			this->label62->Text = L"Rb";
			this->label62->Click += gcnew System::EventHandler(this, &calctrans::label62_Click);
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label63->Location = System::Drawing::Point(68, 374);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(26, 15);
			this->label63->TabIndex = 56;
			this->label63->Text = L"Vcc";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"10", L"10.5", L"11", L"11.5", L"12", L"12.5",
					L"13", L"13.5", L"14", L"14.5", L"15", L"15.5", L"16", L"16.5", L"17", L"17.5", L"18", L"18.5", L"19", L"19.5", L"20"
			});
			this->comboBox1->Location = System::Drawing::Point(104, 368);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(73, 21);
			this->comboBox1->TabIndex = 55;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &calctrans::comboBox1_SelectedIndexChanged_1);
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10"
			});
			this->comboBox2->Location = System::Drawing::Point(104, 341);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(73, 21);
			this->comboBox2->TabIndex = 54;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &calctrans::comboBox2_SelectedIndexChanged_1);
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->Location = System::Drawing::Point(68, 341);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(18, 15);
			this->label64->TabIndex = 53;
			this->label64->Text = L"IC";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(22, 137);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(155, 189);
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(21, 452);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 34);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Voltar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &calctrans::button1_Click_2);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(150, 29);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(186, 24);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Projeto Polarização 2";
			// 
			// calctrans
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 503);
			this->Controls->Add(this->menuprincipal);
			this->Controls->Add(this->projpol2);
			this->Controls->Add(this->anapol2);
			this->Controls->Add(this->anapol1);
			this->Controls->Add(this->projpol1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(388, 447);
			this->Name = L"calctrans";
			this->Text = L"Calculadora de Transistor";
			this->Load += gcnew System::EventHandler(this, &calctrans::MyForm_Load);
			this->menuprincipal->ResumeLayout(false);
			this->menuprincipal->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->projpol1->ResumeLayout(false);
			this->projpol1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->anapol1->ResumeLayout(false);
			this->anapol1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->anapol2->ResumeLayout(false);
			this->anapol2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
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
	this->label9->Text = L"0";
	this->label8->Text = L"0";
	this->label13->Text = L"0";
	this->label20->Text = L"0";
	this->label16->Text = L"0";
	this->label15->Text = L"0";
	this->label14->Text = L"0";
	this->label19->Text = L"0";
	textBox2->Text = L"";
	textBox3->Text = L"";
	textBox4->Text = L"";
	textBox5->Text = L"";
	projpol2->Hide();

	// Mostrar o segundo painel
	menuprincipal->Show();
	menuprincipal->BringToFront();
}
private: System::Void button4_Click_2(System::Object^ sender, System::EventArgs^ e) {

	this->label42->Text = L"";
	this->label27->Text = L"0";
	this->label28->Text = L"0";
	this->label28->Text = L"0";
	this->label31->Text = L"0";
	this->label32->Text = L"0";
	this->label34->Text = L"0";
	this->label35->Text = L"0";
	this->label19->Text = L"0";
	textBox2->Text = L"";
	textBox3->Text = L"";
	textBox4->Text = L"";
	textBox5->Text = L"";
	anapol2->Hide();

	// Mostrar o segundo painel
	menuprincipal->Show();
	menuprincipal->BringToFront();
}
private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->label65->Text = L"";
	this->label77->Text = L"0";
	this->label76->Text = L"0";
	this->label73->Text = L"0";
	this->label72->Text = L"0";
	this->label70->Text = L"0";
	this->label69->Text = L"0";
	this->label35->Text = L"0";
	this->label19->Text = L"0";
	textBox8->Text = L"";
	textBox7->Text = L"";
	textBox6->Text = L"";
	textBox1->Text = L"";
	textBox9->Text = L"";

	anapol1->Hide();

	// Mostrar o segundo painel
	menuprincipal->Show();
	menuprincipal->BringToFront();

}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	comboBox7->SelectedIndex = -1;
	comboBox6->SelectedIndex = -1;
	this->label58->Text = "0";
	this->label46->Text = "0";
	this->label45->Text = "0";
	this->label44->Text = "0";
	this->label43->Text = "0";
	this->label18->Text = "0";
	this->label10->Text = "0";
	this->label59->Text = "0";
	this->label60->Text = "0";
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
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	


}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void projpol2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void projpol1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void comboBox7_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		
	
	if (comboBox7->SelectedItem != nullptr) {
		int i = comboBox7->SelectedIndex;
		this->label59->Text = System::Convert::ToString(findIb(i)) + L" µA";
		this->label60->Text = System::Convert::ToString(findIe(i)) + L" mA";

		if (comboBox6->SelectedItem != nullptr) {

			// Obtém o índice do item selecionado
			
			int j = comboBox6->SelectedIndex;
			this->label58->Text = System::Convert::ToString(findRe(i)) + L" kΩ";
			this->label46->Text = System::Convert::ToString(findRc(i, j)) + L" kΩ";
			this->label45->Text = System::Convert::ToString(findRy(i, j)) + L" kΩ";
			this->label44->Text = System::Convert::ToString(findRx(i, j)) + L" kΩ";
			this->label43->Text = System::Convert::ToString(findVcb(i)) + L" V";
			this->label18->Text = System::Convert::ToString(findVbe(i)) + L" V";
			this->label10->Text = System::Convert::ToString(findBeta(i));
			

		}
		

	}	
		
}
private: System::Void comboBox6_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
	if (comboBox7->SelectedItem != nullptr) {
		int i = comboBox7->SelectedIndex;
		this->label59->Text = System::Convert::ToString(findIb(i)) + " mA";
		this->label60->Text = System::Convert::ToString(findIe(i)) + " µA";

		if (comboBox6->SelectedItem != nullptr) {

			// Obtém o índice do item selecionado
			int i = comboBox7->SelectedIndex;
			int j = comboBox6->SelectedIndex;
			this->label58->Text = System::Convert::ToString(findRe(i)) + L" kΩ";
			this->label46->Text = System::Convert::ToString(findRc(i, j)) + L" kΩ";
			this->label45->Text = System::Convert::ToString(findRy(i, j)) + L" kΩ";
			this->label44->Text = System::Convert::ToString(findRx(i, j)) + L" kΩ";
			this->label43->Text = System::Convert::ToString(findVcb(i)) + L" V";
			this->label18->Text = System::Convert::ToString(findVbe(i)) + L" V";
			this->label10->Text = System::Convert::ToString(findBeta(i));


		}


	}


}

private: System::Void label58_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label46_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label45_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label47_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox2->SelectedItem != nullptr) {
		int i = comboBox2->SelectedIndex;
		this->label9->Text = System::Convert::ToString(findIb(i)) + L" µA";
		this->label8->Text = System::Convert::ToString(findIe(i)) + L" mA";

		if (comboBox1->SelectedItem != nullptr) {

			// Obtém o índice do item selecionado

			int j = comboBox1->SelectedIndex;
			this->label13->Text = System::Convert::ToString(findRb(i,j)) + L" kΩ";
			this->label20->Text = System::Convert::ToString(findRc2(i, j)) + L" kΩ";
			this->label16->Text = System::Convert::ToString(findVcb(i)) + L" V";
			this->label15->Text = System::Convert::ToString(findVbe(i)) + L" V";
			this->label14->Text = System::Convert::ToString(findBeta(i));
			this->label19->Text = System::Convert::ToString(findVbb(j))+ L" V";

		}


	}
}
private: System::Void label62_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label61_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox2->SelectedItem != nullptr) {
		int i = comboBox2->SelectedIndex;
		this->label9->Text = System::Convert::ToString(findIb(i)) + L" µA";
		this->label8->Text = System::Convert::ToString(findIe(i)) + L" mA";

		if (comboBox1->SelectedItem != nullptr) {

			// Obtém o índice do item selecionado

			int j = comboBox1->SelectedIndex;
			this->label13->Text = System::Convert::ToString(findRb(i, j)) + L" kΩ";
			this->label20->Text = System::Convert::ToString(findRc2(i, j)) + L" kΩ";
			this->label16->Text = System::Convert::ToString(findVcb(i)) + L" V";
			this->label15->Text = System::Convert::ToString(findVbe(i)) + L" V";
			this->label14->Text = System::Convert::ToString(findBeta(i));
			this->label19->Text = System::Convert::ToString(findVbb(j)) + L" V";

		}


	}
}

private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	bool todasAsCaixasContemNumeros =
		System::Text::RegularExpressions::Regex::IsMatch(textBox2->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox3->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox4->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox5->Text, "[0-9.]");

	// Habilita ou desabilita o botão com base na verificação
	this->button3->Enabled = todasAsCaixasContemNumeros;
	
	if (System::Text::RegularExpressions::Regex::IsMatch(textBox4->Text, "[^0-9]")) {
		// Se houver caracteres não numéricos, remove-os
		textBox4->Text = System::Text::RegularExpressions::Regex::Replace(textBox4->Text, "[^0-9]", "");
	}

	// Armazena o valor na variável Rc (assumindo que Rc é uma variável declarada anteriormente na classe)
	try {
		// Converte o texto para um número inteiro e armazena em Rc
		
		// Verifica se todas as caixas de texto contêm números
		bool todasAsCaixasContemNumeros =
			System::Text::RegularExpressions::Regex::IsMatch(textBox2->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox3->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox4->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox5->Text, "[0-9.]");

		// Habilita ou desabilita o botão com base na verificação
		this->button3->Enabled = todasAsCaixasContemNumeros;
	}
	catch (System::FormatException^) {
		// Lidar com o caso em que o texto não é um número válido
		// Aqui você pode exibir uma mensagem de erro ou tomar outra ação apropriada
	}
	
	
	
	
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
	bool todasAsCaixasContemNumeros =
		System::Text::RegularExpressions::Regex::IsMatch(textBox2->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox3->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox4->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox5->Text, "[0-9.]");

	// Habilita ou desabilita o botão com base na verificação
	this->button3->Enabled = todasAsCaixasContemNumeros;

	if (System::Text::RegularExpressions::Regex::IsMatch(textBox2->Text, "[^0-9]")) {
		// Se houver caracteres não numéricos, remove-os
		textBox2->Text = System::Text::RegularExpressions::Regex::Replace(textBox2->Text, "[^0-9]", "");
	}

	// Armazena o valor na variável Rc (assumindo que Rc é uma variável declarada anteriormente na classe)
	try {
		// Converte o texto para um número inteiro e armazena em Rc
		
		// Verifica se todas as caixas de texto contêm números
		bool todasAsCaixasContemNumeros =
			System::Text::RegularExpressions::Regex::IsMatch(textBox2->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox3->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox4->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox5->Text, "[0-9.]");

		// Habilita ou desabilita o botão com base na verificação
		this->button3->Enabled = todasAsCaixasContemNumeros;
	}
	catch (System::FormatException^) {
		// Lidar com o caso em que o texto não é um número válido
		// Aqui você pode exibir uma mensagem de erro ou tomar outra ação apropriada
	}


	
	
	
	
	
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {

	this->label9->Text = L"0";
	this->label8->Text = L"0";
	this->label13->Text = L"0";
	this->label20->Text = L"0";
	this->label16->Text = L"0";
	this->label15->Text = L"0";
	this->label14->Text = L"0";
	this->label19->Text = L"0";

	double Rc = System::Convert::ToDouble(textBox2->Text);
	double Rb = System::Convert::ToDouble(textBox3->Text);
	double Vbb = System::Convert::ToDouble(textBox5->Text);
	double Vcc = System::Convert::ToDouble(textBox4->Text);
	double Pol = getPolarizacao(Rb, Rc, Vbb, Vcc);

	if (Pol == 1) {
		this->label42->Text = L"Região Ativa";	
	}

	else if (Pol == 2) {
		this->label42->Text = L"Região de Saturação";
	}
	else {
		this->label42->Text = L"Região de Corte";
	}
	
	this->label27->Text = System::Convert::ToString(getIb2(Rb,Rc,Vcc,Vbb,Pol)) + L"A";
	this->label28->Text = System::Convert::ToString(getIc2(Rb, Rc, Vcc, Vbb, Pol)) + L"A";
	this->label31->Text = System::Convert::ToString(getIe2(Rb, Rc, Vcc, Vbb, Pol)) + L"A";
	this->label32->Text = System::Convert::ToString(getVbe2(Rb, Rc, Vcc, Vbb, Pol)) + L"V";
	this->label34->Text = System::Convert::ToString(getVce2(Rb, Rc, Vcc, Vbb, Pol)) + L"V";
	this->label35->Text = System::Convert::ToString(getVcb2(Rb, Rc, Vcc, Vbb, Pol)) + L"V";




}

	  



private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	

	bool todasAsCaixasContemNumeros =
		System::Text::RegularExpressions::Regex::IsMatch(textBox2->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox3->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox4->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox5->Text, "[0-9.]");

	// Habilita ou desabilita o botão com base na verificação
	this->button3->Enabled = todasAsCaixasContemNumeros;
	
	if (System::Text::RegularExpressions::Regex::IsMatch(textBox3->Text, "[^0-9]")) {
		// Se houver caracteres não numéricos, remove-os
		textBox3->Text = System::Text::RegularExpressions::Regex::Replace(textBox3->Text, "[^0-9]", "");
	}

	// Armazena o valor na variável Rc (assumindo que Rc é uma variável declarada anteriormente na classe)
	try {
		
		// Verifica se todas as caixas de texto contêm números
		bool todasAsCaixasContemNumeros =
			System::Text::RegularExpressions::Regex::IsMatch(textBox2->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox3->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox4->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox5->Text, "[0-9.]");

		// Habilita ou desabilita o botão com base na verificação
		this->button3->Enabled = todasAsCaixasContemNumeros;
	}
	catch (System::FormatException^) {
		// Lidar com o caso em que o texto não é um número válido
		// Aqui você pode exibir uma mensagem de erro ou tomar outra ação apropriada
	}

	
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	bool todasAsCaixasContemNumeros =
		System::Text::RegularExpressions::Regex::IsMatch(textBox2->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox3->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox4->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox5->Text, "[0-9.]");

	// Habilita ou desabilita o botão com base na verificação
	this->button3->Enabled = todasAsCaixasContemNumeros;


	if (System::Text::RegularExpressions::Regex::IsMatch(textBox5->Text, "[^0-9]")) {
		// Se houver caracteres não numéricos, remove-os
		textBox5->Text = System::Text::RegularExpressions::Regex::Replace(textBox5->Text, "[^0-9]", "");
	}

	// Armazena o valor na variável Rc (assumindo que Rc é uma variável declarada anteriormente na classe)
	try {
		// Converte o texto para um número inteiro e armazena em Rc
		
		// Verifica se todas as caixas de texto contêm números
		bool todasAsCaixasContemNumeros =
			System::Text::RegularExpressions::Regex::IsMatch(textBox2->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox3->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox4->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox5->Text, "[0-9.]");

		// Habilita ou desabilita o botão com base na verificação
		this->button3->Enabled = todasAsCaixasContemNumeros;
	}
	catch (System::FormatException^) {
		// Lidar com o caso em que o texto não é um número válido
		// Aqui você pode exibir uma mensagem de erro ou tomar outra ação apropriada
	}

	
}
private: System::Void label27_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label28_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label31_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label42_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	bool todasAsCaixasContemNumeros =
		System::Text::RegularExpressions::Regex::IsMatch(textBox8->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox7->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox6->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox1->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox9->Text, "[0-9.]");

	// Habilita ou desabilita o botão com base na verificação
	this->button5->Enabled = todasAsCaixasContemNumeros;

	if (System::Text::RegularExpressions::Regex::IsMatch(textBox2->Text, "[^0-9]")) {
		// Se houver caracteres não numéricos, remove-os
		textBox8->Text = System::Text::RegularExpressions::Regex::Replace(textBox8->Text, "[^0-9]", "");
	}

	// Armazena o valor na variável Rc (assumindo que Rc é uma variável declarada anteriormente na classe)
	try {
		// Converte o texto para um número inteiro e armazena em Rc

		// Verifica se todas as caixas de texto contêm números
		bool todasAsCaixasContemNumeros =
			System::Text::RegularExpressions::Regex::IsMatch(textBox8->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox7->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox6->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox1->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox9->Text, "[0-9.]");

		// Habilita ou desabilita o botão com base na verificação
		this->button5->Enabled = todasAsCaixasContemNumeros;
	}
	catch (System::FormatException^) {
		// Lidar com o caso em que o texto não é um número válido
		// Aqui você pode exibir uma mensagem de erro ou tomar outra ação apropriada
	}
}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	bool todasAsCaixasContemNumeros =
		System::Text::RegularExpressions::Regex::IsMatch(textBox8->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox7->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox6->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox1->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox9->Text, "[0-9.]");

	// Habilita ou desabilita o botão com base na verificação
	this->button5->Enabled = todasAsCaixasContemNumeros;

	if (System::Text::RegularExpressions::Regex::IsMatch(textBox2->Text, "[^0-9]")) {
		// Se houver caracteres não numéricos, remove-os
		textBox9->Text = System::Text::RegularExpressions::Regex::Replace(textBox9->Text, "[^0-9]", "");
	}

	// Armazena o valor na variável Rc (assumindo que Rc é uma variável declarada anteriormente na classe)
	try {
		// Converte o texto para um número inteiro e armazena em Rc

		// Verifica se todas as caixas de texto contêm números
		bool todasAsCaixasContemNumeros =
			System::Text::RegularExpressions::Regex::IsMatch(textBox8->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox7->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox6->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox1->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox9->Text, "[0-9.]");

		// Habilita ou desabilita o botão com base na verificação
		this->button5->Enabled = todasAsCaixasContemNumeros;
	}
	catch (System::FormatException^) {
		// Lidar com o caso em que o texto não é um número válido
		// Aqui você pode exibir uma mensagem de erro ou tomar outra ação apropriada
	}
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	bool todasAsCaixasContemNumeros =
		System::Text::RegularExpressions::Regex::IsMatch(textBox8->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox7->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox6->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox1->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox9->Text, "[0-9.]");

	// Habilita ou desabilita o botão com base na verificação
	this->button5->Enabled = todasAsCaixasContemNumeros;

	if (System::Text::RegularExpressions::Regex::IsMatch(textBox6->Text, "[^0-9]")) {
		// Se houver caracteres não numéricos, remove-os
		textBox6->Text = System::Text::RegularExpressions::Regex::Replace(textBox6->Text, "[^0-9]", "");
	}

	// Armazena o valor na variável Rc (assumindo que Rc é uma variável declarada anteriormente na classe)
	try {
		// Converte o texto para um número inteiro e armazena em Rc

		// Verifica se todas as caixas de texto contêm números
		bool todasAsCaixasContemNumeros =
			System::Text::RegularExpressions::Regex::IsMatch(textBox8->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox7->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox6->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox1->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox9->Text, "[0-9.]");

		// Habilita ou desabilita o botão com base na verificação
		this->button5->Enabled = todasAsCaixasContemNumeros;
	}
	catch (System::FormatException^) {
		// Lidar com o caso em que o texto não é um número válido
		// Aqui você pode exibir uma mensagem de erro ou tomar outra ação apropriada
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	bool todasAsCaixasContemNumeros =
		System::Text::RegularExpressions::Regex::IsMatch(textBox8->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox7->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox6->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox1->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox9->Text, "[0-9.]");

	// Habilita ou desabilita o botão com base na verificação
	this->button5->Enabled = todasAsCaixasContemNumeros;

	if (System::Text::RegularExpressions::Regex::IsMatch(textBox2->Text, "[^0-9]")) {
		// Se houver caracteres não numéricos, remove-os
		textBox1->Text = System::Text::RegularExpressions::Regex::Replace(textBox1->Text, "[^0-9]", "");
	}

	// Armazena o valor na variável Rc (assumindo que Rc é uma variável declarada anteriormente na classe)
	try {
		// Converte o texto para um número inteiro e armazena em Rc

		// Verifica se todas as caixas de texto contêm números
		bool todasAsCaixasContemNumeros =
			System::Text::RegularExpressions::Regex::IsMatch(textBox8->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox7->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox6->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox1->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox9->Text, "[0-9.]");

		// Habilita ou desabilita o botão com base na verificação
		this->button5->Enabled = todasAsCaixasContemNumeros;
	}
	catch (System::FormatException^) {
		// Lidar com o caso em que o texto não é um número válido
		// Aqui você pode exibir uma mensagem de erro ou tomar outra ação apropriada
	}
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	bool todasAsCaixasContemNumeros =
		System::Text::RegularExpressions::Regex::IsMatch(textBox8->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox7->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox6->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox1->Text, "[0-9.]") &&
		System::Text::RegularExpressions::Regex::IsMatch(textBox9->Text, "[0-9.]");

	// Habilita ou desabilita o botão com base na verificação
	this->button5->Enabled = todasAsCaixasContemNumeros;

	if (System::Text::RegularExpressions::Regex::IsMatch(textBox2->Text, "[^0-9]")) {
		// Se houver caracteres não numéricos, remove-os
		textBox7->Text = System::Text::RegularExpressions::Regex::Replace(textBox7->Text, "[^0-9]", "");
	}

	// Armazena o valor na variável Rc (assumindo que Rc é uma variável declarada anteriormente na classe)
	try {
		// Converte o texto para um número inteiro e armazena em Rc

		// Verifica se todas as caixas de texto contêm números
		bool todasAsCaixasContemNumeros =
			System::Text::RegularExpressions::Regex::IsMatch(textBox8->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox7->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox6->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox1->Text, "[0-9.]") &&
			System::Text::RegularExpressions::Regex::IsMatch(textBox9->Text, "[0-9.]");

		// Habilita ou desabilita o botão com base na verificação
		this->button5->Enabled = todasAsCaixasContemNumeros;
	}
	catch (System::FormatException^) {
		// Lidar com o caso em que o texto não é um número válido
		// Aqui você pode exibir uma mensagem de erro ou tomar outra ação apropriada
	}
}
private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->label77->Text = L"0";
	this->label76->Text = L"0";
	this->label73->Text = L"0";
	this->label72->Text = L"0";
	this->label70->Text = L"0";
	this->label69->Text = L"0";

	double Rx = System::Convert::ToDouble(textBox8->Text);
	double Ry = System::Convert::ToDouble(textBox7->Text);
	double Rc = System::Convert::ToDouble(textBox6->Text);
	double Re = System::Convert::ToDouble(textBox1->Text);
	double Vcc = System::Convert::ToDouble(textBox9->Text);
	double Pol = getPolarizacao2(Rx, Ry,Rc,Re, Vcc);

	if (Pol == 1) {
		this->label65->Text = L"Região Ativa";
	}

	else if (Pol == 2) {
		this->label65->Text = L"Região de Saturação";
	}
	else {
		this->label65->Text = L"Região de Corte";
	}

	this->label77->Text = System::Convert::ToString(getIb(Rx,Ry,Rc,Re, Vcc,Pol)) + L"A";
	this->label76->Text = System::Convert::ToString(getIc(Rx, Ry, Rc, Re, Vcc, Pol)) + L"A";
	this->label73->Text = System::Convert::ToString(getIe(Rx, Ry, Rc, Re, Vcc, Pol)) + L"A";
	this->label72->Text = System::Convert::ToString(getVbe(Rx, Ry, Rc, Re, Vcc, Pol)) + L"V";
	this->label70->Text = System::Convert::ToString(getVce(Rx, Ry, Rc, Re, Vcc, Pol)) + L"V";
	this->label69->Text = System::Convert::ToString(getVcb(Rx, Ry, Rc, Re, Vcc, Pol)) + L"V";

}
};
}
