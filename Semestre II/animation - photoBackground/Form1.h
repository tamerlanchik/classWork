#pragma once

namespace анимациянакрасивомфоне {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	const float DX=4,DY=4;

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
			if(pictureBox1->Image == nullptr) {
				Bitmap^ t = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
				pictureBox1->Image = t;
			}
			dx = 0;
			dy = DY;
			X = 100;
			Y = 100;
			r = 50;
			points = initHexagon(points);

			//
		}


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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;
	private:
		/// <summary>
		/// Требуется переменная конструктора.
		Bitmap ^b;
		float X,Y, dx, dy;
		int r;
		array<PointF>  ^points;
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(677, 504);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->WaitOnLoad = true;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button1->Location = System::Drawing::Point(12, 522);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Инициализировать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(157, 522);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Старт";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 5;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(701, 557);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	//без добавления "+1" к размерам прямоугольника угол фигуры не затирается
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Graphics^ gr = Graphics::FromImage(pictureBox1->Image);
				 pictureBox1->Invalidate();
				 Rectangle section = Rectangle(X-r, Y-r, 2*r+1, r*2+1);
				 b = pictureToBitmap(pictureBox1, section);
				 DrawFig(pictureBox1, points);
				 button2->Enabled = true;
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 timer1->Start();
				 button1->Enabled = false;
			 }
	private: Bitmap^ pictureToBitmap(PictureBox^ pBox, Rectangle section){
				 Bitmap^ bmp = gcnew Bitmap(section.Width, section.Height);
				 Graphics^ gr = Graphics::FromImage(bmp);
				 gr->DrawImage(pBox->Image, 0, 0, section, GraphicsUnit::Pixel);
				 return bmp;
			 }
	private: void bitmapToImage(PictureBox^ pBox, Point p, Bitmap^ bmp) {
				Graphics^ gr = Graphics::FromImage(pBox->Image);
				gr->CompositingMode = Drawing2D::CompositingMode::SourceCopy;
				gr->DrawImage(bmp, p);
				pBox->Invalidate();
			}
	private: void DrawFig(PictureBox^ pBox, array<PointF>^ ps){
				SolidBrush ^br = gcnew SolidBrush(Color::Orange);
				Graphics ^gr = Graphics::FromImage(pBox->Image);
				gr->FillPolygon(br, ps);
			}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 bitmapToImage(pictureBox1, Point(X-r,Y-r), b);
			 move(points, dx, dy);
			 Rectangle section = Rectangle(X-r, Y-r, 2*r+1, r*2+1);
			 b = pictureToBitmap(pictureBox1, section);
			 DrawFig(pictureBox1, points);
			 trajectoryWatcher();
		 }
private: System::Void move(array<PointF>^ points, double dx, double dy){
			 for(int i=0; i<points->Length; i++){
				 points[i].X += dx;
				 points[i].Y += dy;
			 }
			 X+=dx;
			 Y+=dy;
		 }
private: array<PointF>^ initHexagon(array<PointF>^ p) {
	p = gcnew array<PointF>(6);

	p[0] = PointF(X + r, Y);
	p[1] = PointF(X + r / 2, Y - 0.87*r);
	p[2] = PointF(X - r / 2, Y - 0.87*r);
	p[3] = PointF(X - r, Y);
	p[4] = PointF(X - r / 2, Y + 0.87*r);
	p[5] = PointF(X + r / 2, Y + 0.87*r);
	return p;
}
private: void trajectoryWatcher(){
			 if(dy>0 && dx==0 && Y>pictureBox1->Height-20-r){
				 dx = DX;
				 dy = 0;
			 }else if(dx > 0 && dy == 0 && X>pictureBox1->Width-r-20){
				 dx = 0;
				 dy = -DY;
			 }else if(dx == 0 && dy<0 && Y<r+30){
				 dx = -DX;
				 dy = 0;
			 }
			 else if(dx < 0 && dy == 0 && X < r+30){
				 dx = 0;
				 dy = DY;
			 }
		 }
};
}

