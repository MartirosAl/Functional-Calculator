#pragma once
#include "Function.h"

class Exponent : public Function
{
   double accurancy;
public:
   Exponent()
   { 
      accurancy = 0.00001;
      name = "e^x";
   }

   const string& Get_Name() const
   {
      return name;
   }

   double Calculate()
   {

      cout << "Calculation for y = " << name << endl;
      cout << "Enter x: ";
      cin >> x;
      cout << "y = ";

      int temp1 = 1;
      double result;
      double copy = 1;
      double temp2 = 1;

      cout << copy;
      if (copy > accurancy)
         cout << " + ";
      result = copy;

      try
      {
         for (int i = 1; copy > accurancy; i++)
         {
            copy = (temp2 *= x) / (temp1 *= i);
            cout << copy;
            result += copy;
            if (copy > accurancy)
               cout << " + ";
         }
      }
      catch (const char* error)
      {
         cout << error;
      }
      
      cout << endl;

      return result;
   }

   double Calculate(double arg_)
   {
      int temp1 = 1;
      double result;
      double copy = 1;
      double temp2 = x;

      cout << copy;
      if (copy > accurancy)
         cout << " + ";
      result = copy;


      try
      {
         for (int i = 1; copy > accurancy; i++)
         {
            copy = (temp2 *= x) / (temp1 *= i);
            cout << copy;
            result += copy;
            //if (copy > accurancy)
            //   cout << " + ";
         }
      }

      catch (const char* error)
      {
         cout << error;
      }

      cout << endl;

      return result;
   }
};

