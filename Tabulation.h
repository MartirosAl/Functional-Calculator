#pragma once
#include "Action.h"
class Tabulation : public Action
{
   string name;

public:

   Tabulation() : name("Tabulation") {}

   const string& Get_Name() override { return name; }

   void Operate(Function* function_) override
   {
      cout << "Tabulation for function y = " << function_->Get_Name() << endl;

      function_->Calculate();

      double begin, step, end;

      cout << "Enter begin: "; cin >> begin;
      cout << "Enter step: "; cin >> step;
      cout << "Enter end: "; cin >> end;

      while (begin <= end)
      {
         cout << setw(6) << begin << "|" << setw(14) << function_->Calculate(begin) << endl;

         begin += step;
      }
   }
};

