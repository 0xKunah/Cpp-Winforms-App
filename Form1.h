#pragma once

namespace CppWinformsApp {

  using namespace System;
  using namespace System::ComponentModel;
  using namespace System::Collections;
  using namespace System::Windows::Forms;
  using namespace System::Data;
  using namespace System::Drawing;

  public ref class Form1 : public System::Windows::Forms::Form
  {
  public:
    Form1(void)
    {
      InitializeComponent();
    }

  protected:
    ~Form1()
    {
      if (components)
      {
        delete components;
      }
    }
  protected:

  private:
    System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
    void InitializeComponent(void)
    {
    }
#pragma endregion
  };
}

