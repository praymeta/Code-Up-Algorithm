#include <iostream>
using namespace std;

int main(void) {
    int array[9][9], row, column, maxValue = 0;
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            cin >> array[i][j];
            if(max(maxValue, array[i][j]) == array[i][j]) {
                maxValue = array[i][j];
                row = i, column = j;
            }
        }
    }
    cout << maxValue << '\n';
    cout << row + 1 << ' ' << column + 1;
}
