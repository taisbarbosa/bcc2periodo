#pragma once

#include "CalculatorInterfaces.hpp"

class DisplayLucioEx: public Display{
  protected:
   Digit digits[8];
   unsigned char digitsCount = 0;
   unsigned char decimalSeparatorPosition = 0;

   virtual void showDigits();
   virtual void showDigit(int digitIndex, int row, int col);

  public:
    void add(Digit);
    void setDecimalSeparator();
    void clear();
    void setError(bool);
    void setMemory(bool);
    void setNegative(bool);
};

//#endif