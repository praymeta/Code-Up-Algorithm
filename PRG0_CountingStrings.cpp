#include <string>
#include <vector>

using namespace std;

int cal(int a, int b, char operation) {
    if(operation == '+') return a + b;
    else return a - b;
}

int solution(string my_string) {
    int answer = 0, a;
    string temp = "";
    vector<int> number(0);
    vector<char> number_stack(0);
    vector<char> operation_stack(0);
    for(int i = 0; i < my_string.length(); i++) {
        if('0' <= my_string[i] && my_string[i] <= '9') {
            number_stack.push_back(my_string[i]);
        } else if(my_string[i] == ' ') {
            if(number_stack.size() != 0) {
                while(number_stack.size() != 0) {
                    temp += number_stack.front();
                    number_stack.erase(number_stack.begin());
                }
                a = stoi(temp);
                temp = "";
                number.push_back(a);
            }
        } else {
            operation_stack.push_back(my_string[i]);
        }
    }
    while(number_stack.size() != 0) {
        temp += number_stack.front();
        number_stack.erase(number_stack.begin());
    }
    a = stoi(temp);
    temp = "";
    number.push_back(a);
    answer = number[0];
    for(int i = 1; i < number.size(); i++) {
        answer = cal(answer, number[i], operation_stack[i - 1]);
    }
    return answer;
}
