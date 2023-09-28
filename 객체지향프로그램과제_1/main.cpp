#include "Ram.h"
#include <iostream>
using namespace std;

int main() {
	Ram ram;
	ram.write(10, 100);
	ram.write(11, 101);
	char res = ram.read(10) + ram.read(11);
	ram.write(12, res);
	cout << "12번째 메모리의 값 = " << (int)ram.read(12) << endl;

	return 0;
}
