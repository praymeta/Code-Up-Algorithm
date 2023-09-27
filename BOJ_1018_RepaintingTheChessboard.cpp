#include <iostream>
using namespace std;

string WB[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};
string BW[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

int WtoB(int x, int y, string chessboard[50]) {
    int cnt = 0;
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(chessboard[x + i][y + j] != WB[i][j])
                cnt++;
        }
    }
    return cnt;
}

int BtoW(int x, int y, string chessboard[50]) {
    int cnt = 0;
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(chessboard[x + i][y + j] != BW[i][j])
                cnt++;
        }
    }
    return cnt;
}

int main(void) {
    int N, M, cnt, temp, min_repaint = 64;
    cin >> N >> M;
    string chessboard[50];
    for(int i = 0; i < N; i++)
        cin >> chessboard[i];
    for(int i = 0; i + 8 <= N; i++) {
        for(int j = 0; j + 1 <= M; j++) {
            temp = min(BtoW(i, j, chessboard), WtoB(i, j, chessboard));
            if(min_repaint > temp)
                min_repaint = temp;
        }
    }
    cout << min_repaint;
}
