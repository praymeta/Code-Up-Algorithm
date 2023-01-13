#include <iostream>
using namespace std;

int main(void) {
    string computer;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> computer;
        for(int j = 0; j < computer.size(); j++) {
            if(computer[j] == 'Z') computer[j] = 'A';
            else computer[j] += 1;
        }
        cout << "String #" << i << '\n' << computer << "\n\n";
    }
}
