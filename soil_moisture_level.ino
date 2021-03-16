//pins
int sensor_pin = A0;
int currentSoilMoistureLevel;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Values....");
  delay(2000);

}

void loop() {
  // put your main code here, to run repeatedly:
  currentSoilMoistureLevel = analogRead(sensor_pin);
  Serial.println("Moisture: ");
  Serial.println(currentSoilMoistureLevel);

  if (currentSoilMoistureLevel > 900){
    Serial.println("on");
    
  } else if(currentSoilMoistureLevel < 270){
    Serial.println("off");  
    
  } else if((currentSoilMoistureLevel >= 270) || (currentSoilMoistureLevel <= 900)){
      float currentSoilMoistureLevelPercentage = (900 - currentSoilMoistureLevel);
      currentSoilMoistureLevelPercentage = currentSoilMoistureLevelPercentage * 100 / 630;
      Serial.println(currentSoilMoistureLevelPercentage);

      if(currentSoilMoistureLevelPercentage >= 50.0){
        Serial.println("off");
      }else {
        Serial.println("on");
      }
  
  }
  delay(1000);

}
