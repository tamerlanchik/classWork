#pragma once
#include <cmath>
namespace animation {



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
			/*p1 = gcnew Pen(Color::Black, 5);
			b1 = gcnew SolidBrush(Color::Orange);
			a = gcnew array<PointF>(6);
			a[0] = PointF(-100, -50);
			a[1] = PointF(0, -100);
			a[2] = PointF(100, -50);
			a[3] = PointF(100, 50);
			a[4] = PointF(0, 100);
			a[5] = PointF(-100, 50);
			x1 = pictureBox1->Size.Width / 2;
			y1 = pictureBox1->Size.Height / 2;
			for(int i=0; i<6; i++)
				 {
					 a[i].X+=x1;
					 a[i].Y+=y1;
				 }

			dA = 0.1;
			//центр вращения
			x1+=30;
			y1-=30;*/
			//
			//TODO: добавьте код конструктора
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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		Pen^ p1;
		//array <PointF>^ a;
		array<PointF>  ^points3;
		Brush^ b1;
		Graphics^ gr;
		float x0, y0, r, dX, dY, dScale, maxSize, minSize;
		int wW, wH;
		float dA;
		array<bool>^ timerState;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::Timer^  timer4;
	private: System::Windows::Forms::Timer^  timer2;

			 /// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(463, 443);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Turquoise;
			this->button1->Location = System::Drawing::Point(12, 461);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Начать";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gainsboro;
			this->button3->Location = System::Drawing::Point(150, 461);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Движение";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// timer2
			// 
			this->timer2->Interval = 30;
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gainsboro;
			this->button2->Location = System::Drawing::Point(348, 461);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Пульсация";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click_1);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Gainsboro;
			this->button4->Location = System::Drawing::Point(267, 461);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Вращение";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// timer3
			// 
			this->timer3->Interval = 30;
			this->timer3->Tick += gcnew System::EventHandler(this, &Form1::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Interval = 30;
			this->timer4->Tick += gcnew System::EventHandler(this, &Form1::timer4_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(487, 496);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form1";
			this->Text = L"Анимация";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &Form1::Form1_SizeChanged);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	x0 = 200;
	y0 = Height / 2 - 100;
	r = 80;
	dX = 3;
	dY = 2;
	dA = 0.1;
	dScale = 1.03;
	maxSize = Math::Min(pictureBox1->Width, pictureBox1->Height) / 1.2;
	minSize = 100;

	b1 = gcnew SolidBrush(Color::Orange);
	points3 = initHexagon(points3);

	gr = pictureBox1->CreateGraphics();
	wW = Width;
	wH = Height;
	timerState = gcnew array<bool>(4);
	for (int i = 0; i < timerState->Length; i++) {
		timerState[i] = false;
	}

}
private: array<PointF>^ initHexagon(array<PointF>^ p) {
	p = gcnew array<PointF>(6);

	p[0] = PointF(x0 + r, y0);
	p[1] = PointF(x0 + r / 2, y0 - 0.87*r);
	p[2] = PointF(x0 - r / 2, y0 - 0.87*r);
	p[3] = PointF(x0 - r, y0);
	p[4] = PointF(x0 - r / 2, y0 + 0.87*r);
	p[5] = PointF(x0 + r / 2, y0 + 0.87*r);
	return p;
}
private: System::Void move(array<PointF>^ points, double dx, double dy){
			 for(int i=0; i<points->Length; i++){
				 points[i].X += dx;
				 points[i].Y += dy;
			 }
		 }
private: System::Void rotate(array<PointF>^ points, double angle) {
	float X1t;
	float Y1t;
	for (int i = 0; i<points->Length; i++) {
		X1t = points[i].X - x0;
		Y1t = points[i].Y - y0;
		points[i].X = X1t * Math::Cos(angle) - Y1t * Math::Sin(angle) + x0;
		points[i].Y = X1t * Math::Sin(angle) + Y1t * Math::Cos(angle) + y0;
	}
}
private: System::Void scale(array<PointF>^ p, double dScale) {
	float X1t;
	float Y1t;
	for (int i = 0; i < p->Length; i++) {
		X1t = p[i].X - x0;
		Y1t = p[i].Y - y0;
		X1t *= dScale;
		Y1t *= dScale;
		p[i].X = x0 + X1t;
		p[i].Y = y0 + Y1t;
	}
}
private: System::Void trajectoryWatch() {
	if (x0<r || y0<r)
	{
		dX = abs(dX);
		dY = abs(dY);
	}
	else if (pictureBox1->Width - x0<r || pictureBox1->Height - y0<r)
	{
		dX = abs(dX)*(-1);
		dY = abs(dY)*(-1);
	}
	x0 += dX;
	y0 += dY;

}

private: System::Void clearArea()
{
	gr->Clear(Color::White);
}
private: System::Void draw(array<PointF> ^p, Brush^ b){
			gr->FillPolygon(b, p);
}



//КНОПКИ
//Старт-стоп
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button1->BackColor == Color::LightPink) {
		button1->BackColor = Color::LightGreen;
		button1->Text = "Продолжить";
		timer1->Stop();
		timer2->Stop(); timer3->Stop(); timer4->Stop();
	}
	else {
		button1->BackColor = Color::LightPink;
		button1->Text = "Остановить";
		if(timerState[0])
			timer1->Enabled = true;
		if (timerState[1])
			timer2->Enabled = true;
		if (timerState[2])
			timer3->Enabled = true;
		timer4->Enabled = true;
	}
		 }
