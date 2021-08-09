#ifndef Button_h
#define Button_h

class Button {
  
public:
  Button(){
      
  }

  void setPin(int button_pin)
  {
    pin = buttonPin;
    pinMode(pin, INPUT);
  }

  bool isPressed(){
    return (digitalRead(pin) == HIGH);
  }
  
private:
  int pin;
};
#endif
