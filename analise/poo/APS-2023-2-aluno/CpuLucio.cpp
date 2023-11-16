#include "CpuLucio.hpp"
#include "CalculatorInterfaces.hpp"

Display *CpuLucio::getDisplay() { return this->display; }
void CpuLucio::setDisplay(Display *display) { this->display = display; }

void CpuLucio::receiveDigit(Digit digit) {
  if(this->digit!=nullptr) this->digit->add(digit);
  this->getDigit()->receiveDigit(this->digit);
    
}
void CpuLucio::receiveOperator(Operator op) { 
  if(this->op!=nullptr) this->op->add(op);
  this->getDigit()->receiveDigit(this->digit);
  /* TODO */
}
void CpuLucio::receiveControl(Control ctrl) { 
  if(this->ctrl!=nullptr) this->ctrl->add(ctrl);
  this->getDigit()->receiveDigit(this->digit);
  /* TODO */
}
