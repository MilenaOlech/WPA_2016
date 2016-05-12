#pragma once

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opcja1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opcja2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  edycjaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opcja3ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opcja31ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opcja32ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opcja4ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oProgramieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oAutorzeToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ToolStripComboBox^  toolStripComboBox1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripTextBox^  toolStripTextBox1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  opcjac1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opcjac2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  koniecToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
	private: System::Windows::Forms::ToolStripComboBox^  toolStripComboBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcja1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripComboBox1 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->opcja2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->sioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->edycjaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcja3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcja31ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcja32ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcja4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oProgramieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oAutorzeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->opcjac1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcjac2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->koniecToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripComboBox2 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->plikToolStripMenuItem,
					this->edycjaToolStripMenuItem, this->oProgramieToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1088, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->opcja1ToolStripMenuItem,
					this->toolStripComboBox1, this->toolStripSeparator1, this->opcja2ToolStripMenuItem, this->toolStripTextBox1, this->sioToolStripMenuItem,
					this->toolStripSeparator2
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// opcja1ToolStripMenuItem
			// 
			this->opcja1ToolStripMenuItem->Name = L"opcja1ToolStripMenuItem";
			this->opcja1ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->opcja1ToolStripMenuItem->Text = L"Opcja1";
			this->opcja1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::opcja1ToolStripMenuItem_Click);
			// 
			// toolStripComboBox1
			// 
			this->toolStripComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Element pierwszy", L"Element drugi",
					L"Element trzeci"
			});
			this->toolStripComboBox1->Name = L"toolStripComboBox1";
			this->toolStripComboBox1->Size = System::Drawing::Size(121, 23);
			this->toolStripComboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::opcja1ToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(178, 6);
			// 
			// opcja2ToolStripMenuItem
			// 
			this->opcja2ToolStripMenuItem->Name = L"opcja2ToolStripMenuItem";
			this->opcja2ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->opcja2ToolStripMenuItem->Text = L"Opcja2";
			this->opcja2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::opcja1ToolStripMenuItem_Click);
			// 
			// toolStripTextBox1
			// 
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->Size = System::Drawing::Size(100, 23);
			this->toolStripTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::opcja1ToolStripMenuItem_Click);
			// 
			// sioToolStripMenuItem
			// 
			this->sioToolStripMenuItem->Name = L"sioToolStripMenuItem";
			this->sioToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->sioToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->sioToolStripMenuItem->Text = L"Sio";
			this->sioToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::sioToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(178, 6);
			// 
			// edycjaToolStripMenuItem
			// 
			this->edycjaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->opcja3ToolStripMenuItem,
					this->opcja4ToolStripMenuItem
			});
			this->edycjaToolStripMenuItem->Name = L"edycjaToolStripMenuItem";
			this->edycjaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->edycjaToolStripMenuItem->Text = L"Edycja";
			// 
			// opcja3ToolStripMenuItem
			// 
			this->opcja3ToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->opcja3ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->opcja31ToolStripMenuItem,
					this->opcja32ToolStripMenuItem
			});
			this->opcja3ToolStripMenuItem->Name = L"opcja3ToolStripMenuItem";
			this->opcja3ToolStripMenuItem->Size = System::Drawing::Size(111, 22);
			this->opcja3ToolStripMenuItem->Text = L"Opcja3";
			this->opcja3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::opcja1ToolStripMenuItem_Click);
			// 
			// opcja31ToolStripMenuItem
			// 
			this->opcja31ToolStripMenuItem->Name = L"opcja31ToolStripMenuItem";
			this->opcja31ToolStripMenuItem->Size = System::Drawing::Size(117, 22);
			this->opcja31ToolStripMenuItem->Text = L"Opcja31";
			this->opcja31ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::opcja31ToolStripMenuItem_Click);
			// 
			// opcja32ToolStripMenuItem
			// 
			this->opcja32ToolStripMenuItem->Name = L"opcja32ToolStripMenuItem";
			this->opcja32ToolStripMenuItem->Size = System::Drawing::Size(117, 22);
			this->opcja32ToolStripMenuItem->Text = L"Opcja32";
			// 
			// opcja4ToolStripMenuItem
			// 
			this->opcja4ToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->opcja4ToolStripMenuItem->Name = L"opcja4ToolStripMenuItem";
			this->opcja4ToolStripMenuItem->Size = System::Drawing::Size(111, 22);
			this->opcja4ToolStripMenuItem->Text = L"Opcja4";
			this->opcja4ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::opcja1ToolStripMenuItem_Click);
			// 
			// oProgramieToolStripMenuItem
			// 
			this->oProgramieToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->oAutorzeToolStripMenuItem });
			this->oProgramieToolStripMenuItem->Name = L"oProgramieToolStripMenuItem";
			this->oProgramieToolStripMenuItem->Size = System::Drawing::Size(86, 20);
			this->oProgramieToolStripMenuItem->Text = L"O programie";
			this->oProgramieToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::opcja1ToolStripMenuItem_Click);
			// 
			// oAutorzeToolStripMenuItem
			// 
			this->oAutorzeToolStripMenuItem->Name = L"oAutorzeToolStripMenuItem";
			this->oAutorzeToolStripMenuItem->Size = System::Drawing::Size(127, 22);
			this->oAutorzeToolStripMenuItem->Text = L"O Autorze";
			this->oAutorzeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::oAutorzeToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(375, 268);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"TU POJAWI SIÊ TEKST";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->opcjac1ToolStripMenuItem,
					this->opcjac2ToolStripMenuItem, this->koniecToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->ShowCheckMargin = true;
			this->contextMenuStrip1->Size = System::Drawing::Size(134, 70);
			// 
			// opcjac1ToolStripMenuItem
			// 
			this->opcjac1ToolStripMenuItem->Checked = true;
			this->opcjac1ToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->opcjac1ToolStripMenuItem->Name = L"opcjac1ToolStripMenuItem";
			this->opcjac1ToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->opcjac1ToolStripMenuItem->Text = L"Opcja1";
			this->opcjac1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::opcja1ToolStripMenuItem_Click);
			// 
			// opcjac2ToolStripMenuItem
			// 
			this->opcjac2ToolStripMenuItem->Name = L"opcjac2ToolStripMenuItem";
			this->opcjac2ToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->opcjac2ToolStripMenuItem->Text = L"Opcja2";
			this->opcjac2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::oAutorzeToolStripMenuItem_Click);
			// 
			// koniecToolStripMenuItem
			// 
			this->koniecToolStripMenuItem->Name = L"koniecToolStripMenuItem";
			this->koniecToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->koniecToolStripMenuItem->Text = L"Koniec";
			this->koniecToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::sioToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripButton1,
					this->toolStripButton2, this->toolStripButton3, this->toolStripComboBox2
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1088, 25);
			this->toolStrip1->TabIndex = 3;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->BackColor = System::Drawing::Color::Fuchsia;
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::None;
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Form1::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::None;
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &Form1::toolStripButton1_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::None;
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(23, 22);
			this->toolStripButton3->Text = L"toolStripButton3";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &Form1::toolStripButton1_Click);
			// 
			// toolStripComboBox2
			// 
			this->toolStripComboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Etykieta 1 ", L"Etykieta 2 " });
			this->toolStripComboBox2->Name = L"toolStripComboBox2";
			this->toolStripComboBox2->Size = System::Drawing::Size(121, 25);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(304, 342);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"ETYKIETA 1 ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(667, 342);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"ETYKIETA 2";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1088, 503);
			this->ContextMenuStrip = this->contextMenuStrip1;
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void sioToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
private: System::Void opcja1ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Text = static_cast<ToolStripMenuItem^>(sender)->Text;
	
}
private: System::Void oAutorzeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("MILENA OLECH", ":)", MessageBoxButtons::AbortRetryIgnore, MessageBoxIcon::Error);
}
private: System::Void opcja31ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Height = Height + 50;
	this->Width = Width + 50;
	this->BackColor = Color::Aqua;
}
private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (toolStripComboBox2->SelectedIndex == 0){
		if (static_cast<ToolStripButton^>(sender)->Name == "toolStripButton1")
			label2->ForeColor = Color::Green;
		if (static_cast<ToolStripButton^>(sender)->Name == "toolStripButton2")
			label2->ForeColor = Color::Yellow;
		if (static_cast<ToolStripButton^>(sender)->Name == "toolStripButton3")
			label2->ForeColor = Color::Red;
	}
	else{
		label2->ForeColor = static_cast<ToolStripButton^>(sender)->BackColor;
	}
}
};
}

