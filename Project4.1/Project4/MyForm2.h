#pragma once

namespace Project4 {

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
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::ListBox^  listBox2;
	protected:
	public: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	public:
	public: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::Button^  button1;

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
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listBox2
			// 
			this->listBox2->DisplayMember = L"name";
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(238, 12);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(179, 95);
			this->listBox2->TabIndex = 9;
			this->listBox2->ValueMember = L"name";
			// 
			// listBox1
			// 
			this->listBox1->DisplayMember = L"ID";
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(111, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(121, 95);
			this->listBox1->TabIndex = 8;
			this->listBox1->ValueMember = L"ID";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(111, 114);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(306, 20);
			this->dateTimePicker1->TabIndex = 10;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(111, 140);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(306, 20);
			this->dateTimePicker2->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"ФИО";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(5, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Дата оформления";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Дата окончания";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(170, 175);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 23);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Заключить договор";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(443, 210);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Name = L"MyForm2";
			this->Text = L"Оформление договора";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
			bool SaveNewTreaty(int AbonID, DateTime OpenDate, DateTime EndDate)
			{
				bool FlagResult = true;
				String^ connect = L"Database=provider;datasource=localhost;port=3306;username=root;password=";

				
				String^ query = "INSERT INTO contracts(abonent_id, opendate, enddate, ID)  VALUES('" + AbonID + "', '" + OpenDate.ToString("yyyy-MM-dd hh:mm:ss") + "', '" + EndDate.ToString("yyyy-MM-dd hh:mm:ss")+"','" + "m"+"')";
				MySqlConnection^ con = gcnew MySqlConnection(connect);
				con->Open();

				MySqlCommand^ com = gcnew MySqlCommand(query, con);

				if (com->ExecuteNonQuery() == 1)
				{
					FlagResult = true;
				}

				
				return FlagResult;
			}
	private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e)
	{
		ArrayList^ abonents = gcnew ArrayList;
		String^ connect = L"Database=provider;datasource=localhost;port=3306;username=root;password=";
		//ArrayList^ allabonents = gcnew ArrayList();
		MySqlConnection^ con = gcnew MySqlConnection(connect);
		MySqlCommand^ com = gcnew MySqlCommand("SELECT * FROM abonents ", con);
		con->Open();
		MySqlDataReader^ dr = com->ExecuteReader();

		if (dr->HasRows)
		{
			for each (DbDataRecord^ result in dr)
			{
				abonents->Add(result);
			}
			con->Close();
		}


		String^ s = "ID";
		//listBox2->DataSource = gcnew BindingSource(tarifs,s);

		listBox1->DataSource = abonents;
		listBox2->DataSource = abonents;
	}
			 
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	String^ lb = listBox1->SelectedValue->ToString();
	int lb1 = Int32::Parse(lb);
	if (SaveNewTreaty(lb1, dateTimePicker1->Value, dateTimePicker2->Value))
	{
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}
	else
	{
		this->DialogResult = System::Windows::Forms::DialogResult::No;
	}
	
	//SaveNewAbonent(lb1, textBox1->Text->ToString(), textBox2->Text->ToString());



}
};
}
