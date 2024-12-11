#pragma once
#include "Function.h"

class Polynomial : public Function
{
protected:
   double* coefficients;
public:

   Polynomial()
   {
      coefficients = 0;
      name = "a(0)+...+a(n)*x^n";
   }

   const string& Get_Name() const override { return name; }
   
   double Calculate()
   {
      

      cout << "Enter number coefficients: ";
      int n_coefficients;
      cin >> n_coefficients;
      if (n_coefficients == 0)
         return 0;

      coefficients = new double[n_coefficients + 1];

      cout << "Enter coefficients: ";
      for (int i = n_coefficients - 1; i > 0; i--)
      {
         cin >> coefficients[i];
         while (!cin.good())
         {
            cout << "Incorrect Input! Try Again" << endl;
            cin >> coefficients[i];
         }
      }

      double result = coefficients[0];
      
      for (int i = 1; i < n_coefficients; i++)
      {
         result *= x;
         result += coefficients[i];
      }

      return result;
   }

   double Calculate(double arg_)
   {
      x = arg_;
      int n_coefficients = sizeof(*coefficients) / sizeof(double);
      double result = coefficients[0];

      for (int i = 1; i < n_coefficients; i++)
      {
         result *= x;
         result += coefficients[i];
      }

      return result;
   }
};

