
#typedef Symbol const char*

class Key{
  Keyboard* keyboard;
  Symbol symbol;
  public:
    Key(Symbol); // Construtor com composição

    void press();

    Symbol getSymbol();

    void setKeyboard(Keyboard*);
    Keyboard* getKeyboard();
}

class KeyDigit: public Key{
  Digit digit;

  public:
    KeyDigit(Symbol, Digit); // Construtor com composição

    Digit getDigit();
};