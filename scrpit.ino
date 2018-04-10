#define LED 13

int sensor_pin = A0;
int output_value;

void setup() {
  Serial.begin(9600);
  Serial.println("Obteniendo información...");
  delay(2000);
  pinMode(LED, OUTPUT);
}

void loop() {
  output_value = analogRead(sensor_pin);

  output_value = map(output_value, 550, 0, 0, 100);

  if(output_value < 30) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);    
  }
  
  Serial.print("Humedad: ");
  Serial.print(output_value);
  Serial.println("%");
  
  delay(1500);
}