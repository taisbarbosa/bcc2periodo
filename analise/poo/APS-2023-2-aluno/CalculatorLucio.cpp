#include "CalculatorLucio.hpp"

void CalculatorLucio::setDisplay(Display* display){
  this->display = display;
  /* TODO bindinmg parts */
  if(this->cpu!=nullptr) this->cpu->setDisplay(display);
  }
Display* CalculatorLucio::getDisplay(){
  return this->display;
  } 
void CalculatorLucio::setCpu(Cpu* cpu){
  this->cpu = cpu;
  /* TODO bindinmg parts */
  if(this->cpu!=nullptr) this->cpu->setCpu(cpu);
  }
Cpu* CalculatorLucio::getCpu(){
  return cpu;
}
void CalculatorLucio::setKeyboard(Keyboard* keyboard){
  this->keyboard = keyboard;
  /* TODO bindinmg parts */
  if(this->cpu!=nullptr) this->cpu->setKeyboard(Keyboard);
}
Keyboard* CalculatorLucio::getKeyboard(){
  return keyboard;
}
