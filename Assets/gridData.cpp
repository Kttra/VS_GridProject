/*  The below code is taken from https://skanky.dev/visualcpp/datagridview/buttons-in-a-datagridview
    I recommend checking out his website as it contains very useful information on visual studio
    winforms and C++ in general.
*/

//Programmatically creating DataGridView with customised items in each cell
//Setup The DataGridView
//----- CREATE THE DATAGRID VIEW COLUMNS -----
dataGridView1->AutoGenerateColumns = false;
dataGridView1->DataSource = nullptr;			//Clear the grid if necessary
dataGridView1->Columns->Clear();

//TEXT BOX COLUMN
DataGridViewTextBoxColumn ^DataGridColumnString1 = gcnew DataGridViewTextBoxColumn();
DataGridColumnString1->HeaderText = "My String Column";
//DataGridColumnString1->ReadOnly = true;
//DataGridColumnName->SortMode = DataGridViewColumnSortMode::NotSortable;
dataGridView1->Columns->Add(DataGridColumnString1);

//BUTTON COLUMN
DataGridViewButtonColumn ^DataGridColumnButton1 = gcnew DataGridViewButtonColumn();
DataGridColumnButton1->HeaderText = "My Button Column";
//DataGridColumnButton1->ReadOnly = true;
dataGridView1->Columns->Add(DataGridColumnButton1);

//IMAGE COLUMN
DataGridViewImageColumn ^DataGridColumnImage1 = gcnew DataGridViewImageColumn();
DataGridColumnImage1->HeaderText = "My Image Column";
//DataGridColumnImage1->ReadOnly = true;
dataGridView1->Columns->Add(DataGridColumnImage1);

//COMBO BOX COLUMN
DataGridViewComboBoxColumn ^DataGridColumnComboBox1 = gcnew DataGridViewComboBoxColumn();
DataGridColumnComboBox1->HeaderText = "My Combo Box Column";
//DataGridColumnComboBox1->ReadOnly = true;
//DataGridColumnComboBox1->FlatStyle = FlatStyle::Flat;	//Enable to remove button look of cell
DataGridColumnComboBox1->Items->Add("A");
DataGridColumnComboBox1->Items->Add("B");
DataGridColumnComboBox1->Items->Add("C");
dataGridView1->Columns->Add(DataGridColumnComboBox1);

dataGridView1->Columns[0]->Width = 120;
dataGridView1->Columns[1]->Width = 80;
dataGridView1->Columns[2]->Width = 60;
dataGridView1->Columns[3]->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;

//----- ADD THE ROWS -----
//Row 0
dataGridView1->Rows->Add();
dataGridView1->Rows[0]->Cells[0]->Value = "Row 0";
dataGridView1->Rows[0]->Cells[1]->Value = "Button 0";
dataGridView1->Rows[0]->Cells[2]->Value = imageList1->Images[0];
dataGridView1->Rows[0]->Cells[3]->Value = "A";

//Row 1
dataGridView1->Rows->Add();
dataGridView1->Rows[1]->Cells[0]->Value = "Row 1";
dataGridView1->Rows[1]->Cells[1]->Value = "Button 1";
dataGridView1->Rows[1]->Cells[2]->Value = imageList1->Images[0];
dataGridView1->Rows[1]->Cells[3]->Value = "B";

//The Cell Clicked Function
//********************************************************
//********************************************************
//********** DATAGRIDVIEW CELL / BUTTON CLICKED **********
//********************************************************
//********************************************************
private: System::Void dataGridView1_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e)
{
	if (e->RowIndex > -1)		//Ignore clicks of the column headers
	{
		if (e->ColumnIndex == 1)
		{
			MessageBox::Show(" Row " + e->RowIndex + ", Column " + e->ColumnIndex + " button clicked");
		}
	}
}
//Simple DataGridView with a column of matching buttons
//--------------------------------
//----- SETUP DATA GRID VIEW -----
//--------------------------------
dataGridView1->DataSource = nullptr;			//Clear the grid if necessary
dataGridView1->Columns->Clear();

dataGridView1->AutoGenerateColumns = false;
dataGridView1->ColumnCount = 3;
dataGridView1->Columns[0]->Name = "Column A";
dataGridView1->Columns[1]->Name = "Column B";
dataGridView1->Columns[2]->Name = "Column C";

array<String^> ^DataGridRow = gcnew array<String^> { "1", "Item 1", "100" };
dataGridView1->Rows->Add(DataGridRow);

DataGridRow = gcnew array<String^> { "2", "Item 2", "200" };
dataGridView1->Rows->Add(DataGridRow);

DataGridRow = gcnew array<String^> { "3", "Item 3", "300" };
dataGridView1->Rows->Add(DataGridRow);

DataGridRow = gcnew array<String^> { "4", "Item 4", "400" };
dataGridView1->Rows->Add(DataGridRow);

DataGridViewButtonColumn ^DataGridButton = gcnew DataGridViewButtonColumn();
dataGridView1->Columns->Add(DataGridButton);
DataGridButton->HeaderText = "Button Column";
DataGridButton->Text = "Click Here";
DataGridButton->Name = "Abc";
DataGridButton->UseColumnTextForButtonValue = true;

//********************************************************
//********************************************************
//********** DATAGRIDVIEW CELL / BUTTON CLICKED **********
//********************************************************
//********************************************************
private: System::Void dataGridView1_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e)
{
	if (e->RowIndex > -1)		//Ignore clicks of the column headers
	{
		if (e->ColumnIndex == 3)
		{
			MessageBox::Show(" Row " + e->RowIndex + ", Column " + e->ColumnIndex + " button clicked");
		}
	}
}
