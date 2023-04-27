#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int numer, denom, a, b, c;
    denom = denom1 * denom2;
    numer = (numer1 * denom2) + (numer2 * denom1);
    a = max(denom, numer);
    b = min(denom, numer);
    while(b) {
        c = a % b;
        a = b; 
        b = c;
    }
    answer.push_back(numer / a);
    answer.push_back(denom / a);
    return answer;
}
