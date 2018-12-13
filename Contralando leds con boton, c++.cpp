#include <iostream>
#include <wiringPi.h>
#include <cstdlib>

#define LedPin 0
#define ButtonPin 1

using namespace std;

int main(void)
{
    setenv("WIRINGPI_GPIOMEM", "1", 1);
    wiringPiSetup();

    pinMode(LedPin, OUTPUT);
    pinMode(ButtonPin, INPUT);

    while(1){
        digitalWrite(LedPin, HIGH);
        if(digitalRead(ButtonPin) == 0){
            cout<<"Presionando"<<endl;
            system("clear");
            digitalWrite(LedPin, LOW;
            delay(120);
            digitalWrite(LedPin, HIGH);
            delay(120);
            digitalWrite(LedPin, LOW;
            delay(120);
            digitalWrite(LedPin, HIGH);
            delay(120);
        }
    }

    return 0;
}