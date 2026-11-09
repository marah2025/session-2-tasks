#include <iostream>
using namespace std;

int main() {
	int m;
	cin >> m;

	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == b + c || b == a + c || c == a + b) {
			cout << "Yse" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		return 0;
	}
}






