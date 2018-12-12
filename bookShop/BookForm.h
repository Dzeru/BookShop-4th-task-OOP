#pragma once
#include "StatisticsForm.h"
#include "Utils.h"
#include "BookFactory.h"
#include "OrderFactory.h"
#include "BookManager.h"
#include "Logger.h"

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

	private: System::Windows::Forms::Timer^  timerConfig;
	private: System::Windows::Forms::TextBox^  textBoxSec;
	private: System::Windows::Forms::Label^  labelSec;
	private: System::Windows::Forms::GroupBox^  groupBoxAssortment;
	private: System::Windows::Forms::DataGridView^  dataGridViewAssortment;
	private: System::Windows::Forms::DataGridView^  dataGridViewShowAll;

	private: System::Windows::Forms::Label^  labelShowAll;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Key;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Value;

	private: System::Windows::Forms::TextBox^  textBoxNewMarkup;
	private: System::Windows::Forms::TextBox^  textBoxUsualMarkup;
	private: System::Windows::Forms::Label^  labelNewMarkup;
	private: System::Windows::Forms::Label^  labelUsualMarkup;
	private: System::Windows::Forms::Label^  labelMarkups;

	private: System::Windows::Forms::GroupBox^  groupBoxOrders;
	private: System::Windows::Forms::DataGridView^  dataGridViewOrders;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  BookName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Author;
	private: System::Windows::Forms::DataGridViewButtonColumn^  ShowAll;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  OrderInfo;
	private: System::Windows::Forms::TextBox^  textBoxDelivery;
	private: System::Windows::Forms::Label^  labelDelivery;

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
			this->textBoxDelivery = (gcnew System::Windows::Forms::TextBox());
			this->labelDelivery = (gcnew System::Windows::Forms::Label());
			this->textBoxNewMarkup = (gcnew System::Windows::Forms::TextBox());
			this->textBoxUsualMarkup = (gcnew System::Windows::Forms::TextBox());
			this->labelNewMarkup = (gcnew System::Windows::Forms::Label());
			this->labelUsualMarkup = (gcnew System::Windows::Forms::Label());
			this->labelMarkups = (gcnew System::Windows::Forms::Label());
			this->textBoxSec = (gcnew System::Windows::Forms::TextBox());
			this->labelSec = (gcnew System::Windows::Forms::Label());
			this->buttonStop = (gcnew System::Windows::Forms::Button());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->textBoxDayStep = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDaysNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelDayStep = (gcnew System::Windows::Forms::Label());
			this->labelDaysNumber = (gcnew System::Windows::Forms::Label());
			this->timerConfig = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBoxAssortment = (gcnew System::Windows::Forms::GroupBox());
			this->labelShowAll = (gcnew System::Windows::Forms::Label());
			this->dataGridViewShowAll = (gcnew System::Windows::Forms::DataGridView());
			this->Key = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Value = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewAssortment = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Author = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ShowAll = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->groupBoxOrders = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridViewOrders = (gcnew System::Windows::Forms::DataGridView());
			this->OrderInfo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBoxConfig->SuspendLayout();
			this->groupBoxAssortment->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewShowAll))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAssortment))->BeginInit();
			this->groupBoxOrders->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewOrders))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBoxConfig
			// 
			this->groupBoxConfig->Controls->Add(this->textBoxDelivery);
			this->groupBoxConfig->Controls->Add(this->labelDelivery);
			this->groupBoxConfig->Controls->Add(this->textBoxNewMarkup);
			this->groupBoxConfig->Controls->Add(this->textBoxUsualMarkup);
			this->groupBoxConfig->Controls->Add(this->labelNewMarkup);
			this->groupBoxConfig->Controls->Add(this->labelUsualMarkup);
			this->groupBoxConfig->Controls->Add(this->labelMarkups);
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
			this->groupBoxConfig->Size = System::Drawing::Size(267, 654);
			this->groupBoxConfig->TabIndex = 0;
			this->groupBoxConfig->TabStop = false;
			this->groupBoxConfig->Text = L"Конфигурация";
			this->groupBoxConfig->Enter += gcnew System::EventHandler(this, &BookForm::groupBoxConfig_Enter);
			// 
			// textBoxDelivery
			// 
			this->textBoxDelivery->Location = System::Drawing::Point(76, 357);
			this->textBoxDelivery->Name = L"textBoxDelivery";
			this->textBoxDelivery->Size = System::Drawing::Size(100, 30);
			this->textBoxDelivery->TabIndex = 14;
			// 
			// labelDelivery
			// 
			this->labelDelivery->AutoSize = true;
			this->labelDelivery->Location = System::Drawing::Point(25, 318);
			this->labelDelivery->Name = L"labelDelivery";
			this->labelDelivery->Size = System::Drawing::Size(210, 23);
			this->labelDelivery->TabIndex = 13;
			this->labelDelivery->Text = L"Доставка в днях (1-5)";
			// 
			// textBoxNewMarkup
			// 
			this->textBoxNewMarkup->Location = System::Drawing::Point(168, 267);
			this->textBoxNewMarkup->Name = L"textBoxNewMarkup";
			this->textBoxNewMarkup->Size = System::Drawing::Size(80, 30);
			this->textBoxNewMarkup->TabIndex = 12;
			// 
			// textBoxUsualMarkup
			// 
			this->textBoxUsualMarkup->Location = System::Drawing::Point(168, 221);
			this->textBoxUsualMarkup->Name = L"textBoxUsualMarkup";
			this->textBoxUsualMarkup->Size = System::Drawing::Size(80, 30);
			this->textBoxUsualMarkup->TabIndex = 11;
			// 
			// labelNewMarkup
			// 
			this->labelNewMarkup->AutoSize = true;
			this->labelNewMarkup->Location = System::Drawing::Point(15, 267);
			this->labelNewMarkup->Name = L"labelNewMarkup";
			this->labelNewMarkup->Size = System::Drawing::Size(149, 23);
			this->labelNewMarkup->TabIndex = 10;
			this->labelNewMarkup->Text = L"Для новых книг";
			// 
			// labelUsualMarkup
			// 
			this->labelUsualMarkup->AutoSize = true;
			this->labelUsualMarkup->Location = System::Drawing::Point(11, 221);
			this->labelUsualMarkup->Name = L"labelUsualMarkup";
			this->labelUsualMarkup->Size = System::Drawing::Size(93, 23);
			this->labelUsualMarkup->TabIndex = 9;
			this->labelUsualMarkup->Text = L"Обычная";
			// 
			// labelMarkups
			// 
			this->labelMarkups->AutoSize = true;
			this->labelMarkups->Location = System::Drawing::Point(63, 186);
			this->labelMarkups->Name = L"labelMarkups";
			this->labelMarkups->Size = System::Drawing::Size(126, 23);
			this->labelMarkups->TabIndex = 8;
			this->labelMarkups->Text = L"Наценки в %";
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
			this->buttonStop->Location = System::Drawing::Point(149, 591);
			this->buttonStop->Name = L"buttonStop";
			this->buttonStop->Size = System::Drawing::Size(100, 41);
			this->buttonStop->TabIndex = 5;
			this->buttonStop->Text = L"Стоп";
			this->buttonStop->UseVisualStyleBackColor = true;
			this->buttonStop->Click += gcnew System::EventHandler(this, &BookForm::buttonStop_Click);
			// 
			// buttonStart
			// 
			this->buttonStart->Location = System::Drawing::Point(27, 591);
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
			this->groupBoxAssortment->Size = System::Drawing::Size(650, 654);
			this->groupBoxAssortment->TabIndex = 2;
			this->groupBoxAssortment->TabStop = false;
			this->groupBoxAssortment->Text = L"Ассортимент";
			this->groupBoxAssortment->Enter += gcnew System::EventHandler(this, &BookForm::groupBoxAssortment_Enter);
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
			this->dataGridViewShowAll->Size = System::Drawing::Size(600, 219);
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
			this->dataGridViewAssortment->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Id,
					this->BookName, this->Author, this->ShowAll
			});
			this->dataGridViewAssortment->GridColor = System::Drawing::Color::DimGray;
			this->dataGridViewAssortment->Location = System::Drawing::Point(18, 39);
			this->dataGridViewAssortment->Name = L"dataGridViewAssortment";
			this->dataGridViewAssortment->ReadOnly = true;
			this->dataGridViewAssortment->RowTemplate->Height = 28;
			this->dataGridViewAssortment->Size = System::Drawing::Size(600, 302);
			this->dataGridViewAssortment->TabIndex = 0;
			this->dataGridViewAssortment->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BookForm::dataGridViewAssortment_CellContentClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"ID";
			this->Id->Name = L"Id";
			this->Id->ReadOnly = true;
			this->Id->Width = 80;
			// 
			// BookName
			// 
			this->BookName->HeaderText = L"Название";
			this->BookName->Name = L"BookName";
			this->BookName->ReadOnly = true;
			this->BookName->Width = 180;
			// 
			// Author
			// 
			this->Author->HeaderText = L"Автор";
			this->Author->Name = L"Author";
			this->Author->ReadOnly = true;
			this->Author->Width = 150;
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
			// groupBoxOrders
			// 
			this->groupBoxOrders->Controls->Add(this->dataGridViewOrders);
			this->groupBoxOrders->Location = System::Drawing::Point(982, 13);
			this->groupBoxOrders->Name = L"groupBoxOrders";
			this->groupBoxOrders->Size = System::Drawing::Size(263, 654);
			this->groupBoxOrders->TabIndex = 3;
			this->groupBoxOrders->TabStop = false;
			this->groupBoxOrders->Text = L"Заказы";
			// 
			// dataGridViewOrders
			// 
			this->dataGridViewOrders->AllowUserToAddRows = false;
			this->dataGridViewOrders->AllowUserToDeleteRows = false;
			this->dataGridViewOrders->BackgroundColor = System::Drawing::Color::White;
			this->dataGridViewOrders->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewOrders->ColumnHeadersVisible = false;
			this->dataGridViewOrders->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->OrderInfo });
			this->dataGridViewOrders->Location = System::Drawing::Point(16, 39);
			this->dataGridViewOrders->Name = L"dataGridViewOrders";
			this->dataGridViewOrders->ReadOnly = true;
			this->dataGridViewOrders->RowTemplate->Height = 40;
			this->dataGridViewOrders->Size = System::Drawing::Size(220, 593);
			this->dataGridViewOrders->TabIndex = 0;
			// 
			// OrderInfo
			// 
			this->OrderInfo->HeaderText = L"Информация";
			this->OrderInfo->Name = L"OrderInfo";
			this->OrderInfo->ReadOnly = true;
			this->OrderInfo->Width = 220;
			// 
			// BookForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1266, 677);
			this->Controls->Add(this->groupBoxOrders);
			this->Controls->Add(this->groupBoxAssortment);
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
			this->groupBoxOrders->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewOrders))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBoxConfig_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void BookForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

