#pragma once
#include <cmath>
namespace calculatorwimForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Label^ label1;
	private: int first_value = 0;
	private: int second_value = 0;
	private: char user_action = ' ';
	private: bool var_double = false;
	private: bool var_clear = false;
	private: double first_value_double = 0;
	private: double second_value_double = 0;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::Window;
			this->button1->Location = System::Drawing::Point(12, 433);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 65);
			this->button1->TabIndex = 0;
			this->button1->Text = L"+/-";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::Window;
			this->button2->Location = System::Drawing::Point(127, 433);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 65);
			this->button2->TabIndex = 1;
			this->button2->Text = L"0";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::check_numbers_click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::Window;
			this->button3->Location = System::Drawing::Point(242, 433);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 65);
			this->button3->TabIndex = 2;
			this->button3->Text = L",";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button4->Location = System::Drawing::Point(357, 433);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(109, 65);
			this->button4->TabIndex = 3;
			this->button4->Text = L"=";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button5->Location = System::Drawing::Point(357, 362);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(109, 65);
			this->button5->TabIndex = 7;
			this->button5->Text = L"*";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::check_action_click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::Window;
			this->button6->Location = System::Drawing::Point(242, 362);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(109, 65);
			this->button6->TabIndex = 6;
			this->button6->Text = L"3";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::check_numbers_click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::Window;
			this->button7->Location = System::Drawing::Point(127, 362);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(109, 65);
			this->button7->TabIndex = 5;
			this->button7->Text = L"2";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::check_numbers_click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::Window;
			this->button8->Location = System::Drawing::Point(12, 362);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(109, 65);
			this->button8->TabIndex = 4;
			this->button8->Text = L"1";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::check_numbers_click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button9->Location = System::Drawing::Point(357, 291);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(109, 65);
			this->button9->TabIndex = 11;
			this->button9->Text = L"/";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::check_action_click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::Window;
			this->button10->Location = System::Drawing::Point(242, 291);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(109, 65);
			this->button10->TabIndex = 10;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::check_numbers_click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::SystemColors::Window;
			this->button11->Location = System::Drawing::Point(127, 291);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(109, 65);
			this->button11->TabIndex = 9;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::check_numbers_click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::SystemColors::Window;
			this->button12->Location = System::Drawing::Point(12, 291);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(109, 65);
			this->button12->TabIndex = 8;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::check_numbers_click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button13->Location = System::Drawing::Point(356, 220);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(109, 65);
			this->button13->TabIndex = 15;
			this->button13->Text = L"-";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::check_action_click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::SystemColors::Window;
			this->button14->Location = System::Drawing::Point(242, 220);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(109, 65);
			this->button14->TabIndex = 14;
			this->button14->Text = L"9";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::check_numbers_click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::SystemColors::Window;
			this->button15->Location = System::Drawing::Point(126, 220);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(109, 65);
			this->button15->TabIndex = 13;
			this->button15->Text = L"8";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::check_numbers_click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::SystemColors::Window;
			this->button16->Location = System::Drawing::Point(11, 220);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(109, 65);
			this->button16->TabIndex = 12;
			this->button16->Text = L"7";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::check_numbers_click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button17->Location = System::Drawing::Point(357, 149);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(109, 65);
			this->button17->TabIndex = 19;
			this->button17->Text = L"+";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::check_action_click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->ForeColor = System::Drawing::SystemColors::Window;
			this->button18->Location = System::Drawing::Point(242, 149);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(109, 65);
			this->button18->TabIndex = 18;
			this->button18->Text = L"Sqrt";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->ForeColor = System::Drawing::SystemColors::Window;
			this->button19->Location = System::Drawing::Point(127, 149);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(109, 65);
			this->button19->TabIndex = 17;
			this->button19->Text = L"Pow";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->ForeColor = System::Drawing::SystemColors::Window;
			this->button20->Location = System::Drawing::Point(12, 149);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(109, 65);
			this->button20->TabIndex = 16;
			this->button20->Text = L"C";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::Window;
			this->label1->Location = System::Drawing::Point(12, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(454, 101);
			this->label1->TabIndex = 20;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(477, 521);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: System::Void check_numbers_click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);
		if (label1->Text == "0")
		{
			label1->Text = button->Text;
		}
		else
		{
			label1->Text += button->Text;
		}
	}
	private: System::Void check_action_click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);
		if (user_action == ' ')
		{
		user_action = Convert::ToChar(button->Text);
		try
		{
			if (var_double == false)
			{
				first_value = Convert::ToInt64(label1->Text);
			}
			else
			{

			}
		}
		catch (...)
		{
			MessageBox::Show(this, "слишком большое число", "error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			first_value = 0;
			user_action = ' ';
		}
		label1->Text = "0";
		}
		else
		{
			try
			{
				user_action = Convert::ToChar(button->Text);
				second_value = Convert::ToInt64(label1->Text);
				if (user_action == '+')
				{
					first_value += second_value;
					label1->Text = "0";
				}
				if (user_action == '-')
				{
					first_value -= second_value;
					label1->Text = "0";
				}
				if (user_action == '/')
				{
					first_value /= second_value;
					label1->Text = "0";
				}
				if (user_action == '*')
				{
					first_value *= second_value;
					label1->Text = "0";
				}
			}
			catch (...)
			{
				MessageBox::Show(this, "слишком большое число", "error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				second_value = 0;
				user_action = ' ';
				label1->Text = "0";
			}
		}
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		second_value = Convert::ToInt64(label1->Text);
		if (user_action == '+')
		{
			first_value += second_value;
		}
		if (user_action == '-')
		{
			first_value -= second_value;
		}
		if (user_action == '/')
		{
			first_value /= second_value;
		}
		if (user_action == '*')
		{
			first_value *= second_value;
		}
		user_action = ' ';
		label1->Text = Convert::ToString(first_value);
		button20->Text = "AC";
		var_clear = true;
	}
	catch (...)
	{
		MessageBox::Show(this, "слишком большое число", "error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		second_value = 0;
		user_action = ' ';
		label1->Text = "0";
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (var_double == true)
	{
		double value = Convert::ToDouble(label1->Text);
		value *= -1;
		label1->Text = Convert::ToString(value);
	}
	else
	{
		int value = Convert::ToInt64(label1->Text);
		value *= -1;
		label1->Text = Convert::ToString(value);
	}
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	if (var_clear == false)
	{
		if (var_double == true)
		{
		
			label1->Text = "0";
		}
		else
		{
			int value = Convert::ToInt64(label1->Text);
			value /= 10;
			label1->Text = Convert::ToString(value);
		}
	}
	else
	{
		first_value = 0;
		second_value = 0;
		user_action = ' ';
		var_clear = false;
		button20->Text = "C";
		label1->Text = "0";
	}
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	if (var_double == true)
	{
		double value = Convert::ToDouble(label1->Text);
		value = pow(value, 2);
		label1->Text = Convert::ToString(value);
	}
	else
	{
		int value = Convert::ToInt64(label1->Text);
		value = pow(value, 2);
		label1->Text = Convert::ToString(value);
	}
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	if (var_double == true)
	{
		double value = Convert::ToDouble(label1->Text);
		value = sqrt(value);
		label1->Text = Convert::ToString(value);
	}
	else
	{
		int value = Convert::ToInt64(label1->Text);
		value = sqrt(value);
		label1->Text = Convert::ToString(value);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (var_double == false)
	{
		label1->Text += ",";
		var_double = true;
	}
}
};
}
