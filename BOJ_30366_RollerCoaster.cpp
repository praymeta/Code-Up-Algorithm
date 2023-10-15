#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M, tempM = 0, time = 0;
    cin >> N >> M;
    int member[N];
    for(int i = 0; i < N; i++) {
        cin >> member[i];
        tempM += member[i];
        if(tempM <= M)
            cout << time << '\n';
        else {
            time++;
            cout << time << '\n';
            tempM = member[i];
        }
    }
}
