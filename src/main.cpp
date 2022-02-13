#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int x, y, z;
	cin >> x >> y >> z;
	
	int xp, yp, zp;
	cin >> xp >> yp >> zp;

	auto hx = x / 2 + x % 2;
	auto hy = y / 2 + y % 2;

	if (xp == x && yp == y) {
		cout << "A";
	}
	else if (hx <= xp && yp == y) {
		cout << "B";
	}
	else if (yp == y) {
		cout << "C";
	}
	else if (hy <= yp) {
		cout << "D";
	}
	else {
		cout << "E";
	}

	return 0;
}