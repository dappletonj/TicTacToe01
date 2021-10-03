#pragma once

namespace sprint01 {

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
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;





	protected:





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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(754, 100);
			this->panel1->TabIndex = 0;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->label5->Location = System::Drawing::Point(76, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(591, 82);
			this->label5->TabIndex = 0;
			this->label5->Text = L"TicTacToe Game";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Location = System::Drawing::Point(12, 132);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(754, 718);
			this->panel2->TabIndex = 1;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(7, 239);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(245, 230);
			this->button4->TabIndex = 5;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(258, 239);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(245, 230);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(509, 239);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(245, 230);
			this->button6->TabIndex = 3;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(509, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(245, 230);
			this->button3->TabIndex = 2;
			this->button3->Text = L"\r\n";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(258, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(245, 230);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(7, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(245, 230);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(255, 475);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(245, 230);
			this->button8->TabIndex = 4;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(16, 607);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(245, 230);
			this->button7->TabIndex = 5;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(521, 607);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(245, 230);
			this->button9->TabIndex = 3;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(801, 737);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(471, 100);
			this->button10->TabIndex = 6;
			this->button10->Text = L"New Game";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->button11->Location = System::Drawing::Point(801, 607);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(471, 100);
			this->button11->TabIndex = 7;
			this->button11->Text = L"Reset";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->label1->Location = System::Drawing::Point(802, 371);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(307, 82);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Player X";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->label2->Location = System::Drawing::Point(802, 476);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(315, 82);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Player O";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->label3->Location = System::Drawing::Point(1180, 371);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 82);
			this->label3->TabIndex = 10;
			this->label3->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->label4->Location = System::Drawing::Point(1180, 476);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 82);
			this->label4->TabIndex = 11;
			this->label4->Text = L"0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(1305, 840);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Boolean Checker;
		int score;

		void enable_false() {
			button1->Enabled = false;
			button2->Enabled = false;
			button3->Enabled = false;
			button4->Enabled = false;
			button5->Enabled = false;
			button6->Enabled = false;
			button7->Enabled = false;
			button8->Enabled = false;
			button9->Enabled = false;
		}
		
		void winner() {
			// Declaring "X" the winnner horizontal 1-3
			if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X") {
				button1->BackColor = System::Drawing::Color::GreenYellow;
				button2->BackColor = System::Drawing::Color::GreenYellow;
				button3->BackColor = System::Drawing::Color::GreenYellow;
				MessageBox::Show("Player X Wins!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				score = int::Parse(label3->Text);
				label3->Text = Convert::ToString(score + 1);
				enable_false();
			}

			// Declaring "X" the winnner horizontal 4-6
			if (button4->Text == "X" && button5->Text == "X" && button6->Text == "X") {
				button4->BackColor = System::Drawing::Color::GreenYellow;
				button5->BackColor = System::Drawing::Color::GreenYellow;
				button6->BackColor = System::Drawing::Color::GreenYellow;
				MessageBox::Show("Player X Wins!");
				score = int::Parse(label3->Text);
				label3->Text = Convert::ToString(score + 1);
				enable_false();
			}

			// Declaring "X" the winnner horizontal 7-9
			if (button7->Text == "X" && button8->Text == "X" && button9->Text == "X") {
				button7->BackColor = System::Drawing::Color::GreenYellow;
				button8->BackColor = System::Drawing::Color::GreenYellow;
				button9->BackColor = System::Drawing::Color::GreenYellow;
				MessageBox::Show("Player X Wins!");
				score = int::Parse(label3->Text);
				label3->Text = Convert::ToString(score + 1);
				enable_false();
			}

			// Declaring "X" the winnner verticle 1, 4, 7
			if (button1->Text == "X" && button4->Text == "X" && button7->Text == "X") {
				button1->BackColor = System::Drawing::Color::GreenYellow;
				button4->BackColor = System::Drawing::Color::GreenYellow;
				button7->BackColor = System::Drawing::Color::GreenYellow;
				MessageBox::Show("Player X Wins!");
				score = int::Parse(label3->Text);
				label3->Text = Convert::ToString(score + 1);
				enable_false();
			}

			// Declaring "X" the winnner verticle 2, 5, 8
			if (button2->Text == "X" && button5->Text == "X" && button8->Text == "X") {
				button2->BackColor = System::Drawing::Color::GreenYellow;
				button5->BackColor = System::Drawing::Color::GreenYellow;
				button8->BackColor = System::Drawing::Color::GreenYellow;
				MessageBox::Show("Player X Wins!");
				score = int::Parse(label3->Text);
				label3->Text = Convert::ToString(score + 1);
				enable_false();
			}

			// Declaring "X" the winnner verticle 3, 6, 9
			if (button3->Text == "X" && button6->Text == "X" && button9->Text == "X") {
				button3->BackColor = System::Drawing::Color::GreenYellow;
				button6->BackColor = System::Drawing::Color::GreenYellow;
				button9->BackColor = System::Drawing::Color::GreenYellow;
				MessageBox::Show("Player X Wins!");
				score = int::Parse(label3->Text);
				label3->Text = Convert::ToString(score + 1);
				enable_false();
			}

			// Declaring "X" the winnner diagonal 1, 5, 9 
			if (button1->Text == "X" && button5->Text == "X" && button9->Text == "X") {
				button1->BackColor = System::Drawing::Color::GreenYellow;
				button5->BackColor = System::Drawing::Color::GreenYellow;
				button9->BackColor = System::Drawing::Color::GreenYellow;
				MessageBox::Show("Player X Wins!");
				score = int::Parse(label3->Text);
				label3->Text = Convert::ToString(score + 1);
				enable_false();
			}

			// Declaring "X" the winnner diagonal 3, 5, 7
			if (button3->Text == "X" && button5->Text == "X" && button7->Text == "X") {
				button3->BackColor = System::Drawing::Color::GreenYellow;
				button5->BackColor = System::Drawing::Color::GreenYellow;
				button7->BackColor = System::Drawing::Color::GreenYellow;
				MessageBox::Show("Player X Wins!");
				score = int::Parse(label3->Text);
				label3->Text = Convert::ToString(score + 1);
				enable_false();
			}

//===========================================================================================================================

			// Declaring "O" the winner horizontal 1-3
			if (button1->Text == "O" && button2->Text == "O" && button3->Text == "O") {
				button1->BackColor = System::Drawing::Color::GreenYellow;
				button2->BackColor = System::Drawing::Color::GreenYellow;
				button3->BackColor = System::Drawing::Color::GreenYellow;
				MessageBox::Show("Player O Wins!");
				score = int::Parse(label4->Text);
				label4->Text = Convert::ToString(score + 1);
				enable_false();
			}

			// Declaring "O" the winner horizontal 4-6
			if (button4->Text == "O" && button5->Text == "O" && button6->Text == "O") {
				button4->BackColor = System::Drawing::Color::GreenYellow;
				button5->BackColor = System::Drawing::Color::GreenYellow;
				button6->BackColor = System::Drawing::Color::GreenYellow;
				MessageBox::Show("Player O Wins!");
				score = int::Parse(label4->Text);
				label4->Text = Convert::ToString(score + 1);
				enable_false();
			}

			// Declaring "O" the winner horizontal 7-9
			if (button7->Text == "O" && button8->Text == "O" && button9->Text == "O") {
				button7->BackColor = System::Drawing::Color::GreenYellow;
				button8->BackColor = System::Drawing::Color::GreenYellow;
				button9->BackColor = System::Drawing::Color::GreenYellow;
				MessageBox::Show("Player O Wins!");
				score = int::Parse(label4->Text);
				label4->Text = Convert::ToString(score + 1);
				enable_false();
			}

			// Declaring "O" the winner verticle 1, 4, 7
			if (button1->Text == "O" && button4->Text == "O" && button7->Text == "O") {
				button1->BackColor = System::Drawing::Color::GreenYellow;
				button4->BackColor = System::Drawing::Color::GreenYellow;
				button7->BackColor = System::Drawing::Color::GreenYellow;
				MessageBox::Show("Player O Wins!");
				score = int::Parse(label4->Text);
				label4->Text = Convert::ToString(score + 1);
				enable_false();
			}

			// Declaring "O" the winner verticle 2, 5, 8
			if (button2->Text == "O" && button5->Text == "O" && button8->Text == "O") {
				button2->BackColor = System::Drawing::Color::GreenYellow;
				button5->BackColor = System::Drawing::Color::GreenYellow;
				button8->BackColor = System::Drawing::Color::GreenYellow;
				MessageBox::Show("Player O Wins!");
				score = int::Parse(label4->Text);
				label4->Text = Convert::ToString(score + 1);
				enable_false();
			}

			// Declaring "O" the winner verticle 3, 5, 9
			if (button3->Text == "O" && button5->Text == "O" && button9->Text == "O") {
				button3->BackColor = System::Drawing::Color::GreenYellow;
				button5->BackColor = System::Drawing::Color::GreenYellow;
				button9->BackColor = System::Drawing::Color::GreenYellow;
				MessageBox::Show("Player O Wins!");
				score = int::Parse(label4->Text);
				label4->Text = Convert::ToString(score + 1);
				enable_false();
			}

			// Declaring "O" the winner diagonal 1, 5, 9
			if (button1->Text == "O" && button5->Text == "O" && button9->Text == "O") {
				button1->BackColor = System::Drawing::Color::GreenYellow;
				button5->BackColor = System::Drawing::Color::GreenYellow;
				button9->BackColor = System::Drawing::Color::GreenYellow;
				MessageBox::Show("Player O Wins!");
				score = int::Parse(label4->Text);
				label4->Text = Convert::ToString(score + 1);
				enable_false();
			}

			// Declaring "O" the winner verticle 3, 5, 7
			if (button3->Text == "O" && button5->Text == "O" && button7->Text == "O") {
				button3->BackColor = System::Drawing::Color::GreenYellow;
				button5->BackColor = System::Drawing::Color::GreenYellow;
				button7 ->BackColor = System::Drawing::Color::GreenYellow;
				MessageBox::Show("Player O Wins!");
				score = int::Parse(label4->Text);
				label4->Text = Convert::ToString(score + 1);
				enable_false();
			}
		}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Checker == false) {
		button1->Text = "X";
			Checker = true;
	}
	else {
		button1->Text = "O";
		Checker = false;
	}
	winner();
	button1->Enabled = false;
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Checker == false) {
		button2->Text = "X";
		Checker = true;
	}
	else {
		button2->Text = "O";
		Checker = false;
	}
	winner();
	button2->Enabled = false;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Checker == false) {
		button3->Text = "X";
		Checker = true;
	}
	else {
		button3->Text = "O";
		Checker = false;
	}
	winner();
	button3->Enabled = false;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Checker == false) {
		button4->Text = "X";
		Checker = true;
	}
	else {
		button4->Text = "O";
		Checker = false;
	}
	winner();
	button4->Enabled = false;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Checker == false) {
		button5->Text = "X";
		Checker = true;
	}
	else {
		button5->Text = "O";
		Checker = false;
	}
	winner();
	button5->Enabled = false;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Checker == false) {
		button6->Text = "X";
		Checker = true;
	}
	else {
		button6->Text = "O";
		Checker = false;
	}
	winner();
	button6->Enabled = false;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Checker == false) {
		button7->Text = "X";
		Checker = true;
	}
	else {
		button7->Text = "O";
		Checker = false;
	}
	winner();
	button7->Enabled = false;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Checker == false) {
		button8->Text = "X";
		Checker = true;
	}
	else {
		button8->Text = "O";
		Checker = false;
	}
	winner();
	button8->Enabled = false;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Checker == false) {
		button9->Text = "X";
		Checker = true;
	}
	else {
		button9->Text = "O";
		Checker = false;
	}
	winner();
	button9->Enabled = false;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {

	// Reset: resetting all buttons back to original state.
	button1->Enabled = true;
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	button5->Enabled = true;
	button6->Enabled = true;
	button7->Enabled = true;
	button8->Enabled = true;
	button9->Enabled = true;


	// Reset: resetting all buttons back to null.
	button1->Text = "";
	button2->Text = "";
	button3->Text = "";
	button4->Text = "";
	button5->Text = "";
	button6->Text = "";
	button7->Text = "";
	button8->Text = "";
	button9->Text = "";
	button10->Enabled = true;

	button1->BackColor = System::Drawing::Color::GhostWhite;
	button2->BackColor = System::Drawing::Color::GhostWhite;
	button3->BackColor = System::Drawing::Color::GhostWhite;
	button4->BackColor = System::Drawing::Color::GhostWhite;
	button5->BackColor = System::Drawing::Color::GhostWhite;
	button6->BackColor = System::Drawing::Color::GhostWhite;
	button7->BackColor = System::Drawing::Color::GhostWhite;
	button8->BackColor = System::Drawing::Color::GhostWhite;
	button9->BackColor = System::Drawing::Color::GhostWhite;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	// New game: resetting all buttons back to original state.
	button1->Enabled = true;
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	button5->Enabled = true;
	button6->Enabled = true;
	button7->Enabled = true;
	button8->Enabled = true;
	button9->Enabled = true;

	// New game: resetting all buttons back to null.
	button1->Text = "";
	button2->Text = "";
	button3->Text = "";
	button4->Text = "";
	button5->Text = "";
	button6->Text = "";
	button7->Text = "";
	button8->Text = "";
	button9->Text = "";

	// New game: restting scores back to 0.
	label3->Text = "0";
	label4->Text = "0";

	// New game: resetting button colors.
	button1->BackColor = System::Drawing::Color::GhostWhite;
	button2->BackColor = System::Drawing::Color::GhostWhite;
	button3->BackColor = System::Drawing::Color::GhostWhite;
	button4->BackColor = System::Drawing::Color::GhostWhite;
	button5->BackColor = System::Drawing::Color::GhostWhite;
	button6->BackColor = System::Drawing::Color::GhostWhite;
	button7->BackColor = System::Drawing::Color::GhostWhite;
	button8->BackColor = System::Drawing::Color::GhostWhite;
	button9->BackColor = System::Drawing::Color::GhostWhite;
}
};
}