#include "logic.h"

int main() {
	int a, b, c;
	cout << "Input 3 numbers: ";
	cin >> a >> b >> c;

	cout << "Before: \n" << "A --> " << a << "\nB --> " << b << "\nC --> " << c;
	sort(&a, &b, &c);
	cout << "\nAfter: \n" << "A --> " << a << "\nB --> " << b << "\nC --> " << c;

		return 0;
}