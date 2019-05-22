#pragma once
#include "comp.h"
namespace lab4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			
			PrepareGraph();
		}

	
	private: System::Windows::Forms::Label^  label5;
	public:
	private: System::Windows::Forms::TextBox^  tim2;
	private: System::Windows::Forms::TextBox^  tre2;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;	
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::Label^  label8;

	private: System::Windows::Forms::RadioButton^  radioButton4;
	
	

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  tre;
	private: System::Windows::Forms::TextBox^  tim;



	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	protected:
	private: System::ComponentModel::IContainer^  components;

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
			this->components = (gcnew System::ComponentModel::Container());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tre = (gcnew System::Windows::Forms::TextBox());
			this->tim = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tim2 = (gcnew System::Windows::Forms::TextBox());
			this->tre2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->zedGraphControl1->Location = System::Drawing::Point(3, 2);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(556, 380);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(699, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(9, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"i";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(642, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"+";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(568, 247);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Построить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tre
			// 
			this->tre->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->tre->Location = System::Drawing::Point(600, 57);
			this->tre->Name = L"tre";
			this->tre->Size = System::Drawing::Size(36, 20);
			this->tre->TabIndex = 4;
			// 
			// tim
			// 
			this->tim->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->tim->Location = System::Drawing::Point(661, 57);
			this->tim->Name = L"tim";
			this->tim->Size = System::Drawing::Size(36, 20);
			this->tim->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(575, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Комплексные числа:";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(565, 60);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Z1  =";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(565, 95);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Z2  =";
			// 
			// tim2
			// 
			this->tim2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->tim2->Location = System::Drawing::Point(661, 92);
			this->tim2->Name = L"tim2";
			this->tim2->Size = System::Drawing::Size(36, 20);
			this->tim2->TabIndex = 11;
			// 
			// tre2
			// 
			this->tre2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->tre2->Location = System::Drawing::Point(600, 92);
			this->tre2->Name = L"tre2";
			this->tre2->Size = System::Drawing::Size(36, 20);
			this->tre2->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(642, 95);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"+";
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(699, 95);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(9, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"i";
			// 
			// radioButton1
			// 
			this->radioButton1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(576, 144);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(76, 17);
			this->radioButton1->TabIndex = 13;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Сложение";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(576, 167);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(80, 17);
			this->radioButton2->TabIndex = 14;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Вычитание";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(576, 190);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(85, 17);
			this->radioButton3->TabIndex = 15;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Умножение";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(577, 213);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(70, 17);
			this->radioButton4->TabIndex = 16;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Деление";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(565, 128);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Операция:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(722, 394);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tim2);
			this->Controls->Add(this->tre2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tim);
			this->Controls->Add(this->tre);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->zedGraphControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}


	private: void PrepareGraph()
	{
		GraphPane^ myPane = zedGraphControl1->GraphPane;
		myPane->XAxis->Title->Text = "Re";
		myPane->YAxis->Title->Text = "Im";
		myPane->Title->Text = "Комплексное число";
		//удаление подписей к графику и осям
		myPane->Title->IsVisible = true;
		myPane->XAxis->Title->IsVisible = true;
		myPane->YAxis->Title->IsVisible = true;
		//авторазмеры осей
		myPane->XAxis->Scale->MinAuto = true;
		myPane->YAxis->Scale->MinAuto = true;
		myPane->XAxis->Scale->MaxAuto = true;
		myPane->YAxis->Scale->MaxAuto = true;
		//удаление меток на противоположных осям сторонах
		myPane->XAxis->MajorTic->IsOpposite = false;
		myPane->XAxis->MinorTic->IsOpposite = false;
		myPane->YAxis->MajorTic->IsOpposite = false;
		myPane->YAxis->MinorTic->IsOpposite = false;
		//сетка
		myPane->XAxis->MajorGrid->IsVisible = true;
		myPane->YAxis->MajorGrid->IsVisible = true;
		//формат чисел на осях
		myPane->XAxis->Scale->Format = "G3";
		myPane->XAxis->Scale->Mag = 0;
		myPane->YAxis->Scale->Format = "G3";
		myPane->YAxis->Scale->Mag = 0;
		//обновление графика
		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		GraphPane^ myPane = zedGraphControl1->GraphPane;
		PointPairList^ list = gcnew PointPairList();
		PointPairList^ first_ = gcnew PointPairList();
		PointPairList^ second_ = gcnew PointPairList();
	
		double re1 = System::Convert::ToDouble(tre->Text);
		double im1 = System::Convert::ToDouble(tim->Text);
		double re2 = System::Convert::ToDouble(tre2->Text);
		double im2 = System::Convert::ToDouble(tim2->Text);
		Complex A(re1, im1);
		Complex B(re2, im2);
		cout << A;
		if (!radioButton1->Checked && !radioButton2->Checked && !radioButton3->Checked && !radioButton4->Checked)
		{
			MessageBox::Show("Не выбрали действие!");
		}
		else
		{
			myPane->CurveList->Clear();
			first_->Clear();
			second_->Clear();
			list->Clear();
			first_->Add(0, 0);
			first_->Add((A.getRe()), (A.getIm()));
			second_->Add(0, 0);
			second_->Add((B.getRe()), (B.getIm()));
			LineItem^ first = myPane->AddCurve("Первое число", first_, Color::Red, SymbolType::Circle);
			LineItem^ second = myPane->AddCurve("Второе число", second_, Color::Yellow, SymbolType::Circle);
			if (radioButton1->Checked) {				
				Complex res = A + B;				
				list->Add(0, 0);
				list->Add((res.getRe()), (res.getIm()));
				LineItem^ result = myPane->AddCurve("Результат", list, Color::Blue, SymbolType::Circle);			
				zedGraphControl1->AxisChange();
				zedGraphControl1->Invalidate();

			}
			if (radioButton2->Checked) {
				Complex res = A - B;
				list->Add(0, 0);
				list->Add((res.getRe()), (res.getIm()));
				LineItem^ result = myPane->AddCurve("Результат", list, Color::Blue, SymbolType::Circle);
				zedGraphControl1->AxisChange();
				zedGraphControl1->Invalidate();
			}
			if (radioButton3->Checked) {
				Complex res = A * B;
				list->Add(0, 0);
				list->Add((res.getRe()), (res.getIm()));
				LineItem^ result = myPane->AddCurve("Результат", list, Color::Blue, SymbolType::Circle);
				zedGraphControl1->AxisChange();
				zedGraphControl1->Invalidate();
			}
			if (radioButton4->Checked) {
				Complex res = A / B;
				list->Add(0, 0);
				list->Add((res.getRe()), (res.getIm()));
				LineItem^ result = myPane->AddCurve("Результат", list, Color::Blue, SymbolType::Circle);
				zedGraphControl1->AxisChange();
				zedGraphControl1->Invalidate();
			}
		}
		

	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
