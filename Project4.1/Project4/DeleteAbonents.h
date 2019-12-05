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
	/// —водка дл€ DeleteAbonents
	/// </summary>
	public ref class DeleteAbonents : public System::Windows::Forms::Form
	{
	public:
		DeleteAbonents(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~DeleteAbonents()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	public: System::Windows::Forms::ListBox^  listBox2;
	private:
	public: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button1;
	public:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"‘»ќ";
			// 
			// listBox2
			// 
			this->listBox2->DisplayMember = L"name";
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(225, 12);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(179, 95);
			this->listBox2->TabIndex = 14;
			this->listBox2->ValueMember = L"name";
			// 
			// listBox1
			// 
			this->listBox1->DisplayMember = L"ID";
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(98, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(121, 95);
			this->listBox1->TabIndex = 13;
			this->listBox1->ValueMember = L"ID";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(159, 113);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 23);
			this->button1->TabIndex = 16;
			this->button1->Text = L"”далить абонента";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DeleteAbonents::button1_Click);
			// 
			// DeleteAbonents
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(424, 163);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Name = L"DeleteAbonents";
			this->Text = L"”далить абонента";
			this->Load += gcnew System::EventHandler(this, &DeleteAbonents::DeleteAbonents_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
			bool DeleteFrom(int ID)
			{
				bool FlagResult = true;
				String^ connect = L"Database=provider;datasource=localhost;port=3306;username=root;password=";
				//ArrayList^ allabonents = gcnew ArrayList();

				String^ query = ("DELETE FROM abonents WHERE ID='" + ID + "'");
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
		if (DeleteFrom(lb1))
		{
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
		} 
		else
		{
			this->DialogResult = System::Windows::Forms::DialogResult::No;
		}
	}
	private: System::Void DeleteAbonents_Load(System::Object^  sender, System::EventArgs^  e) 
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
};
}
