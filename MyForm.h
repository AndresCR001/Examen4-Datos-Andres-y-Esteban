#pragma once
#include "Sistema.h"
#include "ArbolB.h"
#include "Nodo.h"
#include <cstdlib>
//#include <iostream>
#include <cstdio>

namespace Examen4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	//template <class TipoDato>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		ArbolBinario* arbolOrigen = new ArbolBinario();
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ b_jugar;
	private: System::Windows::Forms::Button^ b_si;
	private: System::Windows::Forms::Button^ b_no;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textPregunta;
	private: System::Windows::Forms::GroupBox^ gb_preguntar;
	private: System::Windows::Forms::TextBox^ txtBox_pregunta;

	private: System::Windows::Forms::Label^ label_dameR;
	private: System::Windows::Forms::Label^ label_dameP;
	private: System::Windows::Forms::TextBox^ txtBox_respuesta;

	private: System::Windows::Forms::Button^ b_aceptar;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		/// 
		
		// inicializamos el sistema

		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->b_jugar = (gcnew System::Windows::Forms::Button());
			this->b_si = (gcnew System::Windows::Forms::Button());
			this->b_no = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textPregunta = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->gb_preguntar = (gcnew System::Windows::Forms::GroupBox());
			this->txtBox_respuesta = (gcnew System::Windows::Forms::TextBox());
			this->label_dameR = (gcnew System::Windows::Forms::Label());
			this->label_dameP = (gcnew System::Windows::Forms::Label());
			this->txtBox_pregunta = (gcnew System::Windows::Forms::TextBox());
			this->b_aceptar = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->gb_preguntar->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox1->Location = System::Drawing::Point(91, 29);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(318, 100);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::Window;
			this->label2->Location = System::Drawing::Point(78, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(161, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Piensa en algun lugar del mundo";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(93, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bienvenido al adivinador";
			// 
			// b_jugar
			// 
			this->b_jugar->Location = System::Drawing::Point(12, 237);
			this->b_jugar->Name = L"b_jugar";
			this->b_jugar->Size = System::Drawing::Size(75, 23);
			this->b_jugar->TabIndex = 1;
			this->b_jugar->Text = L"JUGAR";
			this->b_jugar->UseVisualStyleBackColor = true;
			this->b_jugar->Click += gcnew System::EventHandler(this, &MyForm::b_jugar_Click);
			// 
			// b_si
			// 
			this->b_si->Location = System::Drawing::Point(128, 160);
			this->b_si->Name = L"b_si";
			this->b_si->Size = System::Drawing::Size(75, 23);
			this->b_si->TabIndex = 2;
			this->b_si->Text = L"SI";
			this->b_si->UseVisualStyleBackColor = true;
			this->b_si->Visible = false;
			this->b_si->Click += gcnew System::EventHandler(this, &MyForm::b_si_Click);
			// 
			// b_no
			// 
			this->b_no->Location = System::Drawing::Point(292, 160);
			this->b_no->Name = L"b_no";
			this->b_no->Size = System::Drawing::Size(75, 23);
			this->b_no->TabIndex = 3;
			this->b_no->Text = L"NO";
			this->b_no->UseVisualStyleBackColor = true;
			this->b_no->Visible = false;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::HotTrack;
			this->groupBox2->Controls->Add(this->textPregunta);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Location = System::Drawing::Point(91, 29);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(318, 100);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Visible = false;
			// 
			// textPregunta
			// 
			this->textPregunta->Location = System::Drawing::Point(59, 41);
			this->textPregunta->Name = L"textPregunta";
			this->textPregunta->Size = System::Drawing::Size(206, 20);
			this->textPregunta->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label3->Location = System::Drawing::Point(128, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Pregunta...";
			// 
			// gb_preguntar
			// 
			this->gb_preguntar->BackColor = System::Drawing::SystemColors::HotTrack;
			this->gb_preguntar->Controls->Add(this->txtBox_respuesta);
			this->gb_preguntar->Controls->Add(this->label_dameR);
			this->gb_preguntar->Controls->Add(this->label_dameP);
			this->gb_preguntar->Controls->Add(this->txtBox_pregunta);
			this->gb_preguntar->Location = System::Drawing::Point(91, 29);
			this->gb_preguntar->Name = L"gb_preguntar";
			this->gb_preguntar->Size = System::Drawing::Size(318, 154);
			this->gb_preguntar->TabIndex = 2;
			this->gb_preguntar->TabStop = false;
			this->gb_preguntar->Text = L"Responde ";
			this->gb_preguntar->Visible = false;
			// 
			// txtBox_respuesta
			// 
			this->txtBox_respuesta->Location = System::Drawing::Point(23, 105);
			this->txtBox_respuesta->Name = L"txtBox_respuesta";
			this->txtBox_respuesta->Size = System::Drawing::Size(262, 20);
			this->txtBox_respuesta->TabIndex = 3;
			// 
			// label_dameR
			// 
			this->label_dameR->AutoSize = true;
			this->label_dameR->Location = System::Drawing::Point(20, 87);
			this->label_dameR->Name = L"label_dameR";
			this->label_dameR->Size = System::Drawing::Size(237, 13);
			this->label_dameR->TabIndex = 2;
			this->label_dameR->Text = L"Dame una respuesta (en que estabas pensando)";
			// 
			// label_dameP
			// 
			this->label_dameP->AutoSize = true;
			this->label_dameP->Location = System::Drawing::Point(21, 25);
			this->label_dameP->Name = L"label_dameP";
			this->label_dameP->Size = System::Drawing::Size(101, 13);
			this->label_dameP->TabIndex = 1;
			this->label_dameP->Text = L"Dame una pregunta";
			// 
			// txtBox_pregunta
			// 
			this->txtBox_pregunta->Location = System::Drawing::Point(23, 41);
			this->txtBox_pregunta->Name = L"txtBox_pregunta";
			this->txtBox_pregunta->Size = System::Drawing::Size(262, 20);
			this->txtBox_pregunta->TabIndex = 0;
			// 
			// b_aceptar
			// 
			this->b_aceptar->Location = System::Drawing::Point(395, 237);
			this->b_aceptar->Name = L"b_aceptar";
			this->b_aceptar->Size = System::Drawing::Size(75, 23);
			this->b_aceptar->TabIndex = 5;
			this->b_aceptar->Text = L"ACEPTAR";
			this->b_aceptar->UseVisualStyleBackColor = true;
			this->b_aceptar->Visible = false;
			this->b_aceptar->Click += gcnew System::EventHandler(this, &MyForm::b_aceptar_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(522, 272);
			this->Controls->Add(this->b_aceptar);
			this->Controls->Add(this->gb_preguntar);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->b_no);
			this->Controls->Add(this->b_si);
			this->Controls->Add(this->b_jugar);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Origen";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->gb_preguntar->ResumeLayout(false);
			this->gb_preguntar->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	public:
		Sistema *sistema;
		ArbolBinario* arbolMemoria;

	private: System::Void b_jugar_Click(System::Object^ sender, System::EventArgs^ e) {

		
		bool EstadoMemoria = sistema->leerMemoria();

		txtBox_pregunta->Text = "";
		txtBox_respuesta->Text = "";
		
		if (EstadoMemoria) { // en caso de que la memoria este vacia le indicamos al usuario que ingrese la primer pregunta 
			gb_preguntar -> Visible = true;
			b_aceptar->Visible = true;

			b_jugar->Enabled = false;





		}
		else {

			groupBox2->Visible = true;
			b_no->Visible = true;
			b_si->Visible = true;
			b_jugar->Enabled = false;

		arbolMemoria = sistema->getMemoria();
		}
		//inicial.crearPregunta();
		// se debe leer un archivo elc cual me idique las preguntas que ya se hayan realizado 
		// realizarlas en orden ( pos, pre o in)
		// si en el archivo no emncuentra ninguna pregunta deberá realizarla de lo contrario 
		//deberá armar el arbol acamodado en el orden establecido.

		/*const char *pregunta = "Esta en el continente Americano?";
		String^ strPregunta = gcnew String(pregunta); //convertimos el const char en un string para el winForm y poder escribirlo en el textBox
		Nodo* nodo;
		

		nodo = arbolOrigen->nuevoArbol(0, pregunta, 0);
		arbolOrigen->Praiz(nodo);


		textPregunta->Text = strPregunta;//Convert::ToString(pregunta);*/
		//asi se agrega una pregunta en un nodo

	}
private: System::Void b_si_Click(System::Object^ sender, System::EventArgs^ e) {

	Nodo* nodo;
	Nodo* nuevo;
	ArbolBinario* arbol;

	const char* pregunta = (char*)(void*)Marshal::StringToHGlobalAnsi(textPregunta->Text); // conversion de text a const char*


	nodo = arbolOrigen->Oraiz();

	if (!nodo->valorNodo())

		textPregunta->Text = " ";
		nuevo = arbol->nuevoArbol(nodo, pregunta, 0);


	}
private: System::Void b_aceptar_Click(System::Object^ sender, System::EventArgs^ e) {

	const char* nuevaP = (char*)(void*)Marshal::StringToHGlobalAnsi(txtBox_pregunta->Text);
	const char* nuevaR = (char*)(void*)Marshal::StringToHGlobalAnsi(txtBox_respuesta->Text);

	sistema->crearPregunta(nuevaP, nuevaR, arbolMemoria);

	gb_preguntar->Visible = false;
	b_aceptar->Visible = false;

	b_jugar->Enabled = true;

}
};
}