Int32 daysNumber, dayStep, sec, usualMarkup, newMarkup, i = 0;

private: System::Void buttonStart_Click(System::Object^  sender, System::EventArgs^  e) {
	Logger::getInstance()->writeLog("SESSION BEGINS \n");

	bool parseDayNumber = Int32::TryParse(this->textBoxDaysNumber->Text, daysNumber);
	bool parseDayStep = Int32::TryParse(this->textBoxDayStep->Text, dayStep);
	bool parseSec = Int32::TryParse(this->textBoxSec->Text, sec);

	bool parseUsualMarkup = Int32::TryParse(this->textBoxUsualMarkup->Text, usualMarkup);
	bool parseNewMarkup = Int32::TryParse(this->textBoxNewMarkup->Text, newMarkup);

	std::vector<Book*> startAssortment = BookFactory::getRandomListOfBooks(usualMarkup, newMarkup);

	this->dataGridViewAssortment->RowCount = startAssortment.size();
	this->dataGridViewAssortment->ColumnCount = 4;

	for (int i = 0; i < this->dataGridViewAssortment->RowCount; i++)
	{
		this->dataGridViewAssortment->Rows[i]->Cells[0]->Value = gcnew String(startAssortment[i]->getId().ToString());
		this->dataGridViewAssortment->Rows[i]->Cells[1]->Value = gcnew String(startAssortment[i]->getBookName().c_str());
		this->dataGridViewAssortment->Rows[i]->Cells[2]->Value = gcnew String(startAssortment[i]->getAuthor().c_str());
	}

	timerConfig->Interval = sec * 1000;
	timerConfig->Enabled = true;
}

