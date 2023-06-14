#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer, studentScore;
    vector<pair<int, int>> scoreRank;
    for(int i = 0; i < score.size(); i++)
        studentScore.push_back(score[i][0] + score[i][1]);
    sort(studentScore.begin(), studentScore.end(), greater<>());
    int tempRank = 0;
    for(int i = 0; i < studentScore.size(); i++) {
        tempRank++;
        if(i == 0) {
            scoreRank.push_back(make_pair(studentScore[0], 1));
        } else {
            if(studentScore[i] == studentScore[i - 1]) continue;
            scoreRank.push_back(make_pair(studentScore[i], tempRank));
        }
    }
    for(int i = 0; i < score.size(); i++) {
        for(int j = 0; j < scoreRank.size(); j++) {
            if(score[i][0] + score[i][1] == scoreRank[j].first) {
                answer.push_back(scoreRank[j].second);
            }
        }
    }
    return answer;
}
