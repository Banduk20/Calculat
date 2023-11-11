#pragma once

namespace тест1 {

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
	private: System::Windows::Forms::Label^ vid;
	protected:

	private: System::Windows::Forms::Button^ pm;


	private: System::Windows::Forms::Button^ num1;


	private: System::Windows::Forms::Button^ num4;
	private: System::Windows::Forms::Button^ num7;
	private: System::Windows::Forms::Button^ num8;
	private: System::Windows::Forms::Button^ num9;
	private: System::Windows::Forms::Button^ AC;








	private: System::Windows::Forms::Button^ num5;

	private: System::Windows::Forms::Button^ num2;
	private: System::Windows::Forms::Button^ num;


	private: System::Windows::Forms::Button^ num6;

	private: System::Windows::Forms::Button^ num3;
	private: System::Windows::Forms::Button^ res;


	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ mn;
	private: System::Windows::Forms::Button^ dil;



	private: System::Windows::Forms::Button^ min;
	private: System::Windows::Forms::Button^ po;
	private: System::Windows::Forms::Label^ result;
	private: System::Windows::Forms::Label^ vse;


	protected:



	protected:


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->vid = (gcnew System::Windows::Forms::Label());
			this->pm = (gcnew System::Windows::Forms::Button());
			this->num1 = (gcnew System::Windows::Forms::Button());
			this->num4 = (gcnew System::Windows::Forms::Button());
			this->num7 = (gcnew System::Windows::Forms::Button());
			this->num8 = (gcnew System::Windows::Forms::Button());
			this->num9 = (gcnew System::Windows::Forms::Button());
			this->AC = (gcnew System::Windows::Forms::Button());
			this->num5 = (gcnew System::Windows::Forms::Button());
			this->num2 = (gcnew System::Windows::Forms::Button());
			this->num = (gcnew System::Windows::Forms::Button());
			this->num6 = (gcnew System::Windows::Forms::Button());
			this->num3 = (gcnew System::Windows::Forms::Button());
			this->res = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->mn = (gcnew System::Windows::Forms::Button());
			this->dil = (gcnew System::Windows::Forms::Button());
			this->min = (gcnew System::Windows::Forms::Button());
			this->po = (gcnew System::Windows::Forms::Button());
			this->result = (gcnew System::Windows::Forms::Label());
			this->vse = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// vid
			// 
			this->vid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->vid->ForeColor = System::Drawing::Color::White;
			this->vid->Location = System::Drawing::Point(54, 64);
			this->vid->Name = L"vid";
			this->vid->Size = System::Drawing::Size(330, 36);
			this->vid->TabIndex = 1;
			this->vid->Text = L"0";
			this->vid->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// pm
			// 
			this->pm->BackColor = System::Drawing::Color::LightSlateGray;
			this->pm->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pm->ForeColor = System::Drawing::Color::Transparent;
			this->pm->Location = System::Drawing::Point(40, 407);
			this->pm->Name = L"pm";
			this->pm->Size = System::Drawing::Size(70, 70);
			this->pm->TabIndex = 2;
			this->pm->Text = L"+/-";
			this->pm->UseVisualStyleBackColor = false;
			this->pm->Click += gcnew System::EventHandler(this, &Form1::pm_Click);
			// 
			// num1
			// 
			this->num1->BackColor = System::Drawing::Color::DarkOrange;
			this->num1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num1->ForeColor = System::Drawing::Color::Transparent;
			this->num1->Location = System::Drawing::Point(40, 331);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(70, 70);
			this->num1->TabIndex = 3;
			this->num1->Text = L"1";
			this->num1->UseVisualStyleBackColor = false;
			this->num1->Click += gcnew System::EventHandler(this, &Form1::btn_Click);
			// 
			// num4
			// 
			this->num4->BackColor = System::Drawing::Color::DarkOrange;
			this->num4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num4->ForeColor = System::Drawing::Color::Transparent;
			this->num4->Location = System::Drawing::Point(40, 255);
			this->num4->Name = L"num4";
			this->num4->Size = System::Drawing::Size(70, 70);
			this->num4->TabIndex = 4;
			this->num4->Text = L"4";
			this->num4->UseVisualStyleBackColor = false;
			this->num4->Click += gcnew System::EventHandler(this, &Form1::btn_Click);
			// 
			// num7
			// 
			this->num7->BackColor = System::Drawing::Color::DarkOrange;
			this->num7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num7->ForeColor = System::Drawing::Color::Transparent;
			this->num7->Location = System::Drawing::Point(40, 179);
			this->num7->Name = L"num7";
			this->num7->Size = System::Drawing::Size(70, 70);
			this->num7->TabIndex = 5;
			this->num7->Text = L"7";
			this->num7->UseVisualStyleBackColor = false;
			this->num7->Click += gcnew System::EventHandler(this, &Form1::btn_Click);
			// 
			// num8
			// 
			this->num8->BackColor = System::Drawing::Color::DarkOrange;
			this->num8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num8->ForeColor = System::Drawing::Color::Transparent;
			this->num8->Location = System::Drawing::Point(127, 179);
			this->num8->Name = L"num8";
			this->num8->Size = System::Drawing::Size(70, 70);
			this->num8->TabIndex = 6;
			this->num8->Text = L"8";
			this->num8->UseVisualStyleBackColor = false;
			this->num8->Click += gcnew System::EventHandler(this, &Form1::btn_Click);
			// 
			// num9
			// 
			this->num9->BackColor = System::Drawing::Color::DarkOrange;
			this->num9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num9->ForeColor = System::Drawing::Color::Transparent;
			this->num9->Location = System::Drawing::Point(217, 179);
			this->num9->Name = L"num9";
			this->num9->Size = System::Drawing::Size(70, 70);
			this->num9->TabIndex = 0;
			this->num9->Text = L"9";
			this->num9->UseVisualStyleBackColor = false;
			this->num9->Click += gcnew System::EventHandler(this, &Form1::btn_Click);
			// 
			// AC
			// 
			this->AC->BackColor = System::Drawing::Color::LightSlateGray;
			this->AC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AC->ForeColor = System::Drawing::Color::Transparent;
			this->AC->Location = System::Drawing::Point(40, 103);
			this->AC->Name = L"AC";
			this->AC->Size = System::Drawing::Size(70, 70);
			this->AC->TabIndex = 8;
			this->AC->Text = L"AC";
			this->AC->UseVisualStyleBackColor = false;
			this->AC->Click += gcnew System::EventHandler(this, &Form1::AC_Click);
			// 
			// num5
			// 
			this->num5->BackColor = System::Drawing::Color::DarkOrange;
			this->num5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num5->ForeColor = System::Drawing::Color::Transparent;
			this->num5->Location = System::Drawing::Point(127, 255);
			this->num5->Name = L"num5";
			this->num5->Size = System::Drawing::Size(70, 70);
			this->num5->TabIndex = 9;
			this->num5->Text = L"5";
			this->num5->UseVisualStyleBackColor = false;
			this->num5->Click += gcnew System::EventHandler(this, &Form1::btn_Click);
			// 
			// num2
			// 
			this->num2->BackColor = System::Drawing::Color::DarkOrange;
			this->num2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num2->ForeColor = System::Drawing::Color::Transparent;
			this->num2->Location = System::Drawing::Point(127, 331);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(70, 70);
			this->num2->TabIndex = 10;
			this->num2->Text = L"2";
			this->num2->UseVisualStyleBackColor = false;
			this->num2->Click += gcnew System::EventHandler(this, &Form1::btn_Click);
			// 
			// num
			// 
			this->num->BackColor = System::Drawing::Color::DarkOrange;
			this->num->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num->ForeColor = System::Drawing::Color::Transparent;
			this->num->Location = System::Drawing::Point(127, 407);
			this->num->Name = L"num";
			this->num->Size = System::Drawing::Size(70, 70);
			this->num->TabIndex = 11;
			this->num->Text = L"0";
			this->num->UseVisualStyleBackColor = false;
			this->num->Click += gcnew System::EventHandler(this, &Form1::btn_Click);
			// 
			// num6
			// 
			this->num6->BackColor = System::Drawing::Color::DarkOrange;
			this->num6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num6->ForeColor = System::Drawing::Color::Transparent;
			this->num6->Location = System::Drawing::Point(217, 255);
			this->num6->Name = L"num6";
			this->num6->Size = System::Drawing::Size(70, 70);
			this->num6->TabIndex = 12;
			this->num6->Text = L"6";
			this->num6->UseVisualStyleBackColor = false;
			this->num6->Click += gcnew System::EventHandler(this, &Form1::btn_Click);
			// 
			// num3
			// 
			this->num3->BackColor = System::Drawing::Color::DarkOrange;
			this->num3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num3->ForeColor = System::Drawing::Color::Transparent;
			this->num3->Location = System::Drawing::Point(217, 331);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(70, 70);
			this->num3->TabIndex = 13;
			this->num3->Text = L"3";
			this->num3->UseVisualStyleBackColor = false;
			this->num3->Click += gcnew System::EventHandler(this, &Form1::btn_Click);
			// 
			// res
			// 
			this->res->BackColor = System::Drawing::Color::LightSlateGray;
			this->res->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->res->ForeColor = System::Drawing::Color::Transparent;
			this->res->Location = System::Drawing::Point(127, 103);
			this->res->Name = L"res";
			this->res->Size = System::Drawing::Size(70, 70);
			this->res->TabIndex = 14;
			this->res->Text = L"=";
			this->res->UseVisualStyleBackColor = false;
			this->res->Click += gcnew System::EventHandler(this, &Form1::res_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::LightSlateGray;
			this->plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plus->ForeColor = System::Drawing::Color::Transparent;
			this->plus->Location = System::Drawing::Point(297, 179);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(102, 70);
			this->plus->TabIndex = 15;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &Form1::plus_Click);
			// 
			// mn
			// 
			this->mn->BackColor = System::Drawing::Color::LightSlateGray;
			this->mn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mn->ForeColor = System::Drawing::Color::Transparent;
			this->mn->Location = System::Drawing::Point(297, 255);
			this->mn->Name = L"mn";
			this->mn->Size = System::Drawing::Size(102, 70);
			this->mn->TabIndex = 16;
			this->mn->Text = L"*";
			this->mn->UseVisualStyleBackColor = false;
			this->mn->Click += gcnew System::EventHandler(this, &Form1::mn_Click);
			// 
			// dil
			// 
			this->dil->BackColor = System::Drawing::Color::LightSlateGray;
			this->dil->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dil->ForeColor = System::Drawing::Color::Transparent;
			this->dil->Location = System::Drawing::Point(297, 331);
			this->dil->Name = L"dil";
			this->dil->Size = System::Drawing::Size(102, 70);
			this->dil->TabIndex = 17;
			this->dil->Text = L"/";
			this->dil->UseVisualStyleBackColor = false;
			this->dil->Click += gcnew System::EventHandler(this, &Form1::dil_Click);
			// 
			// min
			// 
			this->min->BackColor = System::Drawing::Color::LightSlateGray;
			this->min->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->min->ForeColor = System::Drawing::Color::Transparent;
			this->min->Location = System::Drawing::Point(297, 411);
			this->min->Name = L"min";
			this->min->Size = System::Drawing::Size(102, 70);
			this->min->TabIndex = 18;
			this->min->Text = L"-";
			this->min->UseVisualStyleBackColor = false;
			this->min->Click += gcnew System::EventHandler(this, &Form1::min_Click);
			// 
			// po
			// 
			this->po->BackColor = System::Drawing::Color::LightSlateGray;
			this->po->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->po->ForeColor = System::Drawing::Color::Transparent;
			this->po->Location = System::Drawing::Point(217, 411);
			this->po->Name = L"po";
			this->po->Size = System::Drawing::Size(70, 70);
			this->po->TabIndex = 19;
			this->po->Text = L",";
			this->po->UseVisualStyleBackColor = false;
			this->po->Click += gcnew System::EventHandler(this, &Form1::po_Click);
			// 
			// result
			// 
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result->ForeColor = System::Drawing::Color::Gold;
			this->result->Location = System::Drawing::Point(211, 103);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(182, 59);
			this->result->TabIndex = 20;
			this->result->Text = L"=";
			this->result->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// vse
			// 
			this->vse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->vse->ForeColor = System::Drawing::Color::White;
			this->vse->Location = System::Drawing::Point(40, 27);
			this->vse->Name = L"vse";
			this->vse->Size = System::Drawing::Size(359, 37);
			this->vse->TabIndex = 21;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(411, 493);
			this->Controls->Add(this->vse);
			this->Controls->Add(this->result);
			this->Controls->Add(this->po);
			this->Controls->Add(this->min);
			this->Controls->Add(this->dil);
			this->Controls->Add(this->mn);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->res);
			this->Controls->Add(this->num3);
			this->Controls->Add(this->num6);
			this->Controls->Add(this->num);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->num5);
			this->Controls->Add(this->AC);
			this->Controls->Add(this->num9);
			this->Controls->Add(this->num8);
			this->Controls->Add(this->num7);
			this->Controls->Add(this->num4);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->pm);
			this->Controls->Add(this->vid);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);

		}
