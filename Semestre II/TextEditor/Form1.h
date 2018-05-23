#pragma once
#include <String>
namespace TextEditor {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			emptyFileName = gcnew String("Безымянный");
			currentFileName = gcnew String(emptyFileName);
			isTextEdited = false;
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 














	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem6;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem7;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem8;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem9;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem10;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem11;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem12;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem13;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem14;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;





	private:
		/// <summary>
	private: String^ currentFileName;
	private: String^ emptyFileName;
	private: bool isTextEdited;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItem0;

	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;

	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ToolStripMenuItem^  изОткрытогоToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  открытьToolStripMenuItem;
			 /// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem0 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem9 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem10 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem11 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem12 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem13 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem14 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel3 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->изОткрытогоToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Location = System::Drawing::Point(10, 30);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(20, 20, 10, 10);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(710, 350);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox1_TextChanged);
			this->richTextBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::richTextBox1_KeyDown);
			// 
			// richTextBox2
			// 
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox2->Location = System::Drawing::Point(730, 55);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(20, 20, 10, 10);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(600, 325);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = L"";
			this->richTextBox2->Visible = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->DefaultExt = L"rtf";
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"(*.txt, *.rtf)|*.txt;*.rtf|(*.*)|*.*";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {this->toolStripMenuItem4, 
				this->toolStripMenuItem5, this->toolStripMenuItem6, this->ToolStripMenuItem0, this->toolStripMenuItem7, this->toolStripMenuItem8});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(48, 20);
			this->toolStripMenuItem1->Text = L"Файл";
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(162, 22);
			this->toolStripMenuItem4->Text = L"Создать";
			this->toolStripMenuItem4->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem4_Click);
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(162, 22);
			this->toolStripMenuItem5->Text = L"Открыть...";
			this->toolStripMenuItem5->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem5_Click);
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(162, 22);
			this->toolStripMenuItem6->Text = L"Сохранить";
			this->toolStripMenuItem6->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem6_Click);
			// 
			// ToolStripMenuItem0
			// 
			this->ToolStripMenuItem0->Name = L"ToolStripMenuItem0";
			this->ToolStripMenuItem0->Size = System::Drawing::Size(162, 22);
			this->ToolStripMenuItem0->Text = L"Сохранить как...";
			this->ToolStripMenuItem0->Click += gcnew System::EventHandler(this, &Form1::сохранитьКакToolStripMenuItem_Click);
			// 
			// toolStripMenuItem7
			// 
			this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			this->toolStripMenuItem7->Size = System::Drawing::Size(162, 22);
			this->toolStripMenuItem7->Text = L"Очистить";
			this->toolStripMenuItem7->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem7_Click);
			// 
			// toolStripMenuItem8
			// 
			this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
			this->toolStripMenuItem8->Size = System::Drawing::Size(162, 22);
			this->toolStripMenuItem8->Text = L"Выйти";
			this->toolStripMenuItem8->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem8_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->toolStripMenuItem9, 
				this->toolStripMenuItem10, this->toolStripMenuItem11, this->toolStripMenuItem12, this->toolStripMenuItem13});
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(59, 20);
			this->toolStripMenuItem2->Text = L"Правка";
			// 
			// toolStripMenuItem9
			// 
			this->toolStripMenuItem9->Name = L"toolStripMenuItem9";
			this->toolStripMenuItem9->Size = System::Drawing::Size(148, 22);
			this->toolStripMenuItem9->Text = L"Копировать";
			this->toolStripMenuItem9->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem9_Click);
			// 
			// toolStripMenuItem10
			// 
			this->toolStripMenuItem10->Name = L"toolStripMenuItem10";
			this->toolStripMenuItem10->Size = System::Drawing::Size(148, 22);
			this->toolStripMenuItem10->Text = L"Вырезать";
			this->toolStripMenuItem10->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem10_Click);
			// 
			// toolStripMenuItem11
			// 
			this->toolStripMenuItem11->Name = L"toolStripMenuItem11";
			this->toolStripMenuItem11->Size = System::Drawing::Size(148, 22);
			this->toolStripMenuItem11->Text = L"Вставить";
			this->toolStripMenuItem11->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem11_Click);
			// 
			// toolStripMenuItem12
			// 
			this->toolStripMenuItem12->Name = L"toolStripMenuItem12";
			this->toolStripMenuItem12->Size = System::Drawing::Size(148, 22);
			this->toolStripMenuItem12->Text = L"Выделить всё";
			this->toolStripMenuItem12->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem12_Click);
			// 
			// toolStripMenuItem13
			// 
			this->toolStripMenuItem13->Name = L"toolStripMenuItem13";
			this->toolStripMenuItem13->Size = System::Drawing::Size(148, 22);
			this->toolStripMenuItem13->Text = L"Отменить";
			this->toolStripMenuItem13->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem13_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripMenuItem14});
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(57, 20);
			this->toolStripMenuItem3->Text = L"Работа";
			// 
			// toolStripMenuItem14
			// 
			this->toolStripMenuItem14->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->изОткрытогоToolStripMenuItem, 
				this->открытьToolStripMenuItem});
			this->toolStripMenuItem14->Name = L"toolStripMenuItem14";
			this->toolStripMenuItem14->Size = System::Drawing::Size(152, 22);
			this->toolStripMenuItem14->Text = L"Задание";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->toolStripMenuItem1, 
				this->toolStripMenuItem2, this->toolStripMenuItem3});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1344, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"Текстовые документы (*.txt, *.rtf)|*.txt;*.rtf|Все файлы (*.*)|*.*";
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toolStripStatusLabel1, 
				this->toolStripStatusLabel3});
			this->statusStrip1->Location = System::Drawing::Point(0, 390);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1344, 22);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->toolStripStatusLabel1->Size = System::Drawing::Size(20, 17);
			// 
			// toolStripStatusLabel3
			// 
			this->toolStripStatusLabel3->Margin = System::Windows::Forms::Padding(50, 3, 0, 2);
			this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->toolStripStatusLabel3->Size = System::Drawing::Size(20, 17);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(798, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(451, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Visible = false;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(727, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Подстрока:";
			this->label1->Visible = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1255, 29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 20);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Обработать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// изОткрытогоToolStripMenuItem
			// 
			this->изОткрытогоToolStripMenuItem->Name = L"изОткрытогоToolStripMenuItem";
			this->изОткрытогоToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->изОткрытогоToolStripMenuItem->Text = L"Из открытого";
			this->изОткрытогоToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::изОткрытогоToolStripMenuItem_Click);
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->открытьToolStripMenuItem->Text = L"Открыть...";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::открытьToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1344, 412);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Блокнотик";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

