#pragma once
//#include <Windows.h>


namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
			//this->pictureBox1->Image = Image::FromFile("img.jpg");
			this->panel1->BackgroundImage = Image::FromFile("img.jpg");
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnExit;

	private: System::Windows::Forms::Button^ btnStart;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblZn;

	private: System::Windows::Forms::Label^ lbl2e;
	private: System::Windows::Forms::Label^ lbl2Cl;
	private: System::Windows::Forms::Label^ lblCu2;

	private: System::Windows::Forms::Label^ lbl2K;
	private: System::Windows::Forms::Label^ lblCu;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ lblZinc;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lbl2;



	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblZinc = (gcnew System::Windows::Forms::Label());
			this->lblCu = (gcnew System::Windows::Forms::Label());
			this->lblCu2 = (gcnew System::Windows::Forms::Label());
			this->lbl2K = (gcnew System::Windows::Forms::Label());
			this->lbl2Cl = (gcnew System::Windows::Forms::Label());
			this->lbl2e = (gcnew System::Windows::Forms::Label());
			this->lblZn = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->lbl2);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->lblZinc);
			this->panel1->Controls->Add(this->lblCu);
			this->panel1->Controls->Add(this->lblCu2);
			this->panel1->Controls->Add(this->lbl2K);
			this->panel1->Controls->Add(this->lbl2Cl);
			this->panel1->Controls->Add(this->lbl2e);
			this->panel1->Controls->Add(this->lblZn);
			this->panel1->Location = System::Drawing::Point(12, 71);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(662, 436);
			this->panel1->TabIndex = 0;
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Location = System::Drawing::Point(443, 340);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(19, 13);
			this->lbl2->TabIndex = 14;
			this->lbl2->Text = L"2+";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(14, 102);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(174, 24);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Zn(s) -> Zn(aq) +2e";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(104, 87);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 16);
			this->label6->TabIndex = 13;
			this->label6->Text = L"2+                   _";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(464, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(186, 24);
			this->label2->TabIndex = 10;
			this->label2->Text = L" Cu (ap) +2e -> Cu(s)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(494, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 16);
			this->label4->TabIndex = 11;
			this->label4->Text = L"2+                   _";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(521, 58);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(139, 24);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Cobre (Catodo)";
			// 
			// lblZinc
			// 
			this->lblZinc->AutoSize = true;
			this->lblZinc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblZinc->ForeColor = System::Drawing::Color::White;
			this->lblZinc->Location = System::Drawing::Point(13, 58);
			this->lblZinc->Name = L"lblZinc";
			this->lblZinc->Size = System::Drawing::Size(121, 24);
			this->lblZinc->TabIndex = 7;
			this->lblZinc->Text = L"Zinc (Anodo)";
			// 
			// lblCu
			// 
			this->lblCu->AutoSize = true;
			this->lblCu->BackColor = System::Drawing::Color::Transparent;
			this->lblCu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCu->ForeColor = System::Drawing::Color::Black;
			this->lblCu->Location = System::Drawing::Point(479, 370);
			this->lblCu->Name = L"lblCu";
			this->lblCu->Size = System::Drawing::Size(39, 24);
			this->lblCu->TabIndex = 6;
			this->lblCu->Text = L" Cu";
			// 
			// lblCu2
			// 
			this->lblCu2->AutoSize = true;
			this->lblCu2->BackColor = System::Drawing::Color::Transparent;
			this->lblCu2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCu2->ForeColor = System::Drawing::Color::Black;
			this->lblCu2->Location = System::Drawing::Point(413, 347);
			this->lblCu2->Name = L"lblCu2";
			this->lblCu2->Size = System::Drawing::Size(39, 24);
			this->lblCu2->TabIndex = 5;
			this->lblCu2->Text = L" Cu";
			// 
			// lbl2K
			// 
			this->lbl2K->AutoSize = true;
			this->lbl2K->BackColor = System::Drawing::Color::Transparent;
			this->lbl2K->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl2K->ForeColor = System::Drawing::Color::Red;
			this->lbl2K->Location = System::Drawing::Point(292, 183);
			this->lbl2K->Name = L"lbl2K";
			this->lbl2K->Size = System::Drawing::Size(43, 24);
			this->lbl2K->TabIndex = 4;
			this->lbl2K->Text = L"2K+";
			// 
			// lbl2Cl
			// 
			this->lbl2Cl->AutoSize = true;
			this->lbl2Cl->BackColor = System::Drawing::Color::Transparent;
			this->lbl2Cl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl2Cl->ForeColor = System::Drawing::Color::Blue;
			this->lbl2Cl->Location = System::Drawing::Point(292, 183);
			this->lbl2Cl->Name = L"lbl2Cl";
			this->lbl2Cl->Size = System::Drawing::Size(37, 24);
			this->lbl2Cl->TabIndex = 3;
			this->lbl2Cl->Text = L"2Cl";
			// 
			// lbl2e
			// 
			this->lbl2e->AutoSize = true;
			this->lbl2e->BackColor = System::Drawing::Color::Transparent;
			this->lbl2e->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl2e->ForeColor = System::Drawing::Color::Yellow;
			this->lbl2e->Location = System::Drawing::Point(117, 370);
			this->lbl2e->Name = L"lbl2e";
			this->lbl2e->Size = System::Drawing::Size(42, 24);
			this->lbl2e->TabIndex = 2;
			this->lbl2e->Text = L" 2e-";
			// 
			// lblZn
			// 
			this->lblZn->AutoSize = true;
			this->lblZn->BackColor = System::Drawing::Color::Transparent;
			this->lblZn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblZn->ForeColor = System::Drawing::Color::Black;
			this->lblZn->Location = System::Drawing::Point(117, 374);
			this->lblZn->Name = L"lblZn";
			this->lblZn->Size = System::Drawing::Size(32, 20);
			this->lblZn->TabIndex = 1;
			this->lblZn->Text = L" Zn";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->btnExit);
			this->panel2->Controls->Add(this->btnStart);
			this->panel2->Location = System::Drawing::Point(12, 13);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(662, 52);
			this->panel2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(375, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Electrolisis";
			// 
			// btnExit
			// 
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(139, 5);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(75, 36);
			this->btnExit->TabIndex = 1;
			this->btnExit->Text = L"Salir";
			this->btnExit->UseVisualStyleBackColor = true;
			// 
			// btnStart
			// 
			this->btnStart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStart->Location = System::Drawing::Point(27, 5);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(75, 36);
			this->btnStart->TabIndex = 0;
			this->btnStart->Text = L"Iniciar";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &Form1::btnStart_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(685, 519);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Electrolisis";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnStart_Click(System::Object^ sender, System::EventArgs^ e) {

		this->lbl2Cl->Show();
		this->lblZn->Show();
		this->lbl2K->Hide();
		this->lblCu->Hide();
		this->lblCu2->Hide();

		for (int i = 0; i <= 210; i++)
		{
			panel1->Update();

			this->lbl2e->Location = System::Drawing::Point(117, 370-i);
			if (i < 105) {
				this->lbl2Cl->Location = System::Drawing::Point(292-i, 183);
			}
			else {
				this->lbl2Cl->Location = System::Drawing::Point(214 - i/3 , 183+i/2);
			}

			if (i<40)
			{
				this->lblZn->Location = System::Drawing::Point(117+i, 370);
				this->lbl2->Location = System::Drawing::Point(i + 142, 360);

			}

		}
		
		this->lbl2Cl->Hide();
		this->lblZn->Hide();
		this->lbl2->Hide();
		this->lbl2K->Show();

		for (int i = 0; i <= 362; i ++)
		{
			panel1->Update();
			this->lbl2e->Location = System::Drawing::Point(117+i, 160);
			

			if (i>181)
			{
				this->lbl2K->Location = System::Drawing::Point(292+i/4, 183);

			}

		}


		for (int i = 0; i < 210; i++)
		{
			panel1->Update();
			this->lbl2e->Location = System::Drawing::Point(479, 160+i);
			if (i > 181)
			{
				this->lbl2K->Location = System::Drawing::Point(413 + i / 4, 183 + i/2);
			}

		}

		this->lbl2e->Hide();
		this->lbl2K->Hide();
		this->lblCu2->Show();
		this->lbl2->Show();

		for (int i = 413; i < 479; i++)
		{
			panel1->Update();

			this->lblCu2->Location = System::Drawing::Point(i, 347);
			this->lbl2->Location = System::Drawing::Point(i+25, 340);
		}

		for (int i = 447; i < 370; i++)
		{
			panel1->Update();

			this->lblCu2->Location = System::Drawing::Point(479, i);
		}
		this->lbl2->Hide();
		this->lblCu2->Hide();
		this->lblCu->Show();


	}
};
}
