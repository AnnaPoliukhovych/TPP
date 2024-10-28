#include "MyForm.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::OleDb;

void PublishingApp::MyForm::InitializeComponent(void) {
    this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
    this->buttonLoad = (gcnew System::Windows::Forms::Button());
    this->buttonAdd = (gcnew System::Windows::Forms::Button());
    this->buttonUpdate = (gcnew System::Windows::Forms::Button());
    this->buttonDelete = (gcnew System::Windows::Forms::Button());
    this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
    this->menuItemActions = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->subItemLoad = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->subItemUpdate = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->subItemAdd = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->subItemDelete = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->menuItemAbout = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->menuItemExit = (gcnew System::Windows::Forms::ToolStripMenuItem());
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
    this->menuStrip1->SuspendLayout();
    this->SuspendLayout();
    // 
    // dataGridView1
    // 
    this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
    this->dataGridView1->Location = System::Drawing::Point(12, 27);
    this->dataGridView1->Name = L"dataGridView1";
    this->dataGridView1->Size = System::Drawing::Size(776, 400);
    this->dataGridView1->TabIndex = 0;

    // Налаштування стовпців DataGridView для відображення полів бази даних
    this->dataGridView1->Columns->Clear();
    this->dataGridView1->Columns->Add("Код", "Код");
    this->dataGridView1->Columns->Add("Назва", "Назва");
    this->dataGridView1->Columns->Add("Місцезнаходження", "Місцезнаходження");
    this->dataGridView1->Columns->Add("Рік заснування", "Рік заснування");
    this->dataGridView1->Columns->Add("Річний дохід", "Річний дохід");

    // 
    // buttonLoad
    // 
    this->buttonLoad->Location = System::Drawing::Point(12, 450);
    this->buttonLoad->Name = L"buttonLoad";
    this->buttonLoad->Size = System::Drawing::Size(92, 23);
    this->buttonLoad->TabIndex = 1;
    this->buttonLoad->Text = L"Завантажити";
    this->buttonLoad->Click += gcnew System::EventHandler(this, &MyForm::buttonLoad_Click);
    // 
    // buttonAdd
    // 
    this->buttonAdd->Location = System::Drawing::Point(110, 450);
    this->buttonAdd->Name = L"buttonAdd";
    this->buttonAdd->Size = System::Drawing::Size(85, 23);
    this->buttonAdd->TabIndex = 2;
    this->buttonAdd->Text = L"Додати";
    this->buttonAdd->Click += gcnew System::EventHandler(this, &MyForm::buttonAdd_Click);
    // 
    // buttonUpdate
    // 
    this->buttonUpdate->Location = System::Drawing::Point(201, 450);
    this->buttonUpdate->Name = L"buttonUpdate";
    this->buttonUpdate->Size = System::Drawing::Size(87, 23);
    this->buttonUpdate->TabIndex = 3;
    this->buttonUpdate->Text = L"Оновити";
    this->buttonUpdate->Click += gcnew System::EventHandler(this, &MyForm::buttonUpdate_Click);
    // 
    // buttonDelete
    // 
    this->buttonDelete->Location = System::Drawing::Point(294, 450);
    this->buttonDelete->Name = L"buttonDelete";
    this->buttonDelete->Size = System::Drawing::Size(86, 23);
    this->buttonDelete->TabIndex = 4;
    this->buttonDelete->Text = L"Видалити";
    this->buttonDelete->Click += gcnew System::EventHandler(this, &MyForm::buttonDelete_Click);
    // 
    // menuStrip1
    // 
    this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
        this->menuItemActions,
            this->menuItemAbout, this->menuItemExit
    });
    this->menuStrip1->Location = System::Drawing::Point(0, 0);
    this->menuStrip1->Name = L"menuStrip1";
    this->menuStrip1->Size = System::Drawing::Size(784, 24);
    this->menuStrip1->TabIndex = 0;
    // 
    // menuItemActions
    // 
    this->menuItemActions->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
        this->subItemLoad,
            this->subItemUpdate, this->subItemAdd, this->subItemDelete
    });
    this->menuItemActions->Name = L"menuItemActions";
    this->menuItemActions->Size = System::Drawing::Size(33, 20);
    this->menuItemActions->Text = L"Дії";
    // 
    // subItemLoad
    // 
    this->subItemLoad->Name = L"subItemLoad";
    this->subItemLoad->Size = System::Drawing::Size(145, 22);
    this->subItemLoad->Text = L"Завантажити";
    this->subItemLoad->Click += gcnew System::EventHandler(this, &MyForm::subItemLoad_Click);
    // 
    // subItemUpdate
    // 
    this->subItemUpdate->Name = L"subItemUpdate";
    this->subItemUpdate->Size = System::Drawing::Size(145, 22);
    this->subItemUpdate->Text = L"Оновити";
    this->subItemUpdate->Click += gcnew System::EventHandler(this, &MyForm::subItemUpdate_Click);
    // 
    // subItemAdd
    // 
    this->subItemAdd->Name = L"subItemAdd";
    this->subItemAdd->Size = System::Drawing::Size(145, 22);
    this->subItemAdd->Text = L"Додати";
    this->subItemAdd->Click += gcnew System::EventHandler(this, &MyForm::subItemAdd_Click);
    // 
    // subItemDelete
    // 
    this->subItemDelete->Name = L"subItemDelete";
    this->subItemDelete->Size = System::Drawing::Size(145, 22);
    this->subItemDelete->Text = L"Видалити";
    this->subItemDelete->Click += gcnew System::EventHandler(this, &MyForm::subItemDelete_Click);
    // 
    // menuItemAbout
    // 
    this->menuItemAbout->Name = L"menuItemAbout";
    this->menuItemAbout->Size = System::Drawing::Size(99, 20);
    this->menuItemAbout->Text = L"Про програму";
    this->menuItemAbout->Click += gcnew System::EventHandler(this, &MyForm::menuItemAbout_Click);
    // 
    // menuItemExit
    // 
    this->menuItemExit->Name = L"menuItemExit";
    this->menuItemExit->Size = System::Drawing::Size(48, 20);
    this->menuItemExit->Text = L"Вихід";
    this->menuItemExit->Click += gcnew System::EventHandler(this, &MyForm::menuItemExit_Click);
    // 
    // MyForm
    // 
    this->ClientSize = System::Drawing::Size(784, 561);
    this->Controls->Add(this->menuStrip1);
    this->Controls->Add(this->dataGridView1);
    this->Controls->Add(this->buttonLoad);
    this->Controls->Add(this->buttonAdd);
    this->Controls->Add(this->buttonUpdate);
    this->Controls->Add(this->buttonDelete);
    this->MainMenuStrip = this->menuStrip1;
    this->Name = L"MyForm";
    this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
    this->Text = L"Publishing Application";
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
    this->menuStrip1->ResumeLayout(false);
    this->menuStrip1->PerformLayout();
    this->ResumeLayout(false);
    this->PerformLayout();

}

