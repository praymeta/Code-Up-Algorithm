#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    int answer = 0, a, b, i;
    string temp = "";
    char operation;
    for(i = 0; i < binomial.length(); i++) {
        if(binomial[i] == ' ')
            break;
        temp += binomial[i];
    }
    a = stoi(temp);
    operation = binomial[i + 1];
    temp = "";
    for(i = i + 3; i < binomial.length(); i++) {
        temp += binomial[i];
    }
    b = stoi(temp);
    if(operation == '+')
        answer = a + b;
    else if(operation == '-')
        answer = a - b;
    else if(operation == '*')
        answer = a * b;
    return answer;
}
