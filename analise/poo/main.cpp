#include "DisplayLucio.hpp"
#include <iostream>

#include "Console.hpp"

int main() {
  Console::init(10, 5);

  DisplayLucio display1;

  display1.add(ONE);
  display1.setDecimalSeparator();
  display1.add(ONE);
  display1.add(ZERO);
  // display1.clear();
  display1.add(ZERO);
  display1.add(FOUR);

  Console::setCursor(20, 0);

  // Calculator calculator1;

  // calculator1.getKeyboard().getKey("1").press();
  // calculator1.getKeyboard().getKey("+").press();
  // calculator1.getKeyboard().getKey("1").press();
  // calculator1.getKeyboard().getKey("=").press();
}

// typecasting esplicito - DisplayLucio* display2 = (DisplayLucio*) desplay1;

// display1 = display2; - a maquina converte automaticamente algo simples para complexo;