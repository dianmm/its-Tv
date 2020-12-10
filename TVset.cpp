#include "TVset.h"
#include<iostream>

TVset::TVset() { isOn = false; }
void TVset::turnOn() { isOn = true; }
void TVset::turnOff(){ isOn = false; }
void TVset::showStatus(){
	if (isOn)std::cout << "TV is ON\n";
	else std::cout << "TV is OFF" << std::endl;




}
