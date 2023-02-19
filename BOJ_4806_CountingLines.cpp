#include <iostream>
using namespace std;

int main(void) {
    string str;
    int result = 0;
    while(getline(cin, str)) result++;
    cout << result;
}
