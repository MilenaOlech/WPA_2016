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

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edycjaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oProgramieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcja1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcja2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcja3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcja4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcja31ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcja32ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oAutorzeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
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
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->opcja1ToolStripMenuItem,
					this->opcja2ToolStripMenuItem, this->sioToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"Plik";
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
			// oProgramieToolStripMenuItem
			// 
			this->oProgramieToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->oAutorzeToolStripMenuItem });
			this->oProgramieToolStripMenuItem->Name = L"oProgramieToolStripMenuItem";
			this->oProgramieToolStripMenuItem->Size = System::Drawing::Size(86, 20);
			this->oProgramieToolStripMenuItem->Text = L"O programie";
			// 
			// opcja1ToolStripMenuItem
			// 
			this->opcja1ToolStripMenuItem->Name = L"opcja1ToolStripMenuItem";
			this->opcja1ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->opcja1ToolStripMenuItem->Text = L"Opcja1";
			// 
			// opcja2ToolStripMenuItem
			// 
			this->opcja2ToolStripMenuItem->Name = L"opcja2ToolStripMenuItem";
			this->opcja2ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->opcja2ToolStripMenuItem->Text = L"Opcja2";
			// 
			// sioToolStripMenuItem
			// 
			this->sioToolStripMenuItem->Name = L"sioToolStripMenuItem";
			this->sioToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->sioToolStripMenuItem->Text = L"Sio";
			this->sioToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::sioToolStripMenuItem_Click);
			// 
			// opcja3ToolStripMenuItem
			// 
			this->opcja3ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->opcja31ToolStripMenuItem,
					this->opcja32ToolStripMenuItem
			});
			this->opcja3ToolStripMenuItem->Name = L"opcja3ToolStripMenuItem";
			this->opcja3ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->opcja3ToolStripMenuItem->Text = L"Opcja3";
			// 
			// opcja4ToolStripMenuItem
			// 
			this->opcja4ToolStripMenuItem->Name = L"opcja4ToolStripMenuItem";
			this->opcja4ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->opcja4ToolStripMenuItem->Text = L"Opcja4";
			// 
			// opcja31ToolStripMenuItem
			// 
			this->opcja31ToolStripMenuItem->Name = L"opcja31ToolStripMenuItem";
			this->opcja31ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->opcja31ToolStripMenuItem->Text = L"Opcja31";
			// 
			// opcja32ToolStripMenuItem
			// 
			this->opcja32ToolStripMenuItem->Name = L"opcja32ToolStripMenuItem";
			this->opcja32ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->opcja32ToolStripMenuItem->Text = L"Opcja32";
			// 
			// oAutorzeToolStripMenuItem
			// 
			this->oAutorzeToolStripMenuItem->Name = L"oAutorzeToolStripMenuItem";
			this->oAutorzeToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->oAutorzeToolStripMenuItem->Text = L"O Autorze";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1088, 503);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void sioToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
};
}

