#include <iostream>
using namespace std;

int main(void) {
    int n, p, c;
    string name;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int topC = 0;
        string topName;
        cin >> p;
        for(int j = 0; j < p; j++) {
            cin >> c >> name;
            if(c > topC) {
                topC = c;
                topName = name;
            }
        }
        cout << topName << '\n';
    }
}
