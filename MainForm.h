#pragma once

namespace XFontForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Сводка для MeshEdit
	/// </summary>
	public ref class MeshEdit : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  InputBox;
	private: System::Windows::Forms::TextBox^  OutputBox;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  Exit;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^ TestText;



	private: System::Windows::Forms::PictureBox^  TexFontBox;


	public:
		MeshEdit()
		{
			InitializeComponent();
		}
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MeshEdit()
		{
		}
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TexFontBox = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->InputBox = (gcnew System::Windows::Forms::TextBox());
			this->OutputBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Exit = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TestText = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TexFontBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// TexFontBox
			// 
			this->TexFontBox->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->TexFontBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->TexFontBox->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->TexFontBox->ImageLocation = L"";
			this->TexFontBox->Location = System::Drawing::Point(491, 76);
			this->TexFontBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TexFontBox->Name = L"TexFontBox";
			this->TexFontBox->Size = System::Drawing::Size(317, 70);
			this->TexFontBox->TabIndex = 0;
			this->TexFontBox->TabStop = false;
			this->TexFontBox->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(42, 37);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(373, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Font Rasterizator for X-Ray";
			// 
			// InputBox
			// 
			this->InputBox->Location = System::Drawing::Point(48, 80);
			this->InputBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->InputBox->Name = L"InputBox";
			this->InputBox->Size = System::Drawing::Size(337, 22);
			this->InputBox->TabIndex = 2;
			// 
			// OutputBox
			// 
			this->OutputBox->Location = System::Drawing::Point(48, 123);
			this->OutputBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->OutputBox->Name = L"OutputBox";
			this->OutputBox->Size = System::Drawing::Size(337, 22);
			this->OutputBox->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(15, 81);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"In:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(1, 123);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Out:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(395, 80);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 25);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Open";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MeshEdit::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(395, 123);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(72, 25);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Set";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MeshEdit::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(352, 176);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 28);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Hurt me!";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MeshEdit::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(1, 164);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Font Size:";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(101, 162);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 32, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(45, 22);
			this->numericUpDown1->TabIndex = 10;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MeshEdit::NumericUpDown1_ValueChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->Exit);
			this->groupBox1->Location = System::Drawing::Point(424, -17);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Size = System::Drawing::Size(49, 46);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(6, 19);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 19);
			this->label5->TabIndex = 1;
			this->label5->Text = L"_";
			this->label5->Click += gcnew System::EventHandler(this, &MeshEdit::label5_Click);
			// 
			// Exit
			// 
			this->Exit->AutoSize = true;
			this->Exit->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Exit->Dock = System::Windows::Forms::DockStyle::Right;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Exit->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Exit->Location = System::Drawing::Point(28, 19);
			this->Exit->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(17, 19);
			this->Exit->TabIndex = 0;
			this->Exit->Text = L"x";
			this->Exit->Click += gcnew System::EventHandler(this, &MeshEdit::Exit_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Location = System::Drawing::Point(-8, -17);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox2->Size = System::Drawing::Size(140, 41);
			this->groupBox2->TabIndex = 12;
			this->groupBox2->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(10, 19);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(127, 16);
			this->label6->TabIndex = 0;
			this->label6->Text = L"[Open Font Cast 0.4]";
			// 
			// TestText
			// 
			this->TestText->Location = System::Drawing::Point(491, 144);
			this->TestText->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TestText->Name = L"TestText";
			this->TestText->Size = System::Drawing::Size(319, 22);
			this->TestText->TabIndex = 13;
			this->TestText->Text = L"Make me XFont";
			this->TestText->TextChanged += gcnew System::EventHandler(this, &MeshEdit::TestText_TextChanged);
			// 
			// MeshEdit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(477, 219);
			this->ControlBox = false;
			this->Controls->Add(this->TestText);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->OutputBox);
			this->Controls->Add(this->InputBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TexFontBox);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MeshEdit";
			this->ShowIcon = false;
			this->Text = L"FontGen";
			this->Load += gcnew System::EventHandler(this, &MeshEdit::MeshEdit_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TexFontBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MakeDraftBox();
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		this->OutputBox->Text = this->folderBrowserDialog1->SelectedPath;
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void Exit_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->Close();
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void MeshEdit_Load(System::Object^  sender, System::EventArgs^  e) {
	ShowWindow((HWND)this->Handle.ToPointer(), SW_SHOW);
}
	private: System::Void NumericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e){
		MakeDraftBox();
	}
private: System::Void TestText_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	MakeDraftBox();
}
};
}