#include "tvset.h"
#include <iostream>

TVSet::TVSet() {
	isOn = false;
	for (int i = 0; i < channelQty; i++) channelList[i] = ' ';
}
void TVSet::turnOn() { isOn = true; channelNum = 1; }
void TVSet::turnOff() { isOn = false; }
void TVSet::showStatus() {
	if (isOn) {
		std::cout << "TV is on, channel " << channelNum << ' '
			<< channelList[channelNum - 1] << std::endl;
	}
	else std::cout << "TV is off" << std::endl;
}
void TVSet::setChannelNum(unsigned int fNum) {
	channelNum = fNum;
}
void TVSet::increaseChannelNum() {
	channelNum++;
	if (channelNum > channelQty) channelNum = 1;
}
void TVSet::decreaseChannelNum() {
	channelNum--;
	if (channelNum < 1) channelNum = channelQty;
}
void TVSet::setChannelList(std::string fList[], int size) {
	for (int i = 0; i < size; i++) {
		channelList[i] = fList[i];
	}
}