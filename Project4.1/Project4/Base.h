#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data::Common;
//using namespace System::Data::Common;
using namespace System::Drawing;
using namespace MySql::Data;
using namespace MySql::Data::Common;
using namespace MySqlClient;

#include <iostream>

ref class Base
{
public:
	Base();
	
	/*
	ArrayList^ Getallabonents() 
	{
		String^ connect = L"Database=provider;datasource=localhost;port=3306;username=root;password=daneel99";
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
	
	*/
};

