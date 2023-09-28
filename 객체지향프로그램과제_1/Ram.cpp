#include <iostream>
#include <string>
#include "Ram.h"

using namespace std;

Ram::Ram() {
	for (int i = 0; i < 100 * 1024; i++) {
		tmp[i] = 0;
	}
	size = 100 * 1024;
}
Ram::~Ram() {
	cout << "¸Þ¸ð¸® Á¦°ÅµÊ" << endl;
}
char Ram::read(int address) {
	return mem[address];
}
void Ram::write(int address, char value) {
	tmp[address] = value;
}
