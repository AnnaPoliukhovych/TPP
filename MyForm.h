#pragma once

#include <Windows.h>

namespace PublishingApp {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Data::OleDb;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::DataGridView^ dataGridView1;
        System::Windows::Forms::Button^ buttonLoad;
        System::Windows::Forms::Button^ buttonAdd;
        System::Windows::Forms::Button^ buttonUpdate;
        System::Windows::Forms::Button^ buttonDelete;
        System::Windows::Forms::MenuStrip^ menuStrip1;
        System::ComponentModel::Container^ components;
        System::Windows::Forms::ToolStripMenuItem^ menuItemActions;
        System::Windows::Forms::ToolStripMenuItem^ menuItemAbout;
        System::Windows::Forms::ToolStripMenuItem^ menuItemExit;
        System::Windows::Forms::ToolStripMenuItem^ subItemLoad;
        System::Windows::Forms::ToolStripMenuItem^ subItemUpdate;
        System::Windows::Forms::ToolStripMenuItem^ subItemAdd;
        System::Windows::Forms::ToolStripMenuItem^ subItemDelete;

        void InitializeComponent(void);
        void LoadData(); // Додано для завантаження даних

        // Оголошення обробників подій кнопок
        System::Void buttonLoad_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void buttonUpdate_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e);

        // Обробники подій для меню
        System::Void subItemLoad_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void subItemUpdate_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void subItemAdd_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void subItemDelete_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void menuItemAbout_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void menuItemExit_Click(System::Object^ sender, System::EventArgs^ e);
    };
}