//меню "Файл"
	//Create file
	private: System::Void toolStripMenuItem4_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(curruptText()) {
					 currentFileName = emptyFileName;
					 toolStripStatusLabel1->Text = "";
					 richTextBox1->Clear();
					 isTextEdited = false;
					 richTextBox1->Modified = false;
					 toolStripStatusLabel3->Text = "";
				 }
			 }
	//Open file
	private: System::Void toolStripMenuItem5_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(curruptText()) {
					openFile(richTextBox1);
				 }
			 }
	//Save file
	private: System::Void toolStripMenuItem6_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(currentFileName!=emptyFileName)
				 {
					 saveFile();
				 }else {
					 createFile();
				 }
			 }
	//Save as
	private: System::Void сохранитьКакToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				this->createFile();
			}
	//Clear
	private: System::Void toolStripMenuItem7_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(richTextBox1->Text->Length > 0){
					 System::Windows::Forms::DialogResult result;
					 result = MessageBox::Show(this, "Очистить всё?", "Блокнотик", MessageBoxButtons::YesNo);
					 if(result == System::Windows::Forms::DialogResult::Yes) {
						richTextBox1->Clear();
					 }
				 }
				 else{
					 richTextBox1->Clear();
				 }
			 }
	//Exit
	private: System::Void toolStripMenuItem8_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }


//меню "Правка"
	//Copy
	private: System::Void toolStripMenuItem9_Click(System::Object^  sender, System::EventArgs^  e) {
			if ( richTextBox1->SelectionLength > 0 )
			{
				richTextBox1->Copy();
			}
		}
	//Cut
	private: System::Void toolStripMenuItem10_Click(System::Object^  sender, System::EventArgs^  e) {
			if ( richTextBox1->SelectionLength > 0 )
			{
				richTextBox1->Cut();
			}
		}
	//Paste
	private: System::Void toolStripMenuItem11_Click(System::Object^  sender, System::EventArgs^  e) {
			richTextBox1->Paste();
		}
	//Select all
	private: System::Void toolStripMenuItem12_Click(System::Object^  sender, System::EventArgs^  e) {
				 richTextBox1->SelectAll();
			 }
	//UNDO
	private: System::Void toolStripMenuItem13_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(richTextBox1->CanUndo) {
					 richTextBox1->Undo();
				 }
			 }

//меню "Задание"
	private: System::Void изОткрытогоToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 //подготовка и вывод richtextbox2
				 this->Width = 750 + 10 + 600;
				 textBox1->Visible = true;
				 richTextBox2->Visible = true;
				 label1->Visible = true;
				 button1->Visible = true;

				 if(textBox1->Text->Length > 0) {
					 button1_Click(sender, e);
				 }
				 else {
					richTextBox2->Text = richTextBox1->Text;
				 }
			 }
	private: System::Void открытьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(!askIsToSaveFile(richTextBox1)) //если действие отменено
					 return;
				 if(!openFile(richTextBox1)) //если файл не открыт
					return;

				изОткрытогоToolStripMenuItem_Click(sender, e);
			 }
	private: System::Windows::Forms::DialogResult isToSaveFileMessageBox() {
				 return MessageBox::Show(this, "Сохранить изменения в файле \"" + currentFileName + "\"?", "Файл был изменён", MessageBoxButtons::YesNoCancel);
			 }

