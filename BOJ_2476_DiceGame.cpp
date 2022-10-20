#include <iostream>
#include <algorithm>

using namespace std;

int sameNum(int a, int b, int c)
{
	if (a - b == 0) {
		return a;
	} else if (b - c == 0) {
		return b;
	} else {
		return a;
	} 
}

int bigNum(int a, int b, int c) {
	int num[3] = { a, b, c };
	sort(num, num + 3);
	return num[2];
}

int main() {
	int n;
	cin >> n;

	int** dice = new int*[n];
	int* reward = new int[n];
	for (int i = 0; i < n; i++) {
		dice[i] = new int[3]{};
		cin >> dice[i][0] >> dice[i][1] >> dice[i][2];
		if (dice[i][0] == dice[i][1] && dice[i][1] == dice[i][2]) {
			reward[i] = 10000 + dice[i][0] * 1000;
		} else if (dice[i][0] == dice[i][1] || dice[i][1] == dice[i][2] || dice[i][2] == dice[i][0]) {
			reward[i] = 1000 + sameNum(dice[i][0], dice[i][1], dice[i][2])*100;
		} else {
			reward[i] = bigNum(dice[i][0], dice[i][1], dice[i][2]) * 100;
		}
	}

	sort(reward, reward + n);
	cout << reward[n - 1];
}
