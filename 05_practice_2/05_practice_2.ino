#define PIN_LED 7
unsigned int toggle = 1;
void setup() {
  pinMode(PIN_LED, OUTPUT);
  digitalWrite(PIN_LED, toggle);
  delay(1000);
  for (int i = 1; i <= 10; i++){
    convertToggle();
    delay(100);
  }
}

void loop() {
  while(1){
    digitalWrite(PIN_LED, 0);
  }
}

int convertToggle(){
  toggle = setToggle(toggle);
  digitalWrite(PIN_LED, toggle);
}

int setToggle(int toggle){
  if (toggle == 0){
    return 1;
  }
  else {
    return 0;
  }
}
