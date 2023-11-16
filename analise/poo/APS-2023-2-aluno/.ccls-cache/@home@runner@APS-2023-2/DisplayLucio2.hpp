#include "Display.hpp"

#include "Console.hpp"

class DisplayLucio2: public Display{
  void showDigits(){
  Console::setColor(Color::BG_Green);  
  Console::setColor(Color::FG_Yellow);  
  Console::clearScreen();

}
};