private: System::Void buttonStop_Click(System::Object^  sender, System::EventArgs^  e) {
	timerConfig->Enabled = false;
	i = 0;

	this->dataGridViewAssortment->RowCount = 0;
	this->dataGridViewShowAll->RowCount = 0;

	StatisticsForm^ statisticsForm = gcnew StatisticsForm;
	statisticsForm->Show();
	statisticsForm->Visible = true;

	Logger::getInstance()->writeLog("SESSION ENDS.\n\n\n\n\n\n");
}

private: System::Void timerConfig_Tick(System::Object^  sender, System::EventArgs^  e) {

	std::vector<int> ids;

	int id;
	bool parseId;

	if (i < daysNumber)
	{
		for (int i = 0; i < this->dataGridViewAssortment->RowCount; i++)
		{
			parseId = Int32::TryParse(System::Convert::ToString(this->dataGridViewAssortment->Rows[i]->Cells[0]->Value), id);
			ids.push_back(id);
		}

		Order* order = OrderFactory::getRandomOrder(ids);
		
		int maxProcessTime = 5;

		bool parseMaxProcessTime = Int32::TryParse(this->textBoxDelivery->Text, maxProcessTime);

		std::pair<int, bool> processOrder = BookManager::getInstance()->processOrder(order, maxProcessTime);
		int timeToProcessOrder = processOrder.first;
		bool hasOrderToPublisher = processOrder.second;

		this->dataGridViewOrders->RowCount = 14;

		this->dataGridViewOrders->Rows[0]->Cells[0]->Value = "ID";
		this->dataGridViewOrders->Rows[1]->Cells[0]->Value = System::Convert::ToString(order->getId());
		this->dataGridViewOrders->Rows[2]->Cells[0]->Value = "Фамилия";
		this->dataGridViewOrders->Rows[3]->Cells[0]->Value = gcnew String(order->getSurname().c_str());
		this->dataGridViewOrders->Rows[4]->Cells[0]->Value = "Телефон";
		this->dataGridViewOrders->Rows[5]->Cells[0]->Value = gcnew String(order->getPhoneNumber().c_str());
		this->dataGridViewOrders->Rows[6]->Cells[0]->Value = "Email";
		this->dataGridViewOrders->Rows[7]->Cells[0]->Value = gcnew String(order->getEmail().c_str());
		this->dataGridViewOrders->Rows[8]->Cells[0]->Value = "Заказанные книги";
		this->dataGridViewOrders->Rows[9]->Cells[0]->Value = gcnew String(orderMapToString(order->getOrderList()).c_str());
		this->dataGridViewOrders->Rows[10]->Cells[0]->Value = "Время выполнения заказа в днях";
		this->dataGridViewOrders->Rows[11]->Cells[0]->Value = System::Convert::ToString(timeToProcessOrder);
		this->dataGridViewOrders->Rows[12]->Cells[0]->Value = "Заявка в издательство";
		if (hasOrderToPublisher)
		{
			this->dataGridViewOrders->Rows[13]->Cells[0]->Value = "Присутствует";
		}
		else
		{
			this->dataGridViewOrders->Rows[13]->Cells[0]->Value = "Отсутствует";
		}
		
		i += dayStep;
	}
	else
	{
		timerConfig->Enabled = false;
		i = 0;

		StatisticsForm^ statisticsForm = gcnew StatisticsForm;
		statisticsForm->Show();
		statisticsForm->Visible = true;
	}
}
	