//Пульсация
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	timer4->Start();
	if (button2->BackColor != Color::LightGreen) {
		button2->BackColor = Color::LightGreen;
		timer1->Start();
		timerState[0] = true;
	}
	else {
		button2->BackColor = Color::Gainsboro;
		timer1->Stop();
		timerState[0] = false;
	}
}
//Вращение
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	timer4->Start();
	if (button3->BackColor != Color::LightGreen) {
		button3->BackColor = Color::LightGreen;
		timer2->Start();
		timerState[1] = true;
	}
	else {
		button3->BackColor = Color::Gainsboro;
		timer2->Stop();
		timerState[1] = false;
	}
}
//Движение по траектории
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	timer4->Start();
	if (button4->BackColor != Color::LightGreen) {
		button4->BackColor = Color::LightGreen;
		timer3->Start();
		timerState[2] = true;
	}
	else {
		button4->BackColor = Color::Gainsboro;
		timer3->Stop();
		timerState[2] = false;
	}
}

//ТАЙМЕРЫ
//Пульсация
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if (distance(points3[0], points3[3]) > maxSize) {
				 dScale = dScale>1 ? 1/dScale : dScale;
			 }
			 else if (distance(points3[0], points3[3]) < minSize)
			 {
				 dScale = dScale < 1 ? 1 / dScale : dScale;
			 }
			 scale(points3, dScale);
		}
//Движение по траектории
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
	trajectoryWatch();
	move(points3, dX, dY);
}
//Вращение
private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
	rotate(points3, dA);
}
//Отрисовка
private: System::Void timer4_Tick(System::Object^  sender, System::EventArgs^  e) {
	clearArea();
	draw(points3, b1);
}

private: double distance(PointF p1, PointF p2) {
	return sqrt(pow(p1.X - p2.X, 2) + pow(p1.Y - p2.Y, 2));
}

//Перемещение кнопок при изменении размера окна
private: System::Void Form1_SizeChanged(System::Object^  sender, System::EventArgs^  e) {
			 pictureBox1->Width+= Width-wW;
			 pictureBox1->Height+= Height-wH;
			 gr = pictureBox1->CreateGraphics();
			 button1->Location = System::Drawing::Point(button1->Location.X+Width-wW, button1->Location.Y+Height-wH);
			 button2->Location = System::Drawing::Point(button2->Location.X+Width-wW, button2->Location.Y+Height-wH);
			 button3->Location = System::Drawing::Point(button3->Location.X+Width-wW, button3->Location.Y+Height-wH);
			 button4->Location = System::Drawing::Point(button4->Location.X + Width - wW, button4->Location.Y + Height - wH);
			 wW = Width;
			 wH = Height;
		 }
};
}

