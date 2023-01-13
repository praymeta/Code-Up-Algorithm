#include <iostream>
using namespace std;

int main(void) {
    int t, n, score1 = 0, score2 = 0;
    char player1, player2;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        for(int j = 0; j < n; j++) {
            cin >> player1 >> player2;
            if(player1 == 'R') {
                if(player2 == 'P') score2++;
                else if(player2 == 'S') score1++;
            } else if(player1 == 'P') {
                if(player2 == 'R') score1++;
                else if(player2 == 'S') score2++;
            } else {
                if(player2 == 'R') score2++;
                else if(player2 == 'P') score1++;
            }
        }
        if(score1 > score2) cout << "Player 1" << '\n';
        else if(score2 > score1) cout << "Player 2" << '\n';
        else cout << "TIE" << '\n';
        score1 = score2 = 0;
    }
}
