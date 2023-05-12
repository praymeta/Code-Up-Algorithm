#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string my_string) {
    string answer = "";
    vector<string> v;
    int flag = 0;
    
    for(int i = 0; i < my_string.length(); i++) {
        string temp = my_string.substr(i, 1);
        flag = 0;
        for(int j = 0; j < v.size(); j++) {
            if(v[j] == temp) {
                flag = 1;
            }
        }
        if(flag == 0) {
            answer += temp;
            v.push_back(temp);
        }
    }
    return answer;
}
