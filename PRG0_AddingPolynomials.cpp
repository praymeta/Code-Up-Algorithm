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

string solution(string polynomial) {
    string answer = "", sTemp = "";
    int coef = 0, constant = 0;
    vector<char> number_stack;
    for(int i = 0; i < polynomial.length(); i++) {
        if('0' <= polynomial[i] && polynomial[i] <= '9') {
            number_stack.push_back(polynomial[i]);
        } else if(polynomial[i] == 'x') {
            if(number_stack.size() != 0) {
                coef += StringToInt(number_stack);
                number_stack.clear();
            } else {
                coef++;
            }
        } else if(polynomial[i] == ' ') {
            if(number_stack.size() != 0) {
                constant += StringToInt(number_stack);
                number_stack.clear();
            }
        }
    }
    if(number_stack.size() != 0) 
        constant += StringToInt(number_stack);
    
    if(coef == 0) 
        answer = to_string(constant);
    else if(coef == 1) {
        if(constant == 0)
            answer = "x";
        else 
            answer = "x + " + to_string(constant);
    }
    else {
        if(constant == 0)
            answer = to_string(coef) + "x";
        else
            answer = to_string(coef) + "x + " + to_string(constant);
    }
    return answer;
}
