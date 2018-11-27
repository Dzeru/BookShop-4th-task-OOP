#pragma once
#include "TestConstants.h"

namespace bookShop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для BookForm
	/// </summary>
	public ref class BookForm : public System::Windows::Forms::Form
	{
	public:
		BookForm(void)
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
		~BookForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBoxConfig;
	protected:
	private: System::Windows::Forms::Label^  labelDaysNumber;
	private: System::Windows::Forms::Button^  buttonStop;
	private: System::Windows::Forms::Button^  buttonStart;
	private: System::Windows::Forms::TextBox^  textBoxDayStep;
	private: System::Windows::Forms::TextBox^  textBoxDaysNumber;
	private: System::Windows::Forms::Label^  labelDayStep;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Timer^  timerConfig;
	private: System::Windows::Forms::TextBox^  textBoxSec;
	private: System::Windows::Forms::Label^  labelSec;
	private: System::Windows::Forms::GroupBox^  groupBoxAssortment;
	private: System::Windows::Forms::DataGridView^  dataGridViewAssortment;
	private: System::Windows::Forms::DataGridView^  dataGridViewShowAll;











	private: System::Windows::Forms::Label^  labelShowAll;








	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Key;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Value;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  BookName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Author;
	private: System::Windows::Forms::DataGridViewButtonColumn^  ShowAll;















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
			this->groupBoxConfig = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxSec = (gcnew System::Windows::Forms::TextBox());
			this->labelSec = (gcnew System::Windows::Forms::Label());
			this->buttonStop = (gcnew System::Windows::Forms::Button());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->textBoxDayStep = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDaysNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelDayStep = (gcnew System::Windows::Forms::Label());
			this->labelDaysNumber = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->timerConfig = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBoxAssortment = (gcnew System::Windows::Forms::GroupBox());
			this->labelShowAll = (gcnew System::Windows::Forms::Label());
			this->dataGridViewShowAll = (gcnew System::Windows::Forms::DataGridView());
			this->Key = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Value = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewAssortment = (gcnew System::Windows::Forms::DataGridView());
			this->BookName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Author = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ShowAll = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->groupBoxConfig->SuspendLayout();
			this->groupBoxAssortment->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewShowAll))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAssortment))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBoxConfig
			// 
			this->groupBoxConfig->Controls->Add(this->textBoxSec);
			this->groupBoxConfig->Controls->Add(this->labelSec);
			this->groupBoxConfig->Controls->Add(this->buttonStop);
			this->groupBoxConfig->Controls->Add(this->buttonStart);
			this->groupBoxConfig->Controls->Add(this->textBoxDayStep);
			this->groupBoxConfig->Controls->Add(this->textBoxDaysNumber);
			this->groupBoxConfig->Controls->Add(this->labelDayStep);
			this->groupBoxConfig->Controls->Add(this->labelDaysNumber);
			this->groupBoxConfig->Location = System::Drawing::Point(13, 13);
			this->groupBoxConfig->Name = L"groupBoxConfig";
			this->groupBoxConfig->Size = System::Drawing::Size(267, 275);
			this->groupBoxConfig->TabIndex = 0;
			this->groupBoxConfig->TabStop = false;
			this->groupBoxConfig->Text = L"Конфигурация";
			this->groupBoxConfig->Enter += gcnew System::EventHandler(this, &BookForm::groupBoxConfig_Enter);
			// 
			// textBoxSec
			// 
			this->textBoxSec->Location = System::Drawing::Point(168, 141);
			this->textBoxSec->Name = L"textBoxSec";
			this->textBoxSec->Size = System::Drawing::Size(80, 30);
			this->textBoxSec->TabIndex = 7;
			// 
			// labelSec
			// 
			this->labelSec->AutoSize = true;
			this->labelSec->Location = System::Drawing::Point(6, 141);
			this->labelSec->Name = L"labelSec";
			this->labelSec->Size = System::Drawing::Size(143, 23);
			this->labelSec->TabIndex = 6;
			this->labelSec->Text = L"Секунд на шаг";
			// 
			// buttonStop
			// 
			this->buttonStop->Location = System::Drawing::Point(148, 197);
			this->buttonStop->Name = L"buttonStop";
			this->buttonStop->Size = System::Drawing::Size(100, 41);
			this->buttonStop->TabIndex = 5;
			this->buttonStop->Text = L"Стоп";
			this->buttonStop->UseVisualStyleBackColor = true;
			this->buttonStop->Click += gcnew System::EventHandler(this, &BookForm::buttonStop_Click);
			// 
			// buttonStart
			// 
			this->buttonStart->Location = System::Drawing::Point(10, 197);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(102, 41);
			this->buttonStart->TabIndex = 4;
			this->buttonStart->Text = L"Старт";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->buttonStart->Click += gcnew System::EventHandler(this, &BookForm::buttonStart_Click);
			// 
			// textBoxDayStep
			// 
			this->textBoxDayStep->Location = System::Drawing::Point(168, 89);
			this->textBoxDayStep->Name = L"textBoxDayStep";
			this->textBoxDayStep->Size = System::Drawing::Size(81, 30);
			this->textBoxDayStep->TabIndex = 3;
			// 
			// textBoxDaysNumber
			// 
			this->textBoxDaysNumber->Location = System::Drawing::Point(168, 39);
			this->textBoxDaysNumber->Name = L"textBoxDaysNumber";
			this->textBoxDaysNumber->Size = System::Drawing::Size(81, 30);
			this->textBoxDaysNumber->TabIndex = 2;
			// 
			// labelDayStep
			// 
			this->labelDayStep->AutoSize = true;
			this->labelDayStep->Location = System::Drawing::Point(7, 89);
			this->labelDayStep->Name = L"labelDayStep";
			this->labelDayStep->Size = System::Drawing::Size(112, 23);
			this->labelDayStep->TabIndex = 1;
			this->labelDayStep->Text = L"Шаг в днях";
			// 
			// labelDaysNumber
			// 
			this->labelDaysNumber->AutoSize = true;
			this->labelDaysNumber->Location = System::Drawing::Point(7, 39);
			this->labelDaysNumber->Name = L"labelDaysNumber";
			this->labelDaysNumber->Size = System::Drawing::Size(122, 23);
			this->labelDaysNumber->TabIndex = 0;
			this->labelDaysNumber->Text = L"Кол-во дней";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 294);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 30);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0";
			// 
			// timerConfig
			// 
			this->timerConfig->Tick += gcnew System::EventHandler(this, &BookForm::timerConfig_Tick);
			// 
			// groupBoxAssortment
			// 
			this->groupBoxAssortment->Controls->Add(this->labelShowAll);
			this->groupBoxAssortment->Controls->Add(this->dataGridViewShowAll);
			this->groupBoxAssortment->Controls->Add(this->dataGridViewAssortment);
			this->groupBoxAssortment->Location = System::Drawing::Point(308, 13);
			this->groupBoxAssortment->Name = L"groupBoxAssortment";
			this->groupBoxAssortment->Size = System::Drawing::Size(515, 698);
			this->groupBoxAssortment->TabIndex = 2;
			this->groupBoxAssortment->TabStop = false;
			this->groupBoxAssortment->Text = L"Ассортимент";
			// 
			// labelShowAll
			// 
			this->labelShowAll->AutoSize = true;
			this->labelShowAll->Location = System::Drawing::Point(14, 376);
			this->labelShowAll->Name = L"labelShowAll";
			this->labelShowAll->Size = System::Drawing::Size(267, 23);
			this->labelShowAll->TabIndex = 2;
			this->labelShowAll->Text = L"Полная информация о книге";
			// 
			// dataGridViewShowAll
			// 
			this->dataGridViewShowAll->AllowUserToAddRows = false;
			this->dataGridViewShowAll->AllowUserToDeleteRows = false;
			this->dataGridViewShowAll->BackgroundColor = System::Drawing::Color::White;
			this->dataGridViewShowAll->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->dataGridViewShowAll->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewShowAll->ColumnHeadersVisible = false;
			this->dataGridViewShowAll->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Key,
					this->Value
			});
			this->dataGridViewShowAll->GridColor = System::Drawing::Color::DimGray;
			this->dataGridViewShowAll->Location = System::Drawing::Point(18, 413);
			this->dataGridViewShowAll->Name = L"dataGridViewShowAll";
			this->dataGridViewShowAll->ReadOnly = true;
			this->dataGridViewShowAll->RowTemplate->Height = 28;
			this->dataGridViewShowAll->Size = System::Drawing::Size(472, 255);
			this->dataGridViewShowAll->TabIndex = 1;
			// 
			// Key
			// 
			this->Key->HeaderText = L"Поле";
			this->Key->Name = L"Key";
			this->Key->ReadOnly = true;
			this->Key->Width = 150;
			// 
			// Value
			// 
			this->Value->HeaderText = L"Значение";
			this->Value->Name = L"Value";
			this->Value->ReadOnly = true;
			this->Value->Width = 250;
			// 
			// dataGridViewAssortment
			// 
			this->dataGridViewAssortment->AllowUserToAddRows = false;
			this->dataGridViewAssortment->AllowUserToDeleteRows = false;
			this->dataGridViewAssortment->BackgroundColor = System::Drawing::Color::White;
			this->dataGridViewAssortment->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->dataGridViewAssortment->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewAssortment->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->BookName,
					this->Author, this->ShowAll
			});
			this->dataGridViewAssortment->GridColor = System::Drawing::Color::DimGray;
			this->dataGridViewAssortment->Location = System::Drawing::Point(18, 39);
			this->dataGridViewAssortment->Name = L"dataGridViewAssortment";
			this->dataGridViewAssortment->ReadOnly = true;
			this->dataGridViewAssortment->RowTemplate->Height = 28;
			this->dataGridViewAssortment->Size = System::Drawing::Size(472, 302);
			this->dataGridViewAssortment->TabIndex = 0;
			this->dataGridViewAssortment->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BookForm::dataGridViewAssortment_CellContentClick);
			// 
			// BookName
			// 
			this->BookName->HeaderText = L"Название";
			this->BookName->Name = L"BookName";
			this->BookName->ReadOnly = true;
			this->BookName->Width = 150;
			// 
			// Author
			// 
			this->Author->HeaderText = L"Автор";
			this->Author->Name = L"Author";
			this->Author->ReadOnly = true;
			this->Author->Width = 130;
			// 
			// ShowAll
			// 
			this->ShowAll->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->ShowAll->HeaderText = L"Полная инф-ция";
			this->ShowAll->Name = L"ShowAll";
			this->ShowAll->ReadOnly = true;
			this->ShowAll->Text = L"Полная инф-ция";
			this->ShowAll->UseColumnTextForButtonValue = true;
			this->ShowAll->Width = 148;
			// 
			// BookForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1479, 727);
			this->Controls->Add(this->groupBoxAssortment);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBoxConfig);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"BookForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ShowIcon = false;
			this->Text = L"Книжная лавка";
			this->TransparencyKey = System::Drawing::Color::MintCream;
			this->Load += gcnew System::EventHandler(this, &BookForm::BookForm_Load);
			this->groupBoxConfig->ResumeLayout(false);
			this->groupBoxConfig->PerformLayout();
			this->groupBoxAssortment->ResumeLayout(false);
			this->groupBoxAssortment->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewShowAll))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAssortment))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBoxConfig_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void BookForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

