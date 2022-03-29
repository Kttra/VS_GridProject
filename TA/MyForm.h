#pragma once
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "json.hpp" //C:\Users\Username\Desktop\json.hpp

using namespace std;
using json = nlohmann::json;

vector<string> projectNames = { "Mission 1", "Mission 2", "Mission 3", "Mission 4", "Mission 5",
							"Mission 6", "Mission 7", "Mission 8", "Mission 9"};
vector<string> ColNames = { "1st solo", "20th solo", "My solo", "Date", "Class used",
							"Group time", "Group 20 time", "1st group time" };
vector<string> groups = {
"N/A", //0
"Pat, Joseph, Carl", //1
"Breanna, Maximilian", //2
"Russell, Teejay", //3
"Tucker", //4
"Dylan", //5
"Yang", //6
"Keith, Nelson", //7
"Amaan, Prisha", //8
"Sonny. Prisha", //9
"Reanna, Shaun", //10
"Tim, Jordan", //11
"Michael", //12
"Jordan", //13
"Jaydan", //14
"Tyron", //15
"Stan" }; //16

namespace TA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//Initializing the grids
			dataGridView1->Rows->Add("Mission 1");
			dataGridView1->Rows->Add("Mission 2");
			dataGridView1->Rows->Add("Mission 3");
			dataGridView1->Rows->Add("Mission 4");
			dataGridView1->Rows->Add("Mission 5");
			dataGridView1->Rows->Add("Mission 6");
			dataGridView1->Rows->Add("Mission 7");
			dataGridView1->Rows->Add("Mission 8");
			dataGridView1->Rows[8]->Cells[0]->Value = "Mission 9";
			dataGridView2->Rows->Add("Mission 1");
			dataGridView2->Rows->Add("Mission 2");
			dataGridView2->Rows->Add("Mission 3");
			dataGridView2->Rows->Add("Mission 4");
			dataGridView2->Rows->Add("Mission 5");
			dataGridView2->Rows->Add("Mission 6");
			dataGridView2->Rows->Add("Mission 7");
			dataGridView2->Rows->Add("Mission 8");
			dataGridView2->Rows[8]->Cells[0]->Value = "Mission 9";
			dataGridView1->Rows[8]->Cells[0]->Value = "Mission 9";
			dataGridView3->Rows->Add("Mission 1");
			dataGridView3->Rows->Add("Mission 2");
			dataGridView3->Rows->Add("Mission 3");
			dataGridView3->Rows->Add("Mission 4");
			dataGridView3->Rows->Add("Mission 5");
			dataGridView3->Rows->Add("Mission 6");
			dataGridView3->Rows->Add("Mission 7");
			dataGridView3->Rows->Add("Mission 8");
			dataGridView3->Rows[8]->Cells[0]->Value = "Mission 9";

			//Changing width of group member column b/c group names are long
			dataGridView1->Columns[9]->Width = 130;
			dataGridView2->Columns[9]->Width = 130;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;



	private: System::Windows::Forms::Label^ grid1Label;
	private: System::Windows::Forms::Label^ grid2Label;
	private: System::Windows::Forms::Label^ grid3Label;
	private: System::Windows::Forms::Button^ enterButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ column0;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::ComponentModel::IContainer^ components;

	protected:

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->grid1Label = (gcnew System::Windows::Forms::Label());
			this->grid2Label = (gcnew System::Windows::Forms::Label());
			this->grid3Label = (gcnew System::Windows::Forms::Label());
			this->enterButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->column0 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->column0,
					this->column1, this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9
			});
			this->dataGridView1->Location = System::Drawing::Point(0, 29);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(1067, 253);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button1->Location = System::Drawing::Point(565, 569);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->Date, this->dataGridViewTextBoxColumn6,
					this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10
			});
			this->dataGridView2->Location = System::Drawing::Point(0, 310);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->Size = System::Drawing::Size(1067, 253);
			this->dataGridView2->TabIndex = 2;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column10,
					this->Column11, this->Column12
			});
			this->dataGridView3->Location = System::Drawing::Point(1073, 29);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->Size = System::Drawing::Size(329, 253);
			this->dataGridView3->TabIndex = 3;
			// 
			// grid1Label
			// 
			this->grid1Label->AutoSize = true;
			this->grid1Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->grid1Label->Location = System::Drawing::Point(499, 9);
			this->grid1Label->Name = L"grid1Label";
			this->grid1Label->Size = System::Drawing::Size(112, 17);
			this->grid1Label->TabIndex = 4;
			this->grid1Label->Text = L"Current Rotation";
			// 
			// grid2Label
			// 
			this->grid2Label->AutoSize = true;
			this->grid2Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->grid2Label->Location = System::Drawing::Point(499, 285);
			this->grid2Label->Name = L"grid2Label";
			this->grid2Label->Size = System::Drawing::Size(120, 17);
			this->grid2Label->TabIndex = 5;
			this->grid2Label->Text = L"Previous Rotation";
			// 
			// grid3Label
			// 
			this->grid3Label->AutoSize = true;
			this->grid3Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->grid3Label->Location = System::Drawing::Point(1176, 9);
			this->grid3Label->Name = L"grid3Label";
			this->grid3Label->Size = System::Drawing::Size(78, 17);
			this->grid3Label->TabIndex = 6;
			this->grid3Label->Text = L"Best Times";
			// 
			// enterButton
			// 
			this->enterButton->Location = System::Drawing::Point(1228, 331);
			this->enterButton->Name = L"enterButton";
			this->enterButton->Size = System::Drawing::Size(75, 23);
			this->enterButton->TabIndex = 8;
			this->enterButton->Text = L"Add";
			this->enterButton->UseVisualStyleBackColor = true;
			this->enterButton->Click += gcnew System::EventHandler(this, &MyForm::enterButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1176, 303);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Would you like to add a new entry\?";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// column0
			// 
			this->column0->HeaderText = L"Mission";
			this->column0->Name = L"column0";
			this->column0->ReadOnly = true;
			// 
			// column1
			// 
			this->column1->HeaderText = L"1st Place";
			this->column1->Name = L"column1";
			this->column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"20th Place";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"My Solo Time (Rank)";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Date";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Class Used";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Group Time";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Rank 20 time";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Rank 1 Time";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Group Members";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Mission";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"1st Place";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"20th Place";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"My Solo Time (Rank)";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// Date
			// 
			this->Date->HeaderText = L"Date";
			this->Date->Name = L"Date";
			this->Date->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Class Used";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Group Time (Rank)";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Rank 20 time";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Rank 1 Time";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"Group Members";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->ReadOnly = true;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Mission";
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Solo";
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"Group";
			this->Column12->Name = L"Column12";
			this->Column12->ReadOnly = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1179, 388);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(187, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Which rotation would you like to load\?";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1228, 418);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Load";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1406, 621);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->enterButton);
			this->Controls->Add(this->grid3Label);
			this->Controls->Add(this->grid2Label);
			this->Controls->Add(this->grid1Label);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"TA Rankings";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Opening json file
		std::ifstream file;
		file.open("sample.json");
		nlohmann::json jsonObject;

		if (file.is_open()) {
			file >> jsonObject;
		}

		//Need to subtract step/rotation by 1 b/c they'll be out of bounds
		int rotation = jsonObject["Rotation"] - 1;
		int step = jsonObject["Step"] - 1;
		cout << rotation;

		//Setting up current rotation grid
		//i is row, j is column, column starts at index 1, because index 0 is the TA names
		for (int i = 0; i < step; i++) {
			for (int j = 1; j < 9; j++) {
				//Finds the cell values through the json file
				//j-1 b/c colNames is independent from the json file
				string tempString = jsonObject[projectNames[i]][ColNames[j-1]][rotation];

				//Solo last rank, adding the rank placement
				int rank = (jsonObject[projectNames[i]]["Last rank"][rotation]);
				if (j == 2 && rank != 20) {
					tempString = tempString + "   (" + to_string(rank) + ")";
				}
				//My solo rank
				else if (j == 3) {
					rank = (jsonObject[projectNames[i]]["Solo rank"][rotation]);
					tempString = tempString + "   (" + to_string(rank) + ")";
				}
				//My group rank
				else if (j == 6) {
					rank = (jsonObject[projectNames[i]]["Group place"][rotation]);
					tempString = tempString + "   (" + to_string(rank) + ")";
				}
				//Last place on rankings placement
				rank = (jsonObject[projectNames[i]]["20th group place"][rotation]);
				if (j == 7 && rank != 20) {
					tempString = tempString + "   (" + to_string(rank) + ")";
				}
				
				//Converts string to object to put into the grid
				auto cellValue = gcnew String(tempString.c_str());

				//Sets the grid cell value
				dataGridView1->Rows[i]->Cells[j]->Value = cellValue;
			}

			//The last column is the group members
			int groupIndex = jsonObject[projectNames[i]]["Team"][rotation];
			string groupMembers = groups[groupIndex];
			auto cellValue = gcnew String(groupMembers.c_str());
			dataGridView1->Rows[i]->Cells[9]->Value = cellValue;
		}

		//Setting up previous rotation grid
		for (int i = 0; i < 9; i++) {
			for (int j = 1; j < 9; j++) {
				//Finds the cell values through the json file
				//j-1 b/c colNames is independent from the json file
				string tempString = jsonObject[projectNames[i]][ColNames[j - 1]][rotation-1];

				//Solo last rank, adding the rank placement
				int rank = (jsonObject[projectNames[i]]["Last rank"][rotation-1]);
				if (j == 2 && rank != 20) {
					tempString = tempString + "   (" + to_string(rank) + ")";
				}
				//My solo rank
				else if (j == 3) {
					rank = (jsonObject[projectNames[i]]["Solo rank"][rotation-1]);
					tempString = tempString + "   (" + to_string(rank) + ")";
				}
				//My group rank
				else if (j == 6) {
					rank = (jsonObject[projectNames[i]]["Group place"][rotation-1]);
					tempString = tempString + "   (" + to_string(rank) + ")";
				}
				//Last place on rankings placement
				rank = (jsonObject[projectNames[i]]["20th group place"][rotation-1]);
				if (j == 7 && rank != 20) {
					tempString = tempString + "   (" + to_string(rank) + ")";
				}

				//Converts string to object to put into the grid
				auto cellValue = gcnew String(tempString.c_str());

				//Sets the grid cell value
				dataGridView2->Rows[i]->Cells[j]->Value = cellValue;
			}

			//The last column is the group members
			int groupIndex = jsonObject[projectNames[i]]["Team"][rotation-1];
			string groupMembers = groups[groupIndex];
			auto cellValue = gcnew String(groupMembers.c_str());
			dataGridView2->Rows[i]->Cells[9]->Value = cellValue;
		}

		//Loading best times overall
		for (int i = 0; i < 9; i++) {
			string tempString = jsonObject["My best solo times"][i];
			dataGridView3->Rows[i]->Cells[1]->Value = gcnew String(tempString.c_str());
			string tempString2 = jsonObject["My best group times"][i];
			dataGridView3->Rows[i]->Cells[2]->Value = gcnew String(tempString2.c_str());
		}

		file.close();
	}
	private: System::Void enterButton_Click(System::Object^ sender, System::EventArgs^ e){
		//Opening json file
		std::ifstream file;
		file.open("D:\\ta.json");
		nlohmann::json jsonObject;

		if (file.is_open()) {
			file >> jsonObject;
		}

		int rotation = jsonObject["Rotation"];
		int step = jsonObject["Step"];
		
		file.close();

		//textBox1->Text
	}
};
}