//работа с файлами
	private: System::Boolean askIsToSaveFile(RichTextBox^ richTextBox) {
				 if(richTextBox->Modified) {
					 System::Windows::Forms::DialogResult result = isToSaveFileMessageBox();
					 if(result == System::Windows::Forms::DialogResult::OK) {
						 saveFile();
					 }
					 else if(result == System::Windows::Forms::DialogResult::Cancel) {
						 return false;
					 }
				 }
				 return true;
			 }
	private: System::Boolean createFile() {
				 System::Windows::Forms::DialogResult res = saveFileDialog1->ShowDialog(); 
				 if(res == System::Windows::Forms::DialogResult::OK &&
					 saveFileDialog1->FileName->Length >0)
				 {
					 currentFileName = saveFileDialog1->FileName;
					 toolStripStatusLabel1->Text = currentFileName;
					 saveFile();
					 return true;
				 }
				 else {
					 if(res != System::Windows::Forms::DialogResult::Cancel)
						MessageBox::Show(this, "Ошибка создания файла!", "Ошибка", MessageBoxButtons::OK);
					 return false;
				 }
			 }
	private: System::Boolean openFile(RichTextBox^ richTextBox) {
					 System::Windows::Forms::DialogResult res = openFileDialog1->ShowDialog();
					 if(res == System::Windows::Forms::DialogResult::OK &&
						 openFileDialog1->FileName->Length >0)
					 {
						 currentFileName = openFileDialog1->FileName;
						 toolStripStatusLabel1->Text = openFileDialog1->FileName;
						 richTextBox->LoadFile(openFileDialog1->FileName, RichTextBoxStreamType::RichText);
						 isTextEdited = false;
						 richTextBox->Modified = false;
						 toolStripStatusLabel3->Text = "";
						 return true;
					 }
					 else {
						 if(res != System::Windows::Forms::DialogResult::Cancel) {
							MessageBox::Show(this, "Ошибка открытия файла!", "Error", MessageBoxButtons::OK);
						 }
						 return false;
					 }
			 }
	private: System::Void saveFile() {
					richTextBox1->SaveFile(currentFileName);
					isTextEdited = false;
					richTextBox1->Modified = false;
					toolStripStatusLabel3->Text = "Сохранено";
			 }
	private: System::Boolean curruptText() {
				 if(richTextBox1->Modified) {
					 System::Windows::Forms::DialogResult result = isToSaveFileMessageBox();
					 if(result == System::Windows::Forms::DialogResult::Yes) {
						 if(currentFileName == emptyFileName) {
							if(!createFile())
								return false;
						}
						else {
							saveFile();
						}
						return true;
					}else if(result == System::Windows::Forms::DialogResult::No)
					 {
						 return true;
					}else{
						return false;
					}
				 }
				 return true;
			 }

//Text changed
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 isTextEdited = true;
			 toolStripStatusLabel3->Text = "Есть несохраненные изменения";
			 //toolStripStatusLabel3->Text = Convert::ToString(richTextBox1->Modified);
		 }
//Отлавливаем Ctrl+S
private: System::Void richTextBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			if (e->KeyCode == Keys::S && e->Control) 
            {
                System::Windows::Forms::DialogResult res = MessageBox::Show(this, "Сохранить?", "Ask", MessageBoxButtons::YesNoCancel);
				if(res == System::Windows::Forms::DialogResult::Yes)
				{
					if(currentFileName=="")
					{
						createFile();
					}
					else{
						saveFile();
					}
				}
                e->Handled = true;
            }
		 }

//задание
	private: System::Void workWithText(String^ substring) {
				 richTextBox2->Text = richTextBox1->Text;
				 int ind=-1;
				 while(true) {
					 ind = richTextBox2->Text->IndexOf("-", ind+1);
					 //MessageBox::Show(this, Convert::ToString(ind), "Ask", MessageBoxButtons::YesNo);
					 if(ind>=0)
					 {
						 richTextBox2->Text = richTextBox2->Text->Insert(ind+1, substring);
					 }
					 else {
						 break;
					 }
				 }
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ substr = textBox1->Text;
				 workWithText(substr);
			 }
	//отлов клавиши Enter в textbox1
	private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if(e->KeyChar == '\r')
					button1_Click(sender, e);
			 }

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 this->Width = 750;
		 }
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 /*if(isTextEdited == true) {
					 System::Windows::Forms::DialogResult result;
					 result = MessageBox::Show(this, "Сохранить файл?", "Ask", MessageBoxButtons::YesNoCancel);
					 if(result == System::Windows::Forms::DialogResult::Yes) {
						 if(currentFileName == "") {
							 if(!createFile())
								 e->Cancel = true;
						 }
						 else {
							saveFile(); //save file
						 }
					 }
					 else if(result == System::Windows::Forms::DialogResult::Cancel) {
						 e->Cancel = true;
					 }
			 }*/
			 //TODO: при очистке текста слетает флак модификации
			 if(!curruptText())
			 {
				 e->Cancel = true;
			 }
		 }

};
}