// Завантаження даних в DataGridView
void PublishingApp::MyForm::LoadData() {
    String^ connectionString = "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\\Users\\annee\\Desktop\\універ\\3 курс\\ТПП\\Database_my.mdb;";
    OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
    OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter("SELECT Код, Назва, Місцезнаходження, [Рік заснування], [Річний дохід] FROM [Publishing]", connection);

    DataTable^ dataTable = gcnew DataTable();

    try {
        connection->Open();
        adapter->Fill(dataTable);
        this->dataGridView1->DataSource = dataTable;
    }
    catch (Exception^ ex) {
        MessageBox::Show("Помилка при завантаженні даних: " + ex->Message);
    }
    finally {
        connection->Close();
    }
}

// Реалізація обробників подій кнопок
System::Void PublishingApp::MyForm::buttonLoad_Click(System::Object^ sender, System::EventArgs^ e) {
    LoadData(); // Завантажити дані в DataGridView
}

System::Void PublishingApp::MyForm::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
    // Логіка для додавання нового запису
}

System::Void PublishingApp::MyForm::buttonUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
    // Логіка для оновлення існуючого запису
}

System::Void PublishingApp::MyForm::buttonDelete_Click(System::Object^ sender, System::EventArgs^ e) {
    // Логіка для видалення запису
}

// Реалізація обробників подій для підпунктів меню
System::Void PublishingApp::MyForm::subItemLoad_Click(System::Object^ sender, System::EventArgs^ e) {
    buttonLoad_Click(sender, e);
}

System::Void PublishingApp::MyForm::subItemUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
    buttonUpdate_Click(sender, e);
}

System::Void PublishingApp::MyForm::subItemAdd_Click(System::Object^ sender, System::EventArgs^ e) {
    buttonAdd_Click(sender, e);
}

System::Void PublishingApp::MyForm::subItemDelete_Click(System::Object^ sender, System::EventArgs^ e) {
    buttonDelete_Click(sender, e);
}

System::Void PublishingApp::MyForm::menuItemAbout_Click(System::Object^ sender, System::EventArgs^ e) {
    MessageBox::Show("Це програма для управління видавництвами.", "Про програму");
}

System::Void PublishingApp::MyForm::menuItemExit_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Close();
}
