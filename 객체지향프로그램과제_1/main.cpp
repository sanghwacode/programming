#include "Ram.h"
#include <iostream>
using namespace std;

int main() {
	Ram ram;
	ram.write(10, 100);
	ram.write(11, 101);
	char res = ram.read(100) + ram.read(101);
	ram.write(102, res);
	cout << "102번지의 " << (int)ram.read(102) << endl;

	return 0;
}
