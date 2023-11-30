#pragma once

#include "CalculatorInterfaces.hpp"

class KeyboardLucio: public Keyboard{
    static const char MAX_KEYS = 101;

    Key* keys[MAX_KEYS];
    char keysCount = 0;
    Cpu* cpu;
    
    
  public:
    void addKey(Key* key){
      this.KeyLucio.getSymbol();
      this.KeyLucio.getDigit();
      this.KeyLucio.getOperador();
      this.KeyLucio.getControl();
    };
    void removeKey(Key*);
    Key* findKey(Symbol);
    
    void setCpu(Cpu*);
    Cpu* getCpu();
};