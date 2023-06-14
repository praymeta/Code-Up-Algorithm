#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <cmath>
using namespace std;

int main(void) {
    int n, temp;
    cin >> n;
    vector<int> score;
    vector<string> sScore;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        score.push_back(temp);
    }
    for(int i = 0; i < score.size(); i++) {
        sScore.push_back(to_string(score[i]));
        for(int j = 0; j < sScore[i].length(); j++) {
            if(sScore[i][j] == '0' || sScore[i][j] == '6')
                sScore[i][j] = '9';
        }
        score[i] = stoi(sScore[i]);
        if(score[i] > 100) score[i] = 100;
    }
    cout << round(accumulate(score.begin(), score.end(), 0.0) / score.size());
}
