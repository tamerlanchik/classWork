#include <String>
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
double f1(double x);
double fDer1(double x);
double f2(double x);
double fDer2(double x);
double f3(double x);
double fDer3(double x);
int findRoot(double, double, double, double(*)(double), double(*)(double), double*);
//integralCalcMethod
double integral(double, double, double, double(*)(double));
bool isNumber(String^ s);
