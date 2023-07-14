#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0, p, q, r;
    vector<int> cp, dice(7, 0);
    dice[a]++;
    dice[b]++;
    dice[c]++;
    dice[d]++;
    cp = dice;
    sort(dice.begin(), dice.end(), greater<>());
    if(dice[0] == 4) {
        for(int i = 0; i < 7; i++) {
            if(cp[i] == 4) {
                p = i;
                answer = 1111 * p;
            }
        }
    } else if(dice[0] == 3) {
        for(int i = 0; i < 7; i++) {
            if(cp[i] == 3) p = i;
            if(cp[i] == 1) q = i;
        }
        answer = (10 * p + q) * (10 * p + q);
    } else if(dice[0] == 2 && dice[1] == 2) {
        for(int i = 0; i < 7; i++) {
            if(cp[i] == 2) p = i;
        }
        for(int i = 6; i >= 0; i--) {
            if(cp[i] == 2) q = i;
        }
        answer = (p + q) * abs(p - q);
    } else if(dice[0] == 2) {
        for(int i = 0; i < 7; i++) {
            if(cp[i] == 2) p = i;
            if((cp[i] != 2) && (cp[i] != 0)) q = i;
        }
        for(int i = 6; i >= 0; i--) {
            if((cp[i] != 2) && (cp[i] != 0)) r = i;
        }
        answer = q * r;
    } else {
        int minValue = 7;
        for(int i = 0; i < 7; i++) {
            if(cp[i] != 0) {
                answer = i;
                break;
            }
        }
    }
    
    return answer;
}
