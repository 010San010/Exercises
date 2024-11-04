#include <iostream>
using namespace std;

int main()
{
    int decNumber;
    cout << "Input an integer number.\n";
    cin >> decNumber;

    int hamWeight = 0;
    while (decNumber != 0) {
        if (decNumber % 2 == 1)
            hamWeight++;
        decNumber /= 2;
    }

    cout << hamWeight;
}
