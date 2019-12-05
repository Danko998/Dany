
#pragma once
#include <iostream>
#include <sstream>
#include <string>
//#include "MyForm.h"


namespace Project4 {
	//#include <iostream>
	//#include <map> 
	
	
    
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::Common;
	using namespace MySql::Data;
	using namespace MySql::Data::Common;
	using namespace MySqlClient;
	
	
	

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form 
	{
		
	public:
	
		
		MyForm1(void)
		{
			
			InitializeComponent();
			
		

			//
			//TODO: добавьте код конструктора
			//
			
		}

		

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^  label1;
	protected:
	public: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::TextBox^  textBox1;
	public: System::Windows::Forms::TextBox^  textBox2;
	public: System::Windows::Forms::ListBox^  listBox1;
	public: System::Windows::Forms::Button^  button1;
	public: System::Windows::Forms::ListBox^  listBox2;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ФИО абонента";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Тарифный план";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 157);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Номер телефона";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(127, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(306, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(127, 154);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(306, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox2_KeyPress);
			// 
			// listBox1
			// 
			this->listBox1->DisplayMember = L"ID";
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(127, 55);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(121, 95);
			this->listBox1->TabIndex = 5;
			this->listBox1->ValueMember = L"ID";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(173, 192);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(179, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// listBox2
			// 
			this->listBox2->DisplayMember = L"tarif_name";
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(254, 55);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(179, 95);
			this->listBox2->TabIndex = 7;
			this->listBox2->ValueMember = L"tarif_name";
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::listBox2_SelectedIndexChanged);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(454, 242);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"Добавить абонента";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//public: 
			
					
				

			public:
				 bool SaveNewAbonent(int Tarif, String^ Name, String^ Phone)
				 {
					 bool FlagResult = true;
					 String^ connect = L"Database=provider;datasource=localhost;port=3306;username=root;password=";
					 //ArrayList^ allabonents = gcnew ArrayList();
					 
					 String^ query = "INSERT INTO abonents(tarif_id, name, phone)  VALUES('"+Tarif+"', '" +Name+ "', '"+Phone+"')";
					 MySqlConnection^ con = gcnew MySqlConnection(connect);
					 con->Open();

					 MySqlCommand^ com = gcnew MySqlCommand(query, con);
					 
					 if (com->ExecuteNonQuery() == 1)
					 {
						 FlagResult = true;
					 }



					 return FlagResult;
				 }
				 
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		String^ lb = listBox1->SelectedValue->ToString();
		int lb1 = Int32::Parse(lb);
		if (SaveNewAbonent(lb1, textBox1->Text->ToString(), textBox2->Text->ToString()))
		{
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
		}
		else
		{
			this->DialogResult = System::Windows::Forms::DialogResult::No;
		}
		
			
	}

private: System::Void listBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
{

}
		
		
private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) 
{
	ArrayList^ tarifs = gcnew ArrayList;
	String^ connect = L"Database=provider;datasource=localhost;port=3306;username=root;password=";
	//ArrayList^ allabonents = gcnew ArrayList();
	MySqlConnection^ con = gcnew MySqlConnection(connect);
	MySqlCommand^ com = gcnew MySqlCommand("SELECT * FROM tarif ", con);
	con->Open();
	MySqlDataReader^ dr = com->ExecuteReader();

	if (dr->HasRows)
	{
		for each (DbDataRecord^ result in dr)
		{
			tarifs->Add(result);
		}
		con->Close();
	}

	
	String^ s = "ID";
	//listBox2->DataSource = gcnew BindingSource(tarifs,s);
	
	listBox1->DataSource =  tarifs;
	listBox2->DataSource = tarifs;
	
	
	
	//listBox2->DataSource = gcnew BindingSource(allabonents, name2);


	
}
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
{
	

	if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') ||
		(e->KeyChar == ',') || (e->KeyChar ==Convert::ToChar(Keys::Back)))) {
		e->Handled = true;
	}
}
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
{
	
	/*
	if (!((e->KeyChar >= 'a') && (e->KeyChar <= 'z') 
		|| (e->KeyChar >= 'A') && (e->KeyChar <= 'Z')
			|| (e->KeyChar ==Convert::ToChar(Keys::Back)))) 
	{
		e->Handled = true;
	}
	*/
}
};
}
