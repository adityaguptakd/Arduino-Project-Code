int PWMouty = 5; //PWM for bottom motor
int PWMoutx = 10; // PWM for top motor
int dxset  = 11;
int dyset = 6;
const int pause = 12000;

void setup() {
  pinMode(PWMouty, OUTPUT);
  pinMode(PWMoutx, OUTPUT);
  pinMode(dxset, OUTPUT);
  pinMode(dyset, OUTPUT);

}

void loop() {
    digitalWrite(dxset, HIGH);
    digitalWrite(dyset, HIGH);
    analogWrite(PWMouty, 000);
    analogWrite(PWMoutx, 000);
    delay(pause);
    
    analogWrite(PWMoutx, 255);
    delay(pause);

    analogWrite(PWMouty, 255);
    delay (pause);

    analogWrite(PWMoutx, 000);
    delay(pause);

    analogWrite(PWMouty, 000);
    delay(pause);

    analogWrite(PWMouty, 170);
    delay(pause);

    analogWrite(PWMoutx, 150);
    delay(pause);

    analogWrite(PWMouty, 40);
    delay(15000);

    analogWrite(PWMoutx, 000);
    delay(pause);

    analogWrite(PWMouty, 000);
    analogWrite(PWMoutx, 000);
    delay(pause);

    analogWrite(PWMoutx, 255);
    delay(pause);

   // analogWrite(PWMouty, 255);
  //  analogWrite(PWMoutx, 255);
   // delay(pause);

  //  analogWrite(PWMoutx, 000);
  //  delay(pause);

  //  analogWrite(PWMouty, 000);
  //  analogWrite(PWMoutx, 255);
  //  delay(pause);

    digitalWrite(dxset, LOW);
    analogWrite(PWMoutx, 255);
    analogWrite(PWMouty, 255);
    delay(6000);

    analogWrite(PWMoutx, 000);
    analogWrite(PWMouty, 255);
    delay(pause);

}
