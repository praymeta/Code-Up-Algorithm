#include <string>
#include <vector>

using namespace std;

vector<string> str = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

long long solution(string numbers) {
    long long answer = 0;
    while(numbers.length() != 0) {
        for(int i = 0; i < str.size(); i++) {
            if(numbers.substr(0, str[i].length()) == str[i]) {
                answer = answer * 10 + i;
                numbers = numbers.substr(str[i].length());
            }
        }
    }
    return answer;
}

