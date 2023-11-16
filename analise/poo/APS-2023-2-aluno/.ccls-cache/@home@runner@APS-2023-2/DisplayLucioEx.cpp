#include "DisplayLucioEx.hpp"
#include "Console.hpp"

#include <iostream>
#include <string>

std::string symbols[][5] = { 
  {"████", "█  █", "█  █" , "█  █" , "████"},
  {"   █", "   █", "   █" , "   █" , "   █"},
  {"████", "   █", "████" , "█   " , "████"},
  {"████", "   █", " ███" , "   █" , "████"},
  {"█  █", "█  █", "████" , "   █" , "   █"},
  {"████", "█   ", "████" , "   █" , "████"},
  {"████", "█   ", "████" , "█  █" , "████"},
  {"████", "   █", "   █" , "   █" , "   █"},
  {"████", "█  █", "████" , "█  █" , "████"},
  {"████", "█  █", "████" , "   █" , "████"},
  {"████", "█   ", "███ " , "█   " , "████"}
};

void DisplayLucioEx::avoid DisplayLucioEx::add(Digit digit){
dd(Digit digit){
  this->digits[this->digitsCount++] = digit;
  this->showDigits();
}
void DisplayLucioEx::setDecimalSeparator(){
  if(this->decimalSeparatorPosition == 0)
    this->decimalSeparatorPosition = this->digitsCount; 
}

void DisplayLucioEx::clear(){
  this->digitsCount = 0;
  this->decimalSeparatorPosition = 0;
  this->showDigits();
}

void DisplayLucioEx::showDigits(){
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

void DisplayLucioEx::showDigit(int digitIndex, int row, int col){
  for(int i = 0; i < 5; i++){
    Console::setCursor(row+i, col*6);
    std::cout << symbols[digitIndex][i];  
  }
  if(this->decimalSeparatorPosition == col+1){
   std::cout << "▗";  
  } 
 }

    void DisplayLucioEx::setMemory(bool){ 
    }
    void DisplayLucioEx::setNegative(bool){ 
    }
    void DisplayLucioEx::setError(bool){ 
    }



 //  switch(digit){
 //    case ZERO: std::cout << "😀😀😀😀\n😀    😀\n0  0\n0  0\n0000\n"; break;
 //    case ONE: std::cout << "   1\n   1\n   1\n   1\n   1\n"; break;
 //    default:
 //       std::cout << "ERROR";
 // }
