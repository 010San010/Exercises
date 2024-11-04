#include <iostream>
#include <cmath>
using namespace std;

int main() {
	string binNumber;
	cout << "Input a binary number (32 bits max).\n";
	cin >> binNumber;
	binNumber.resize(32);


	bool needChange;
	for (int i = 0; i < binNumber.size() / 2; i++) {
		needChange = binNumber[i] xor binNumber[binNumber.size() - 1 - i];
		switch (needChange)
		{
		case 0:
			break;
		case 1:
			binNumber[i] = !(binNumber[i] - '0') + '0';
			binNumber[binNumber.size() - 1 - i] = !(binNumber[binNumber.size() - 1 - i] - '0') + '0';
			break;
		}
	}

	for(int i = 0; i < 32 - binNumber.size(); i++)
		binNumber.append("0");

	unsigned decNumber = 0;
	for (int i = 31; i > -1; i--) {
		decNumber += pow(2, 31 - i);
	}

	cout << decNumber;
}