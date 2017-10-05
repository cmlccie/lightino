/* Color Wave
   Author: Chris Lunsford
   License: MIT
   Copyright (c) 2017 Chris Lunsford
*/


// pin defines
uint8_t LED1 = 9;
uint8_t LED2 = 8;
uint8_t LED3 = 7;
uint8_t LED4 = 6;
uint8_t LED5 = 5;
uint8_t LED6 = 4;
uint8_t LED7 = 3;
uint8_t LED8 = 2;
uint8_t GREEN = A0;
uint8_t RED = A1;
uint8_t BLUE = A2;
uint8_t RXLED = 17;

uint8_t led_anodes[] = {LED1, LED2, LED3, LED4, LED5, LED6, LED7, LED8};
uint8_t led_cathodes[] = {GREEN, RED, BLUE};


void setup() {
  // pin direction setup
  pinMode(RXLED, OUTPUT);
  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED1, OUTPUT);

  // default off
  TXLED0;
  RXLED0;
  digitalWrite(RED, LOW);
  digitalWrite(BLUE, LOW);;
  digitalWrite(GREEN, LOW);  
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED1, LOW);
}

void loop() {
  // color wave
  for (uint8_t c=0; c<3; c++) {
    digitalWrite(led_cathodes[c], HIGH);
    
    for (uint8_t l=0; l<8; l++) {
      // turn on one LED at a time
      digitalWrite(led_anodes[l], HIGH);
      delay(10);
      digitalWrite(led_anodes[l], LOW);
    }

    digitalWrite(led_cathodes[c], LOW);
  }
}
