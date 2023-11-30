#pragma once

#include "CalculatorInterfaces.hpp"

class CpuLucio: public Cpu{
  private:
    Display* display;
    Digit* digit01[8];
    Digit* digit02[8];
    Operator* op=nullptr;

  public:
    Display* getDisplay();
    void setDisplay(Display*);

    void receiveDigit(Digit* digit){
      if (op==nullptr){
        digit01[digit01+1]= digit;
      }else{
        digit02[digit02+1]= digit;
      }
    };
    void receiveOperator(Operator){
      //apenas guardar
    };
    void receiveControl(Control){
      //swithcase
    };
};