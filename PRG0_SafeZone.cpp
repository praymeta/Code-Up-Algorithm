#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    vector<vector<int>> copy = board;
    int answer = 0, iPlusOne, jPlusOne, iMinusOne, jMinusOne;
    for(int i = 0; i < board.size(); i++) {
        for(int j = 0; j < board.size(); j++) {
            if(board[i][j] == 1) {
                iPlusOne = i + 1;
                jPlusOne = j + 1;
                iMinusOne = i - 1;
                jMinusOne = j - 1;
                if(iPlusOne >= board.size()) iPlusOne = board.size() - 1;
                if(jPlusOne >= board.size()) jPlusOne = board.size() - 1;
                if(iMinusOne < 0) iMinusOne = 0;
                if(jMinusOne < 0) jMinusOne = 0;
                for(int k = 0; k < 8; k++) {
                    switch(k) {
                        case 0:
                            copy[i][jPlusOne] = 1;
                            break;
                        case 1:
                            copy[iPlusOne][jPlusOne] = 1;
                            break;
                        case 2:
                            copy[iPlusOne][j] = 1;
                            break;
                        case 3:
                            copy[iPlusOne][jMinusOne] = 1;
                            break;
                        case 4:
                            copy[i][jMinusOne] = 1;
                            break;
                        case 5:
                            copy[iMinusOne][jMinusOne] = 1;
                            break;
                        case 6:
                            copy[iMinusOne][j] = 1;
                            break;
                        case 7:
                            copy[iMinusOne][jPlusOne] = 1;
                            break;
                    }
                }
            }
        }
    }
    for(int i = 0; i < board.size(); i++) {
        for(int j = 0; j < board.size(); j++) {
            if(copy[i][j] == 0)
                answer++;
        }
    }
    return answer;
}
