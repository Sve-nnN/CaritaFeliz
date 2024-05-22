#pragma once
#include "Cara.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Summary for Form1
	/// </summary>
	/// 
	/// 
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:

		Form1(void)
		{
			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
			//Cuando se genere el formulario, que aparezcan las figuras en posiciones aleatorias
			Graphics^ g = this->CreateGraphics();
			Cara *cara = new Cara(this->Width, this->Height);
			cara->dibujarPosicionRandom(g);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ tmr;
	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tmr = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// tmr
			// 
			this->tmr->Tick += gcnew System::EventHandler(this, &Form1::tmr_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(608, 486);
			this->Name = L"Form1";
			this->Text = L"caritaFeliz";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Form1_Paint);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Form1_KeyPress);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		tmr->Interval = 1000;
		tmr->Start();

	}
	private: System::Void Form1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		//Cuando presione la tecla espacio, mueve los objetos para formar una cara
if (e->KeyChar == 32) {
			Graphics^ g = this->CreateGraphics();
			Cara* cara = new Cara(this->Width, this->Height);
			cara->moverC(6);
			delete cara;
		}
	}
	private: System::Void Form1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = this->CreateGraphics();

		Cara* cara = new Cara(this->Width, this->Height);
		cara->dibujarPosicionRandom(g);
		delete cara;
	}
	private: System::Void tmr_Tick(System::Object^ sender, System::EventArgs^ e) {

	}


	};
}
