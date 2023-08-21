#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    istringstream ss1(my_string);
    string buffer;
    while(getline(ss1, buffer, ' ')) {
        answer.push_back(buffer);
    }
    return answer;
}
