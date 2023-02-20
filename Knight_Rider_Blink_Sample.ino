int pinArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int count = 0;

void setup() {
for (count=0;count<10;count++) {
    pinMode(pinArray[count], OUTPUT);
  }
  
}

void loop() {
  
  for(count=0;count<10;count++){ 
  digitalWrite(count, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for half a second
  digitalWrite(count, LOW);    // turn the LED off by making the voltage LOW
  /* delay(100); */                   
                   
 }

  for(count=9;count>=1;count--){
    digitalWrite(count, HIGH); 
    delay(100);
    digitalWrite(count, LOW);
  }
  }
