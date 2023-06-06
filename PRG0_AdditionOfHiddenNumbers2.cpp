#include <string>
#include <vector>

using namespace std;

int StringToInt(vector<char> number_stack) {
    string temp = "";
    for(int i = 0; i < number_stack.size(); i++) {
        temp += number_stack[i];
    }
    return stoi(temp);
}

int solution(string my_string) {
    int answer = 0;
    vector<char> number_stack;
    for(int i = 0; i < my_string.length(); i++) {
        if('0' <= my_string[i] && my_string[i] <= '9')
            number_stack.push_back(my_string[i]);
        else
            if(number_stack.size() != 0) {
                answer += StringToInt(number_stack);
                number_stack.clear();
            }
    }
    if(number_stack.size() != 0)
        answer += StringToInt(number_stack);
    return answer;
}
