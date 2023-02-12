#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin >> n;

	int row = n / 2 + 1;
	int col = n - row + 2;
	int result = row * col;

	cout << result << "\n";

	return 0;
}
