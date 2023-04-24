#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = 0;
    double d_price = price;
    if(d_price >= 500000) answer = d_price * 0.8;
    else if(d_price >= 300000) answer = d_price * 0.9;
    else if(d_price >= 100000) answer = d_price * 0.95;
    else answer = d_price;
    return answer;
}
