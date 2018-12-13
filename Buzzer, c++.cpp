#include <iostream>
#include <wiringPi.h>
#include <cstdlib>

#define BuzzerPin 0
#define ButtonPin 1

using namespace std;

int main(void)
{
    setenv("WIRINGPI_GPIOMEM", "1", 1);
    wiringPiSetup();

    pinMode(BuzzerPin, OUTPUT);
    pinMode(ButtonPin, INPUT);

    pullUpDnControl(ButtonPin, PUD_UP);
    while(1){
        digitalWrite(BuzzerPin, HIGH);
        if(digitalRead(ButtonPin) == 0){
            digitalWrite(BuzzerPin, LOW);
        }
    }

    return 0;
}