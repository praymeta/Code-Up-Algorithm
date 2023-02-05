#include <iostream>
using namespace std;

int main(void) {
    int s1, s2, sampleAnswer, systemAnswer, manyoungAnswer, sampleCheck = 1, systemCheck = 1;
    cin >> s1 >> s2;
    for(int i = 0; i < s1; i++) {
        cin >> sampleAnswer >> manyoungAnswer;
        if(sampleCheck == 0) break;
        if(sampleAnswer != manyoungAnswer) sampleCheck = 0;
    }
    for(int i = 0; i < s2; i++) {
        cin >> systemAnswer >> manyoungAnswer;
        if(systemCheck == 0) break;
        if(systemAnswer != manyoungAnswer) systemCheck = 0;
    }
    if(sampleCheck == 1 && systemCheck == 1) cout << "Accepted\n";
    else if(sampleCheck == 1 && systemCheck == 0) cout << "Why Wrong!!!\n";
    else cout << "Wrong Answer\n";
}
