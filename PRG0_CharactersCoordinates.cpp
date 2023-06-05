#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer(2, 0);
    int limitX = board[0] / 2, limitY = board[1] / 2;
    for(int i = 0; i < keyinput.size(); i++) {
        if(keyinput[i] == "left") answer[0] -= 1;
        else if(keyinput[i] == "right") answer[0] += 1;
        else if(keyinput[i] == "down") answer[1] -= 1;
        else answer[1] += 1;
        if(answer[0] > limitX) answer[0] = limitX;
        if(answer[0] < (-1) * limitX) answer[0] = (-1) * limitX;
        if(answer[1] > limitY) answer[1] = limitY;
        if(answer[1] < (-1) * limitY) answer[1] = (-1) * limitY;
    }
    return answer;
}