#pragma endregion
	
		float fir;
		char user_action=' ';
		bool cleanvid = false;
		float zap = 0;
		int lich = 0;
private: System::Void btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->vid->ForeColor = Color::White;
	Button^ button = safe_cast<Button^> (sender);
	if (this->vid->Text == "0" || cleanvid) {
		this->vid->Text = button->Text;
		cleanvid = false;
	}
	else 
		this->vid->Text = this->vid->Text + button->Text;
}


private: System::Void min_Click(System::Object^ sender, System::EventArgs^ e) {
	dia('-');
	if (lich==0)
	{
		zap = System::Convert::ToDouble(this->vid->Text);
		lich++;
		this->vse->Text = System::Convert::ToString(fir) + "+";
	}

}
private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
	dia('+');
}
private: System::Void mn_Click(System::Object^ sender, System::EventArgs^ e) {

	dia('*');
}
private: System::Void dil_Click(System::Object^ sender, System::EventArgs^ e) {

	dia('/');
}
	   private: System::Void dia(char action) {
		   this->user_action = (action);
		   this->result->Text = this->vid->Text;
		  this->fir = System::Convert::ToDouble(this->vid->Text);
		   this->vid->Text="0";
	   }

private: System::Void res_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user_action == ' ')
		return;
	float sec = System::Convert::ToDouble(this->vid->Text);
	float kin;
	fir = System::Convert::ToDouble(this->result->Text);
	switch (user_action)
	{
	case '+':
		kin=this->fir + sec;
		this->vse->Text = System::Convert::ToString(fir)+"+"+ System::Convert::ToString(sec);
		break;
	case '-':
		kin = this->fir - sec;
		this->vse->Text = System::Convert::ToString(fir) + "-" + System::Convert::ToString(sec);
		break;
	case '*':
		kin = this->fir * sec;
		this->vse->Text = System::Convert::ToString(fir) + "*" + System::Convert::ToString(sec);
		break;
	case '/':
		
		if (!sec == 0)
		{
			kin = this->fir / sec;
			this->vse->Text = System::Convert::ToString(fir) + "/" + System::Convert::ToString(sec);
		}
		else
		{
			MessageBox::Show(this, "Дія заборонена", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			kin = 0;
			this->vid->ForeColor = Color::DarkRed;
		}
		break;
	}
	
		this->result->Text = System::Convert::ToString(kin);

	
}
private: System::Void AC_Click(System::Object^ sender, System::EventArgs^ e) {
	this->vid->Text = "0";
	this->vid->ForeColor = Color::White;
	this->fir = 0;
	this->user_action = ' ';
	this->cleanvid = false;
	this->result->Text="0";
	this->vse->Text = " ";
}
private: System::Void po_Click(System::Object^ sender, System::EventArgs^ e) {
	this->vid->Text = this->vid->Text + po->Text;
}
private: System::Void pm_Click(System::Object^ sender, System::EventArgs^ e) {
	float num = System::Convert::ToDouble(this->vid->Text);
	num *= -1;
	this->vid->Text = System::Convert::ToString(num);
}


};
}
