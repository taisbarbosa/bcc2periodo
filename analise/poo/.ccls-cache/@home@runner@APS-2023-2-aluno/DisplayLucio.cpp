#include "DisplayLucio.hpp"
#include "Console.hpp"

void DisplayLucio::showDigits(){
  Console::setColor(Color::BG_Green);  
  Console::setColor(Color::FG_Red);  
  Console::clearScreen();

  for(int i= 0; i < this->digitsCount; i++){ 
    switch(this->digits[i]){
      case ZERO: this->showDigit(0, 1, i); break;
      case ONE: this->showDigit(1, 1, i); break;
      case TWO: this->showDigit(2, 1, i); break;
     default:
       this->showDigit(10, 1, i); break;
   }
  }
}
