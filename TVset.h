#pragma once
#include <string>
const int channelQty = 10;
class TVSet {
private:
	bool isOn;
	unsigned int channelNum;
	std::string channelList[channelQty];

public:
	TVSet();
	void turnOn();
	void turnOff();
	void showStatus();
	void setChannelNum(unsigned int);
	void increaseChannelNum();
	void decreaseChannelNum();
	void setChannelList(std::string fList[], int);
};