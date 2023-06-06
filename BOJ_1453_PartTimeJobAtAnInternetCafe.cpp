#include <iostream>
using namespace std;

int main(void) {
    int n, answer = 0;
    cin >> n;
    int customer[n + 1], visited[n + 1] = {0, };
    for(int i = 1; i <= n; i++) {
        cin >> customer[i];
        if(visited[customer[i]] == 0)
            visited[customer[i]] = 1;
        else
            answer++;
    }
    cout << answer;
}
