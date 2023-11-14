#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
    string board, ans;
    int cnt = 0;
    cin >> board;
    board += ' ';
    for(int i = 0; i < board.size() - 1; i++) {
        if(board[i] == 'X')
            cnt++;
        if(board[i] == '.') {
            ans += ".";
            if(cnt % 2 != 0)
                break;
            else
                cnt = 0;
        }
        if(cnt == 2 && board[i + 1] != 'X') {
            ans += "BB";
            cnt = 0;
        } else if(cnt == 4) {
            ans += "AAAA";
            cnt = 0;
        }
    }
    if(cnt % 2 == 1)
        cout << -1;
    else
        cout << ans;
}
