#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include "Myform1.h"
#include "Myform2.h"
#include "DeleteAbonents.h"
//#include "Myform1.h"
//#include "Myform2.cpp"

//#include "Base.cpp"
namespace Project4 {

	//using namespace std;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::Common;
	using namespace MySql::Data;
	using namespace MySql::Data::Common;
	using namespace MySqlClient;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::GroupBox^  groupBox1;
	public:
	public: System::Windows::Forms::DataGridView^  dataGridView1;
	public: System::Windows::Forms::GroupBox^  groupBox2;
	public: System::Windows::Forms::DataGridView^  dataGridView2;
	public: System::Windows::Forms::MenuStrip^  menuStrip1;
	public: System::Windows::Forms::ToolStripMenuItem^  абонентыToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  добавитьToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  удалитьToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  договорыToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  оформитьДоговорToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  расторгнутьДоговорToolStripMenuItem;
	private: System::Windows::Forms::Button^  button1;
	public:


	protected:

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->абонентыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->добавитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->договорыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оформитьДоговорToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->расторгнутьДоговорToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Location = System::Drawing::Point(12, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(772, 274);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Абоненты";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 16);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(766, 255);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellEnter);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridView2);
			this->groupBox2->Location = System::Drawing::Point(15, 319);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(769, 173);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Договоры";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->Location = System::Drawing::Point(3, 16);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(763, 154);
			this->dataGridView2->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->абонентыToolStripMenuItem,
					this->договорыToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(788, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// абонентыToolStripMenuItem
			// 
			this->абонентыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->добавитьToolStripMenuItem,
					this->удалитьToolStripMenuItem
			});
			this->абонентыToolStripMenuItem->Name = L"абонентыToolStripMenuItem";
			this->абонентыToolStripMenuItem->Size = System::Drawing::Size(75, 20);
			this->абонентыToolStripMenuItem->Text = L"Абоненты";
			// 
			// добавитьToolStripMenuItem
			// 
			this->добавитьToolStripMenuItem->Name = L"добавитьToolStripMenuItem";
			this->добавитьToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->добавитьToolStripMenuItem->Text = L"Добавить";
			this->добавитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::добавитьToolStripMenuItem_Click);
			// 
			// удалитьToolStripMenuItem
			// 
			this->удалитьToolStripMenuItem->Name = L"удалитьToolStripMenuItem";
			this->удалитьToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->удалитьToolStripMenuItem->Text = L"Удалить";
			// 
			// договорыToolStripMenuItem
			// 
			this->договорыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->оформитьДоговорToolStripMenuItem,
					this->расторгнутьДоговорToolStripMenuItem
			});
			this->договорыToolStripMenuItem->Name = L"договорыToolStripMenuItem";
			this->договорыToolStripMenuItem->Size = System::Drawing::Size(75, 20);
			this->договорыToolStripMenuItem->Text = L"Договоры";
			// 
			// оформитьДоговорToolStripMenuItem
			// 
			this->оформитьДоговорToolStripMenuItem->Name = L"оформитьДоговорToolStripMenuItem";
			this->оформитьДоговорToolStripMenuItem->Size = System::Drawing::Size(189, 22);
			this->оформитьДоговорToolStripMenuItem->Text = L"Оформить договор";
			this->оформитьДоговорToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оформитьДоговорToolStripMenuItem_Click);
			// 
			// расторгнутьДоговорToolStripMenuItem
			// 
			this->расторгнутьДоговорToolStripMenuItem->Name = L"расторгнутьДоговорToolStripMenuItem";
			this->расторгнутьДоговорToolStripMenuItem->Size = System::Drawing::Size(189, 22);
			this->расторгнутьДоговорToolStripMenuItem->Text = L"Расторгнуть договор";
			this->расторгнутьДоговорToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::расторгнутьДоговорToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(592, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Отобразить ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(788, 504);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Интернет-провайдер";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: ArrayList^ Getallabonents()
		{
			String^ connect = L"Database=provider;datasource=localhost;port=3306;username=root;password=";
			ArrayList^ allabonents = gcnew ArrayList();
			MySqlConnection^ con = gcnew MySqlConnection(connect);
			MySqlCommand^ com = gcnew MySqlCommand("SELECT * FROM abon ", con);
			con->Open();
			MySqlDataReader^ dr = com->ExecuteReader();

			if (dr->HasRows)
			{
				for each (DbDataRecord^ result in dr)
				{
					allabonents->Add(result);
				}
				con->Close();
			}
			return allabonents;

		}
			public:	ArrayList^ GetallContractsForAbonents(String^ abonentID)
				{
				String^ connect = L"Database=provider;datasource=localhost;port=3306;username=root;password=";
					ArrayList^ allcontracts = gcnew ArrayList();
					MySqlConnection^ con1 = gcnew MySqlConnection(connect);
					String^ query = ("SELECT * FROM contracts Where abonent_id= '" + abonentID + "' ");
					MySqlCommand^ com = gcnew MySqlCommand(query, con1);
					con1->Open();
					MySqlDataReader^ dr = com->ExecuteReader();
					
						
					if (dr->HasRows)
					{
						for each (DbDataRecord^ result in dr)
						{
							allcontracts->Add(result);
						}
						con1->Close();
					}
					return allcontracts;
					
				}
					bool SaveNewAbonent(int Tarif, String^ Name, String^ Phone)
					{
						bool FlagResult = true;
						String^ connect = L"Database=provider;datasource=localhost;port=3306;username=root;password=";
						//ArrayList^ allabonents = gcnew ArrayList();

						String^ query = "INSERT INTO abonents (tarif_id, name , phone)  VALUES ('" + Tarif + "','" + Name + "','" + Phone + "')";
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
		
	}
			 
			
			 
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		
	}

			 
	private: System::Void добавитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{

		MyForm1^ myform1 = gcnew MyForm1;
		
		if (myform1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			dataGridView1->DataSource = Getallabonents();
			
			MessageBox::Show("Абонент успешно создан", "Провайдер", MessageBoxButtons::OK);

		}

		else
			MessageBox::Show("Абонент не создан", "Провайдер", MessageBoxButtons::OK);
	}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) 
{
	//dataGridView1->Refresh();
	dataGridView1->DataSource = Getallabonents();

}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
{
	

	dataGridView1->DataSource = Getallabonents();
	//this->dataGridView1->CellEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &dataGridView1_CellEnter);
	//dataGridView1->CellEnter += gcnew DataGridViewCellEventHandler(this, dataGridView1_CellEnter);

}
private: System::Void dataGridView1_CellEnter(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) 
{
	dataGridView2->DataSource = GetallContractsForAbonents(dataGridView1->CurrentRow->Cells["ID"]->Value->ToString());
}
private: System::Void оформитьДоговорToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	MyForm2^ myform2 = gcnew MyForm2;
	if (myform2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		dataGridView1->DataSource = Getallabonents();

		MessageBox::Show("Договор заключен", "Провайдер", MessageBoxButtons::OK);

	}

	else
		MessageBox::Show("Договор не заключен", "Провайдер", MessageBoxButtons::OK);
	
}
private: System::Void расторгнутьДоговорToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	DeleteAbonents^ deleteabonents = gcnew DeleteAbonents;
	if (deleteabonents->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		dataGridView1->DataSource = Getallabonents();

		MessageBox::Show("Абонент успешно удален", "Провайдер", MessageBoxButtons::OK);

	}

	else
		MessageBox::Show("Абонент не удален", "Провайдер", MessageBoxButtons::OK);
	
}
};
}
