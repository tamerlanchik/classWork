#pragma once
#include "function.h"

namespace MathLab2Menuextrremums {
	typedef double (TFunc)(double);
	TFunc *f[3];
	TFunc *der[3];
	struct FieldData{
		double Mx,My;
		double Xmax;
		double Xmin;
		double Ymax;
		double Ymin;
	};
	enum viewMode { TBL, EXTR, ROOT, INTGRL, GRPH };

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
			//
			fName = gcnew array<String^>(3);
			fName[0] = gcnew String("y=x");
			fName[1] = gcnew String("y=sin(x)");
			fName[2] = gcnew String("y=x^2+1");

			f[0] = f1;
			f[1] = f2;
			f[2] = f3;

			der[0] = fDer1;
			der[1] = fDer2;
			der[2] = fDer3;
			selectedFunc = 0;
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
	
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DataGridView^  dataGridView1;

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;

	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem6;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem7;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem8;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem9;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem10;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem11;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem12;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::ToolStripMenuItem^  экстремумыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  экстремумыToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  экстремумыToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  графикToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  графикToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  графикToolStripMenuItem2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: array<String^> ^fName;
	private: int selectedFunc;
	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->экстремумыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->графикToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem9 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem10 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->экстремумыToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->графикToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem11 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem12 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem13 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->экстремумыToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->графикToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Левая граница";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Правая граница";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Точность";
			// 
			// textBox1
			// 
			this->textBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox1->Location = System::Drawing::Point(15, 50);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 104);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(15, 160);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(26, 197);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(26, 227);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Выход";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(140, 34);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Таблица";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Default;
			this->dataGridView1->Location = System::Drawing::Point(140, 55);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 50;
			this->dataGridView1->Size = System::Drawing::Size(294, 204);
			this->dataGridView1->TabIndex = 12;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"№";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"X";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 50;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"F(X)";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 190;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMenuItem1 });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(449, 24);
			this->menuStrip1->TabIndex = 13;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem2,
					this->toolStripMenuItem3, this->toolStripMenuItem4
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(68, 20);
			this->toolStripMenuItem1->Text = L"Функции";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripMenuItem5,
					this->toolStripMenuItem6, this->toolStripMenuItem7, this->экстремумыToolStripMenuItem, this->графикToolStripMenuItem
			});
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem2->Text = L"y=x";
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(144, 22);
			this->toolStripMenuItem5->Text = L"Таблица";
			this->toolStripMenuItem5->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem5_Click);
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(144, 22);
			this->toolStripMenuItem6->Text = L"Интеграл";
			this->toolStripMenuItem6->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem6_Click);
			// 
			// toolStripMenuItem7
			// 
			this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			this->toolStripMenuItem7->Size = System::Drawing::Size(144, 22);
			this->toolStripMenuItem7->Text = L"Корень";
			this->toolStripMenuItem7->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem7_Click);
			// 
			// экстремумыToolStripMenuItem
			// 
			this->экстремумыToolStripMenuItem->Name = L"экстремумыToolStripMenuItem";
			this->экстремумыToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->экстремумыToolStripMenuItem->Text = L"Экстремумы";
			this->экстремумыToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::экстремумыToolStripMenuItem_Click);
			// 
			// графикToolStripMenuItem
			// 
			this->графикToolStripMenuItem->Name = L"графикToolStripMenuItem";
			this->графикToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->графикToolStripMenuItem->Text = L"График";
			this->графикToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::графикToolStripMenuItem_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripMenuItem8,
					this->toolStripMenuItem9, this->toolStripMenuItem10, this->экстремумыToolStripMenuItem1, this->графикToolStripMenuItem1
			});
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem3->Text = L"y=sin(x)";
			// 
			// toolStripMenuItem8
			// 
			this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
			this->toolStripMenuItem8->Size = System::Drawing::Size(144, 22);
			this->toolStripMenuItem8->Text = L"Таблица";
			this->toolStripMenuItem8->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem8_Click);
			// 
			// toolStripMenuItem9
			// 
			this->toolStripMenuItem9->Name = L"toolStripMenuItem9";
			this->toolStripMenuItem9->Size = System::Drawing::Size(144, 22);
			this->toolStripMenuItem9->Text = L"Интеграл";
			this->toolStripMenuItem9->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem9_Click);
			// 
			// toolStripMenuItem10
			// 
			this->toolStripMenuItem10->Name = L"toolStripMenuItem10";
			this->toolStripMenuItem10->Size = System::Drawing::Size(144, 22);
			this->toolStripMenuItem10->Text = L"Корень";
			this->toolStripMenuItem10->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem10_Click);
			// 
			// экстремумыToolStripMenuItem1
			// 
			this->экстремумыToolStripMenuItem1->Name = L"экстремумыToolStripMenuItem1";
			this->экстремумыToolStripMenuItem1->Size = System::Drawing::Size(144, 22);
			this->экстремумыToolStripMenuItem1->Text = L"Экстремумы";
			this->экстремумыToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::экстремумыToolStripMenuItem1_Click);
			// 
			// графикToolStripMenuItem1
			// 
			this->графикToolStripMenuItem1->Name = L"графикToolStripMenuItem1";
			this->графикToolStripMenuItem1->Size = System::Drawing::Size(144, 22);
			this->графикToolStripMenuItem1->Text = L"График";
			this->графикToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::графикToolStripMenuItem1_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripMenuItem11,
					this->toolStripMenuItem12, this->toolStripMenuItem13, this->экстремумыToolStripMenuItem2, this->графикToolStripMenuItem2
			});
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(121, 22);
			this->toolStripMenuItem4->Text = L"y=x^2+1";
			// 
			// toolStripMenuItem11
			// 
			this->toolStripMenuItem11->Name = L"toolStripMenuItem11";
			this->toolStripMenuItem11->Size = System::Drawing::Size(144, 22);
			this->toolStripMenuItem11->Text = L"Таблица";
			this->toolStripMenuItem11->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem11_Click);
			// 
			// toolStripMenuItem12
			// 
			this->toolStripMenuItem12->Name = L"toolStripMenuItem12";
			this->toolStripMenuItem12->Size = System::Drawing::Size(144, 22);
			this->toolStripMenuItem12->Text = L"Интеграл";
			this->toolStripMenuItem12->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem12_Click);
			// 
			// toolStripMenuItem13
			// 
			this->toolStripMenuItem13->Name = L"toolStripMenuItem13";
			this->toolStripMenuItem13->Size = System::Drawing::Size(144, 22);
			this->toolStripMenuItem13->Text = L"Корень";
			this->toolStripMenuItem13->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem13_Click);
			// 
			// экстремумыToolStripMenuItem2
			// 
			this->экстремумыToolStripMenuItem2->Name = L"экстремумыToolStripMenuItem2";
			this->экстремумыToolStripMenuItem2->Size = System::Drawing::Size(144, 22);
			this->экстремумыToolStripMenuItem2->Text = L"Экстремумы";
			this->экстремумыToolStripMenuItem2->Click += gcnew System::EventHandler(this, &Form1::экстремумыToolStripMenuItem2_Click);
			// 
			// графикToolStripMenuItem2
			// 
			this->графикToolStripMenuItem2->Name = L"графикToolStripMenuItem2";
			this->графикToolStripMenuItem2->Size = System::Drawing::Size(144, 22);
			this->графикToolStripMenuItem2->Text = L"График";
			this->графикToolStripMenuItem2->Click += gcnew System::EventHandler(this, &Form1::графикToolStripMenuItem2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(279, 34);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(600, 500);
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(449, 262);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"MatLab";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//EXIT
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	//CLEAR
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		dataGridView1->Rows->Clear();
		dataGridView1->RowCount = 1;
		dataGridView1->ColumnCount = 3;
		dataGridView1->Columns[0]->HeaderCell->Value = "№";
		dataGridView1->Columns[0]->Width = 50;
		dataGridView1->Columns[1]->HeaderCell->Value = "X";
		dataGridView1->Columns[1]->Width = 50;
		dataGridView1->Columns[2]->HeaderCell->Value = "F(X)";
		dataGridView1->Columns[2]->Width = 173;
	}

	private: System::Boolean getInputValues(double& a, double& b, double& eps, bool needEps) {
		String ^st1, ^st2, ^st3;
		st1 = textBox1->Text->Replace(".", ",");
		st2 = textBox2->Text->Replace(".", ",");
		if(needEps)
		st3 = textBox3->Text->Replace(".", ",");
		if (!Double::TryParse(st1, a) || !Double::TryParse(st2, b) || (needEps ? !Double::TryParse(st3, eps) : false))
		{
			MessageBox::Show(this, "Неверные входные значения!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return 0;
		}
		else {
			a = Convert::ToDouble(st1);
			b = Convert::ToDouble(st2);
			if (a > b) {
				double temp = a;
				a = b;
				b = temp;
				textBox1->Text = Convert::ToString(a);
				textBox2->Text = Convert::ToString(b);
			}
			if (needEps) {
				eps = Convert::ToDouble(st3);
				if (eps < 0)
				{
					eps *= -1;
					textBox3->Text = Convert::ToString(eps);
				}
				else if (eps == 0)
				{
					MessageBox::Show(this, "Точность не может быть равна 0!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return 0;
				}
			}
		}
		return 1;
	}

	//Table
	private: System::Void toolStripMenuItem5_Click(System::Object^  sender, System::EventArgs^  e) {
		selectedFunc = 0;
		tab();
	}
	private: System::Void toolStripMenuItem8_Click(System::Object^  sender, System::EventArgs^  e) {
		selectedFunc = 1;
		tab();
	}
	private: System::Void toolStripMenuItem11_Click(System::Object^  sender, System::EventArgs^  e) {
		selectedFunc = 2;
		tab();
	}

	private: System::Void tab()
	{
		double a, b, eps;
		if (!getInputValues(a, b, eps, true)) {
			return;
		}

		windowViewDial(TBL);
	
		for (double x = a, long long i = 0; x <= (b + eps / 2); x += eps, i++)
		{
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(i + 1);
			dataGridView1->Rows[i]->Cells[1]->Value = Convert::ToString(x);
			dataGridView1->Rows[i]->Cells[2]->Value = Convert::ToString(f[selectedFunc](x));
		}
	}


	//Integral
	private: System::Void toolStripMenuItem6_Click(System::Object^  sender, System::EventArgs^  e) {
		selectedFunc = 0;
		showIntegral();
	}
	private: System::Void toolStripMenuItem9_Click(System::Object^  sender, System::EventArgs^  e) {
		selectedFunc = 1;
		showIntegral();
	}
	private: System::Void toolStripMenuItem12_Click(System::Object^  sender, System::EventArgs^  e) {
		selectedFunc = 2;
		showIntegral();
	}

	private: System::Void showIntegral(){
		double a, b, eps;
		if (!getInputValues(a, b, eps, true)) {
			return;
		}

		windowViewDial(INTGRL);

		double res = integral(a,b,eps,f[selectedFunc]);
		dataGridView1->Rows[0]->Cells[0]->Value = Convert::ToString(res);
	}


	//Roots
	private: System::Void toolStripMenuItem7_Click(System::Object^  sender, System::EventArgs^  e) {
		selectedFunc = 0;
		showRoot();
	}
	private: System::Void toolStripMenuItem13_Click(System::Object^  sender, System::EventArgs^  e) {
		selectedFunc = 1;
		showRoot();
	}
	private: System::Void toolStripMenuItem10_Click(System::Object^  sender, System::EventArgs^  e) {
		selectedFunc = 2;
		showRoot();
	}

	private: System::Void showRoot() {
		double a, b, eps;
		if (!getInputValues(a, b, eps, true)) {
			return;
		}
		windowViewDial(ROOT);
		double res;
		if(findRoot(a,b,eps,f[selectedFunc],der[selectedFunc],&res))
			dataGridView1->Rows[0]->Cells[0]->Value = Convert::ToString(res);
		else
			dataGridView1->Rows[0]->Cells[0]->Value = "Корней нет, либо их несколько";
	}


	//Extremums
	private: System::Void экстремумыToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		selectedFunc = 0;
		extremumsFinder();
	}
	private: System::Void экстремумыToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		selectedFunc = 1;
		extremumsFinder();
	}
	private: System::Void экстремумыToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
		selectedFunc = 2;
		extremumsFinder();
	}

	private: System::Void extremumsFinder() {
		double a, b, dx;
		if (!getInputValues(a, b, dx, true)) {
			return;
		}
		windowViewDial(EXTR);
		
		double minY = f[selectedFunc](a), maxY = minY;
		bool flag_minY = false, flag_maxY = false;
		double x1 = a, x2 = x1 + dx, x3 = x2 + dx;
		int i = 0, j = 0;
		while (x3 <= b)
		{
			if (f[selectedFunc](x2)>f[selectedFunc](x1) && f[selectedFunc](x2)>f[selectedFunc](x3))  //maximum
			{
				flag_maxY = true;
				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(i + 1);
				dataGridView1->Rows[i]->Cells[1]->Value = Convert::ToString(x2);
				dataGridView1->Rows[i]->Cells[2]->Value = "Max: " + Convert::ToString(f[selectedFunc](x2));
				i++;
				if (maxY<f[selectedFunc](x2))
				{
					maxY = f[selectedFunc](x2);
				}
			}
			else if (f[selectedFunc](x2)<f[selectedFunc](x1) && f[selectedFunc](x2)<f[selectedFunc](x3)) //minimum
			{
				flag_minY = true;
				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(i + 1);
				dataGridView1->Rows[i]->Cells[1]->Value = Convert::ToString(x2);
				dataGridView1->Rows[i]->Cells[2]->Value = "Min: " + Convert::ToString(f[selectedFunc](x2));
				i++;
				if (minY>f[selectedFunc](x2))
				{
					minY = f[selectedFunc](x2);
				}
			}
			x1 = x2; x2 = x3; x3 += dx;
		}

		dataGridView1->Rows->Add();
		dataGridView1->Rows[i]->Cells[1]->Value = "Глобальный максимум";
		dataGridView1->Rows[i+1]->Cells[1]->Value = "Глобальный минимум";

		if (flag_minY)
			dataGridView1->Rows[i]->Cells[2]->Value = Convert::ToString(minY);
		else
			dataGridView1->Rows[i]->Cells[2]->Value = "Не найден";

		if (flag_maxY)
			dataGridView1->Rows[i+1]->Cells[2]->Value = Convert::ToString(maxY);
		else
			dataGridView1->Rows[i+1]->Cells[2]->Value = "Не найден";

	}


	//Graphs
	private: System::Void графикToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 selectedFunc = 0;
				 drawGraphPreparing();
			 }
	private: System::Void графикToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
				 selectedFunc = 1;
				 drawGraphPreparing();
			 }
	private: System::Void графикToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
				 selectedFunc = 2;
				 drawGraphPreparing();
			 }

	private: System::Void drawGraphPreparing() {
		double a,b;
		if(getInputValues(a,b,a,false)){
			windowViewDial(GRPH);		

			Pen ^pen = gcnew Pen(Color::Black);
			Graphics ^gr = pictureBox1->CreateGraphics();
			gr->Clear(Color::White);
			gr->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::AntiAlias;

			FieldData fd;
			array<Point>^ t = drawGraph(pictureBox1->ClientRectangle, a, b, gr, fd);
			decorateArea(gr, fd, pictureBox1->ClientRectangle,a,b);
			gr->DrawLines(pen, t);
		}
	}
	private: array<Point>^ drawGraph(System::Drawing::Rectangle rec, double a, double b, Graphics^ gr, FieldData& fd)
				 {
					 int count = rec.Width - rec.X + 1;
					 double h = (b-a)/(count-1);
					 fd.Ymax = f[selectedFunc](a);
					 fd.Ymin = f[selectedFunc](a);

					 for(double x=a+h; x<b+h/2; x+=h)
					 {
						 if(fd.Ymax<f[selectedFunc](x)) fd.Ymax = f[selectedFunc](x);
						 if(fd.Ymin>f[selectedFunc](x)) fd.Ymin = f[selectedFunc](x);
					 }

					 fd.Mx = 1/h;
					 fd.My = (rec.Height - rec.Y)/(fd.Ymax-fd.Ymin);

					 array<Point>^ mas = gcnew array<Point>(count);
					 double x = a;
					 for(int i=0; i<count; i++, x+=h)
						 mas[i] = Point(rec.X + fd.Mx*(x-a), rec.Height-fd.My*(f[selectedFunc](x)-fd.Ymin));
					 return mas;
				 }
	private: System::Void decorateArea(Graphics^ gr, FieldData& fd, System::Drawing::Rectangle rec, double a,double b) {
		Pen ^pen = gcnew Pen(Color::LightGray);

		//scale
		double scX = rec.Width/(b-a);
		double scY = rec.Height/(fd.Ymax-fd.Ymin);
		int step = 20;
		//coordinate of the center (in px)
		float cX = (rec.X + fd.Mx*(-a));
		float cY = (rec.Height-fd.My*(-fd.Ymin));

		//Grid
		for(int i=0; i<rec.Width; i+=step)
		{
			gr->DrawLine(pen, rec.X+((int)(abs(a)*scX))%step+i, rec.Y, rec.X+((int)(abs(a)*scX))%step+i, rec.Y+rec.Height);
		}
		for(int i=0; i<rec.Height; i+=step)
		{
			gr->DrawLine(pen, rec.X,  rec.Y + (int)(abs(fd.Ymax)*scY)%step+i, rec.X+rec.Width,  rec.Y + (int)(abs(fd.Ymax)*scY)%step+i);
		}

		//axes
		pen->Color = Color::Black;
		gr->DrawLine(pen, rec.X + fd.Mx*(-a), rec.Y, rec.X + fd.Mx*(-a), rec.Y+rec.Height);
		gr->DrawLine(pen, rec.X, rec.Height-fd.My*(-fd.Ymin), rec.X+rec.Width, rec.Height-fd.My*(-fd.Ymin));
		gr->DrawString("X", gcnew System::Drawing::Font("Arial", 9), Brushes::Black, PointF(rec.X+rec.Width-12, rec.Height-fd.My*(-fd.Ymin)-17));
		gr->DrawString("Y", gcnew System::Drawing::Font("Arial", 9), Brushes::Black, PointF(rec.X + fd.Mx*(-a) - 15, rec.Y));

		//X borders
		gr->DrawString(textBox1->Text, gcnew System::Drawing::Font("Arial", 9), Brushes::Black, PointF(rec.X, rec.Height-fd.My*(-fd.Ymin)));
		gr->DrawString(textBox2->Text, gcnew System::Drawing::Font("Arial", 9), Brushes::Black, PointF(rec.X+rec.Width-12, rec.Height-fd.My*(-fd.Ymin)+3));
			
		//Y borders
		fd.Ymax = round(fd.Ymax * 1000) / 1000;
		fd.Ymin = round(fd.Ymin * 1000) / 1000;

		gr->DrawString(Convert::ToString(fd.Ymax), gcnew System::Drawing::Font("Arial", 9), Brushes::Black, PointF(rec.X + fd.Mx*(-a)+5, rec.Y));
		gr->DrawString(Convert::ToString(fd.Ymin), gcnew System::Drawing::Font("Arial", 9), Brushes::Black, PointF(rec.X + fd.Mx*(-a)+5, rec.Y+rec.Height-20));
	}

	//VIEW
	private: System::Void windowViewDial(int mode) {
		switch (mode) {
		case TBL: {
			this->Width = 465;
			this->Height = 300;
			this->Height = 300;
			dataGridView1->Visible = true;
			pictureBox1->Visible = false;
			dataGridView1->Width = 294;
			dataGridView1->RowCount = 1;
			dataGridView1->ColumnCount = 3;
			dataGridView1->Columns[0]->HeaderCell->Value = "№";
			dataGridView1->Columns[0]->Width = 50;
			dataGridView1->Columns[1]->HeaderCell->Value = "X";
			dataGridView1->Columns[1]->Width = 50;
			dataGridView1->Columns[2]->HeaderCell->Value = fName[selectedFunc];
			dataGridView1->Columns[2]->Width = 173;
			label4->Text = "Таблица функции " + fName[selectedFunc];
			break; }
		case INTGRL: {
			label4->Text = "Интеграл функции " + fName[selectedFunc];
			this->Width = 465;
			this->Height = 300;
			dataGridView1->Visible = true;
			pictureBox1->Visible = false;
			dataGridView1->Width = 294;
			dataGridView1->RowCount = 1;
			dataGridView1->ColumnCount = 1;
			dataGridView1->Columns[0]->HeaderCell->Value = "Интеграл";
			dataGridView1->Columns[0]->Width = 294 - 4;
			break; }
		case ROOT:{
			label4->Text = "Корни функции " + fName[selectedFunc];
			this->Width = 465;
			this->Height = 300;
			dataGridView1->Visible = true;
			pictureBox1->Visible = false;
			dataGridView1->Width = 294;
			dataGridView1->RowCount = 1;
			dataGridView1->ColumnCount = 1;
			dataGridView1->Columns[0]->HeaderCell->Value = "Корень";
			dataGridView1->Columns[0]->Width = 290;
			break;}
		case EXTR: {
			this->Width = 465 + 60;
			this->Height = 300;
			dataGridView1->Visible = true;
			pictureBox1->Visible = false;
			dataGridView1->Width = 353;
			dataGridView1->RowCount = 1;
			dataGridView1->ColumnCount = 3;
			dataGridView1->Columns[0]->HeaderCell->Value = "№";
			dataGridView1->Columns[0]->Width = 50;
			dataGridView1->Columns[1]->HeaderCell->Value = "X";
			dataGridView1->Columns[1]->Width = 150;
			dataGridView1->Columns[2]->HeaderCell->Value = "Y";
			dataGridView1->Columns[2]->Width = 150;
			label4->Text = "Экстремумы функции " + fName[selectedFunc];
			break; }
		case GRPH: {
			this->Width = 140 + 600 + 20;
			this->Height = 600;
			dataGridView1->Visible = false;
			pictureBox1->Visible = true;
			pictureBox1->Location = dataGridView1->Location;
			this->Update();
			label4->Text = "График функции " + fName[selectedFunc];
			break; }
		default:
			break;
		}
	}
	
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		toolStripMenuItem2->Text = fName[0];
		toolStripMenuItem3->Text = fName[1];
		toolStripMenuItem4->Text = fName[2];
	}
};
}


