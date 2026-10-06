#include <iostream>
using namespace std;

int main() {
	double F;
	cin >> F;
	cout << fixed;
	cout << setprecision(3) << (F -32) * 5 / 9 << endl;
	return 0;
}
