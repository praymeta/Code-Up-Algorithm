#include <iostream>
using namespace std;

int main(void) {
    int white = 0, black = 0;
    char chess[8][8];
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cin >> chess[i][j];
            if('a' <= chess[i][j] && chess[i][j] <= 'z') {
                if(chess[i][j] == 'p')
                    black += 1;
                else if(chess[i][j] == 'n')
                    black += 3;
                else if(chess[i][j] == 'b')
                    black += 3;
                else if(chess[i][j] == 'r')
                    black += 5;
                else if(chess[i][j] == 'q')
                    black += 9;                    
            } else {
                if(chess[i][j] == 'P')
                    white += 1;
                else if(chess[i][j] == 'N')
                    white += 3;
                else if(chess[i][j] == 'B')
                    white += 3;
                else if(chess[i][j] == 'R')
                    white += 5;
                else if(chess[i][j] == 'Q')
                    white += 9;
            }
        }
    }
    cout << white - black;
}
