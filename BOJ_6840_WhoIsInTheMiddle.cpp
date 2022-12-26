#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int weight[3];
    cin >> weight[0] >> weight[1] >> weight[2];
    sort(weight, weight + 3);
    cout << weight[1];
}