Int32 daysNumber, dayStep, sec, i = 0;

private: System::Void buttonStart_Click(System::Object^  sender, System::EventArgs^  e) {
	bool parseDayNumber = Int32::TryParse(this->textBoxDaysNumber->Text, daysNumber);
	bool parseDayStep = Int32::TryParse(this->textBoxDayStep->Text, dayStep);
	bool parseSec = Int32::TryParse(this->textBoxSec->Text, sec);

	timerConfig->Interval = sec * 1000;
	timerConfig->Enabled = true;

	this->textBox1->Text = System::Convert::ToString(TestConstants::rnd());

	this->dataGridViewAssortment->RowCount = 1;
	this->dataGridViewAssortment->ColumnCount = 3;
	this->dataGridViewAssortment->Rows[0]->Cells[0]->Value = gcnew String(TestConstants::getRandomBookName().c_str());
	this->dataGridViewAssortment->Rows[0]->Cells[1]->Value = System::Convert::ToString( "Test author");
}

private: System::Void buttonStop_Click(System::Object^  sender, System::EventArgs^  e) {
	timerConfig->Enabled = false;
	i = 0;

	this->dataGridViewAssortment->RowCount = 0;
	this->dataGridViewAssortment->ColumnCount = 0;

	this->dataGridViewShowAll->RowCount = 0;
	this->dataGridViewShowAll->ColumnCount = 0;
}

private: System::Void timerConfig_Tick(System::Object^  sender, System::EventArgs^  e) {
	if(i < daysNumber)
	{
		i += dayStep;
	}
}

private: System::Void dataGridViewAssortment_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (this->dataGridViewAssortment->CurrentCell->ColumnIndex == 2)
	{
		int currentRow = this->dataGridViewAssortment->CurrentRow->Index;

		String^ name = System::Convert::ToString(this->dataGridViewAssortment->Rows[0]->Cells[0]->Value);
		String^ author = System::Convert::ToString(this->dataGridViewAssortment->Rows[0]->Cells[1]->Value);

		this->dataGridViewShowAll->RowCount = 2;
		this->dataGridViewShowAll->ColumnCount = 2;

		this->dataGridViewShowAll->Rows[0]->Cells[0]->Value = System::Convert::ToString("Название");
		this->dataGridViewShowAll->Rows[1]->Cells[0]->Value = System::Convert::ToString("Автор");

		this->dataGridViewShowAll->Rows[0]->Cells[1]->Value = name;
		this->dataGridViewShowAll->Rows[1]->Cells[1]->Value = author;
	}
}
};
}
