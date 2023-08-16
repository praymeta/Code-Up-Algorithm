#include <iostream>
using namespace std;

int main(void) {
    int K, h;
    string activation;
    cin >> K;
    for(int i = 1; i <= K; i++) {
        cin >> h >> activation;
        for(int j = 0; j < activation.length(); j++) {
            if(activation[j] == 'c')
                h++;
            else
                h--;
        }
        cout << "Data Set " << i << ":\n";
        cout << h << "\n\n";
    }
}
