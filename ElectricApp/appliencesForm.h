#pragma once

namespace ElectricApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for appliencesForm
	/// </summary>
	public ref class appliencesForm : public System::Windows::Forms::Form
	{
	public:
		appliencesForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~appliencesForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	protected:
	private: System::Windows::Forms::Panel^ panel1;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->panel1);
			this->panel2->Location = System::Drawing::Point(94, 111);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(777, 379);
			this->panel2->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14));
			this->label1->Location = System::Drawing::Point(5, 11);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(191, 49);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Appliance 1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(226, 15);
			this->textBox1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(223, 39);
			this->textBox1->TabIndex = 1;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(475, 15);
			this->textBox4->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(121, 39);
			this->textBox4->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(623, 15);
			this->textBox5->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(121, 39);
			this->textBox5->TabIndex = 9;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Location = System::Drawing::Point(12, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(747, 66);
			this->panel1->TabIndex = 10;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Controls->Add(this->textBox3);
			this->panel3->Controls->Add(this->textBox6);
			this->panel3->Location = System::Drawing::Point(12, 96);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(747, 66);
			this->panel3->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14));
			this->label2->Location = System::Drawing::Point(5, 8);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(191, 49);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Appliance 2";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(623, 15);
			this->textBox2->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 39);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(226, 15);
			this->textBox3->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(223, 39);
			this->textBox3->TabIndex = 1;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(475, 15);
			this->textBox6->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(121, 39);
			this->textBox6->TabIndex = 8;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->textBox7);
			this->panel4->Controls->Add(this->textBox8);
			this->panel4->Controls->Add(this->textBox9);
			this->panel4->Location = System::Drawing::Point(12, 157);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(747, 66);
			this->panel4->TabIndex = 12;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14));
			this->label3->Location = System::Drawing::Point(5, 5);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(191, 49);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Appliance 3";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(623, 15);
			this->textBox7->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(121, 39);
			this->textBox7->TabIndex = 9;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(226, 15);
			this->textBox8->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(223, 39);
			this->textBox8->TabIndex = 1;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(475, 15);
			this->textBox9->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(121, 39);
			this->textBox9->TabIndex = 8;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->textBox10);
			this->panel5->Controls->Add(this->textBox11);
			this->panel5->Controls->Add(this->textBox12);
			this->panel5->Location = System::Drawing::Point(12, 229);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(747, 66);
			this->panel5->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14));
			this->label4->Location = System::Drawing::Point(5, 8);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(191, 49);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Appliance 4";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(623, 15);
			this->textBox10->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(121, 39);
			this->textBox10->TabIndex = 9;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(226, 15);
			this->textBox11->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(223, 39);
			this->textBox11->TabIndex = 1;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(475, 15);
			this->textBox12->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(121, 39);
			this->textBox12->TabIndex = 8;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label5);
			this->panel6->Controls->Add(this->textBox13);
			this->panel6->Controls->Add(this->textBox14);
			this->panel6->Controls->Add(this->textBox15);
			this->panel6->Location = System::Drawing::Point(12, 293);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(747, 66);
			this->panel6->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14));
			this->label5->Location = System::Drawing::Point(5, 9);
			this->label5->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(191, 49);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Appliance 5";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(623, 15);
			this->textBox13->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(121, 39);
			this->textBox13->TabIndex = 9;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(226, 15);
			this->textBox14->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(223, 39);
			this->textBox14->TabIndex = 1;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(475, 15);
			this->textBox15->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(121, 39);
			this->textBox15->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(746, 519);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 58);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Confirm";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->label8);
			this->panel7->Controls->Add(this->label7);
			this->panel7->Controls->Add(this->label6);
			this->panel7->Location = System::Drawing::Point(314, 51);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(539, 54);
			this->panel7->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(61, 4);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(104, 50);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Name";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(276, 4);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 50);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Unit";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(408, 7);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(131, 50);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Priority";
			// 
			// appliencesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 32);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(978, 614);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel2);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->Name = L"appliencesForm";
			this->Text = L"appliencesForm";
			this->panel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
