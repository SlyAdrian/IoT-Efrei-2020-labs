#include<Wire.h> // including the Wire library
const int i2c_addr=0x68; // Specify the target I2C address
void setup(){
    Wire.begin();//Join the I2C bus as a master
}
void loop(){
//To send data to a slave:
    Wire.beginTransmission(i2c_addr);//Begin a transmission to the slave
    Wire.write(data);//Writing data to I2C bus
    Wire.endTransmission();//Ends a transmission to a slave device
//To request from a slave to send some bytes:
    Wire.requestFrom(i2c_addr, 6);//request 6 bytes from the slave device
    while (Wire.available()) {//slave may send less than requested
        char c = Wire.read();//Reading data from I2C bus
    }
}
