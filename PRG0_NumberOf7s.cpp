#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    string temp = "";
    for(int i = 0; i < array.size(); i++) {
        temp = to_string(array[i]);
        for(int j = 0; j < temp.length(); j++) {
            if(temp[j] == '7') answer++;
        }
    }
    return answer;
}
