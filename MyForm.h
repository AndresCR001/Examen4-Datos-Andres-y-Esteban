#pragma once

namespace Examen4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ b_jugar;
	private: System::Windows::Forms::Button^ b_si;
	private: System::Windows::Forms::Button^ b_no;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->b_jugar = (gcnew System::Windows::Forms::Button());
			this->b_si = (gcnew System::Windows::Forms::Button());
			this->b_no = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(96, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bienvenido al adivinador";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(114, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"En que piensas\?";
			// 
			// b_jugar
			// 
			this->b_jugar->Location = System::Drawing::Point(12, 237);
			this->b_jugar->Name = L"b_jugar";
			this->b_jugar->Size = System::Drawing::Size(75, 23);
			this->b_jugar->TabIndex = 1;
			this->b_jugar->Text = L"JUGAR";
			this->b_jugar->UseVisualStyleBackColor = true;
			// 
			// b_si
			// 
			this->b_si->Location = System::Drawing::Point(128, 160);
			this->b_si->Name = L"b_si";
			this->b_si->Size = System::Drawing::Size(75, 23);
			this->b_si->TabIndex = 2;
			this->b_si->Text = L"SI";
			this->b_si->UseVisualStyleBackColor = true;
			// 
			// b_no
			// 
			this->b_no->Location = System::Drawing::Point(292, 160);
			this->b_no->Name = L"b_no";
			this->b_no->Size = System::Drawing::Size(75, 23);
			this->b_no->TabIndex = 3;
			this->b_no->Text = L"NO";
			this->b_no->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(522, 272);
			this->Controls->Add(this->b_no);
			this->Controls->Add(this->b_si);
			this->Controls->Add(this->b_jugar);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