private: System::Void dataGridViewAssortment_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (this->dataGridViewAssortment->CurrentCell->ColumnIndex == 3)
	{
		int currentRow = this->dataGridViewAssortment->CurrentRow->Index;

		int bookId;

		bool parseBookId = Int32::TryParse(System::Convert::ToString(this->dataGridViewAssortment->Rows[currentRow]->Cells[0]->Value), bookId);

		Book* b = Database::getInstance()->findBook(bookId);

		this->dataGridViewShowAll->RowCount = 11;
		this->dataGridViewShowAll->ColumnCount = 2;

		this->dataGridViewShowAll->Rows[0]->Cells[0]->Value = System::Convert::ToString("ID");
		this->dataGridViewShowAll->Rows[1]->Cells[0]->Value = System::Convert::ToString("Название");
		this->dataGridViewShowAll->Rows[2]->Cells[0]->Value = System::Convert::ToString("Автор");
		this->dataGridViewShowAll->Rows[3]->Cells[0]->Value = System::Convert::ToString("Количество страниц");
		this->dataGridViewShowAll->Rows[4]->Cells[0]->Value = System::Convert::ToString("Жанры");
		this->dataGridViewShowAll->Rows[5]->Cells[0]->Value = System::Convert::ToString("Язык");
		this->dataGridViewShowAll->Rows[6]->Cells[0]->Value = System::Convert::ToString("Издательство");
		this->dataGridViewShowAll->Rows[7]->Cells[0]->Value = System::Convert::ToString("Год издания");
		this->dataGridViewShowAll->Rows[8]->Cells[0]->Value = System::Convert::ToString("Возрастной ценз");
		this->dataGridViewShowAll->Rows[9]->Cells[0]->Value = System::Convert::ToString("Осталось на складе");
		this->dataGridViewShowAll->Rows[10]->Cells[0]->Value = System::Convert::ToString("Цена, руб.");

		this->dataGridViewShowAll->Rows[0]->Cells[1]->Value = gcnew String(b->getId().ToString());
		this->dataGridViewShowAll->Rows[1]->Cells[1]->Value = gcnew String(b->getBookName().c_str());
		this->dataGridViewShowAll->Rows[2]->Cells[1]->Value = gcnew String(b->getAuthor().c_str());
		this->dataGridViewShowAll->Rows[3]->Cells[1]->Value = gcnew String(b->getNumberOfPages().ToString());
		this->dataGridViewShowAll->Rows[4]->Cells[1]->Value = gcnew String(setToString(b->getGenres()).c_str());
		this->dataGridViewShowAll->Rows[5]->Cells[1]->Value = gcnew String(b->getLang().c_str());
		this->dataGridViewShowAll->Rows[6]->Cells[1]->Value = gcnew String(b->getPublisher().c_str());
		this->dataGridViewShowAll->Rows[7]->Cells[1]->Value = gcnew String(b->getYearOfPublishing().ToString());
		this->dataGridViewShowAll->Rows[8]->Cells[1]->Value = gcnew String(b->getAgeRequirement().c_str());
		this->dataGridViewShowAll->Rows[9]->Cells[1]->Value = gcnew String(b->getCount().ToString());
		this->dataGridViewShowAll->Rows[10]->Cells[1]->Value = gcnew String(b->getPrice().ToString());
	}
}
private: System::Void groupBoxAssortment_Enter(System::Object^  sender, System::EventArgs^  e) {
}
};
}
