int motor=8;
int water; //random variable
void setup()
{ 
pinMode(AO, INPUT); //input pin coming from soil sensor 
Serial.begin(9600); 
pinMode(8, OUTPUT);
}
void loop() 
{ 
water = analogRead(A0); 
Serial.println(water); // reading the coming signal from the soil sensor 
if(water<600) // if water level is full then cut the relay
{ 
//analogWrite(3, LOW); 
// low is to cut the relay 
Serial.println("water high"); 
digitalWrite(motor, LOW); //delay(4580);
}
else
{ 
//analogWrite(3, HIGH);
// low is to cut the relay 
Serial.println("water low"); 
digitalWrite(motor, HIGH); 
delay(4580);
}
delay(1000);
}