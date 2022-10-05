

void enableBLEComm(){
    // Read from the Serial Monitor and send to the HM-10 and read from the HM-10 and send to Serial Monitor
    if (Serial.available())
    {
        c = Serial.read();
 
        // do not send line end characters to the HM-10
        if (c!=10 & c!=13 ) 
        {  
             BTserial.write(c);
        }
 
        // Echo the user input to the main window. 
        // If there is a new line print the ">" character.
        if (NL) { Serial.print("\r\n>");  NL = false; }
        Serial.write(c);
        if (c==10) { NL = true; }
    }
}

void writeBLEData(){
  BTserial.write(bleS1);
  BTserial.write(bleS2);
  BTserial.write(bleS3);

  if (channel_6_pwm > 1667){
    BTserial.write((byte) 0x00);
  }
  if (channel_6_pwm > 1333 && channel_6_pwm < 1667){
    BTserial.write(1);
  }
  if(channel_6_pwm > 1000 && channel_6_pwm < 1333){
    BTserial.write(2);
  }
  
  BTserial.write(bleGyroX);
  BTserial.write(bleGyroY);
  BTserial.write(bleGyroZ);
}

void printBLEWrite(){
    if (current_time - print_counter > 10000) {
      print_counter = micros();
      Serial.println(map(S1.Distance(), 2, 799, 0, 255));
      Serial.println(map(S2.Distance(), 2, 799, 0, 255));
      Serial.println(map(S3.Distance(), 2, 799, 0, 255));
      Serial.println(bleCh6);
      Serial.println(map(GyroX, -250, 250, 0, 255));
      Serial.println(map(GyroY, -250, 250, 0, 255));
      Serial.println(map(GyroZ, -250, 250, 0, 255));
  }
}
