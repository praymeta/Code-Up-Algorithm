#include <iostream>
using namespace std;

int main(void) {
    int N, K, G, P;
    cin >> N >> K;
    for(int i = 0; i < K; i++) {
        cin >> G;
        P = G * 100 / N;
        if(0 <= P && P <= 4)
            cout << "1 ";
        else if(4 < P && P <= 11)
            cout << "2 ";
        else if(11 < P && P <= 23)
            cout << "3 ";
        else if(23 < P && P <= 40)
            cout << "4 ";
        else if(40 < P && P <= 60)
            cout << "5 ";
        else if(60 < P && P <= 77)
            cout << "6 ";
        else if(77 < P && P <= 89)
            cout << "7 ";
        else if(89 < P && P <= 96)
            cout << "8 ";
        else
            cout << "9 ";
    }
}
