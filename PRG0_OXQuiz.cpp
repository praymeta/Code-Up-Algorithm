#include <string>
#include <vector>

using namespace std;

int StringToInt(vector<char> number_stack) {
    string temp = "";
    for(int i = 0; i < number_stack.size(); i++) {
        temp += number_stack[i];
    }
    number_stack.clear();
    int a = stoi(temp);
    return a;
}

int WhereEqualSign(string quiz) {
    int equalIndex;
    for(int i = 0; i < quiz.length(); i++) {
        if(quiz[i] == '=') equalIndex = i;
    }
    return equalIndex;
}

int OperationCalc(int a, int b, char operation) {
    if(operation == '+') return a + b;
    else return a - b;
}

char StringDecomposition(string quiz) {
    vector<char> number_stack;
    char operation;
    int equalIndex, left, right, a = 0, b = 0;
    equalIndex = WhereEqualSign(quiz);
    for(int i = 0; i < equalIndex; i++) {
        if('0' <= quiz[i] && quiz[i] <= '9') 
            number_stack.push_back(quiz[i]);
        else if(quiz[i] == ' ') {
            if(number_stack.size() != 0) {
                if(a == 0) {
                    a = StringToInt(number_stack);
                    number_stack.clear();
                }
                else {
                    b = StringToInt(number_stack);
                    number_stack.clear();
                }
            }
        } else {
            if('0' <= quiz[i + 1] && quiz[i + 1] <= '9')
                number_stack.push_back(quiz[i]);
            else operation = quiz[i];
        }
    }
    left = OperationCalc(a, b, operation);
    for(int i = equalIndex; i < quiz.length(); i++) {
        if(quiz[i] == '-')
            number_stack.push_back(quiz[i]);
        if('0' <= quiz[i] && quiz[i] <= '9')
            number_stack.push_back(quiz[i]);
    }
    right = StringToInt(number_stack);
    number_stack.clear();
    if(left == right) return 'O';
    else return 'X';
}

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    string temp = "";
    for(int i = 0; i < quiz.size(); i++) {
        temp = StringDecomposition(quiz[i]);
        answer.push_back(temp);
    }
    return answer;
}
