//diana galuh 
//
//class TVset
#include"TVset.h"
#include <iostream>
#include<string>
using namespace std;

int main() {
	string newChanelList[] = { "s","h","r","l","u","g","F","B","G","D" };
	int size = 10;
	TVSet ig_ultra8k;
	ig_ultra8k.showStatus();
	ig_ultra8k.turnOn();
	ig_ultra8k.showStatus();
	ig_ultra8k.turnOff();
	ig_ultra8k.showStatus();
	ig_ultra8k.setChannelList(newChanelList, size);
	ig_ultra8k.turnOn();
	ig_ultra8k.showStatus();
	
	ig_ultra8k.decreaseChannelNum();
	ig_ultra8k.showStatus();
	ig_ultra8k.decreaseChannelNum();
	ig_ultra8k.showStatus();

	return 0;
}