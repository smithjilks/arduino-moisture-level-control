//pins
int sensor_pin = A0;
int pump = 13;


int currentSoilMoistureLevel;

void setup() {
  // put your setup code here, to run once:
  pinMode(pump, OUTPUT);
  Serial.begin(9600);
  Serial.println("Running....");
  delay(2000);

}

void loop() {
  // put your main code here, to run repeatedly:
  currentSoilMoistureLevel = analogRead(sensor_pin);
  Serial.println("Moisture: ");
  Serial.println(currentSoilMoistureLevel);

  if (currentSoilMoistureLevel > 570){
    digitalWrite(pump,HIGH);
    
  } else if(currentSoilMoistureLevel < 220){
    digitalWrite(pump,LOW);  
    
  } else if((currentSoilMoistureLevel >= 220) || (currentSoilMoistureLevel <= 570)){
      float currentSoilMoistureLevelPercentage = (570 - currentSoilMoistureLevel);
      currentSoilMoistureLevelPercentage = currentSoilMoistureLevelPercentage * 100 / 350;
      Serial.println(currentSoilMoistureLevelPercentage);

      if(currentSoilMoistureLevelPercentage >= 50.0){ // If moisture level of 50% is required
        digitalWrite(pump,LOW);
      }else {
        digitalWrite(pump,HIGH);
      }
  
  }
  delay(1000);

}
