#include <iostream>
#include <string>
#include "Ram.h"

using namespace std;

Ram::Ram() {
	for (int i = 0; i < size; i++) {
		tmp[i] = 0;
	}
}
Ram::~Ram() {
	cout << "메모리 초기화 완료" << endl;
}
char Ram::read(int address) {
	return mem[address];
}
void Ram::write(int address, char value) {
	tmp[address] = value;
}
