#include "gpio.h"

Gpio::Gpio(int pin, int mode){
    pinMode(pin,mode);
    _pin = pin;
}

Gpio::~Gpio(){
    
}

void Gpio::on(){
    digitalWrite(_pin,HIGH);
}

void Gpio::off(){
    digitalWrite(_pin,LOW);
}

void Gpio::toggle(){
    if(isOn())
        off();
    else
        on();
}

bool Gpio::isOn(){
    return digitalRead(_pin);
}

bool Gpio::isOff(){
    return !digitalRead(_pin);
}