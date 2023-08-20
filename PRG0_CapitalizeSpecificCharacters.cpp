#include <string>
#include <vector>
#include <cstring>
#include <cctype>

using namespace std;

string solution(string my_string, string alp) {
    string answer = "";
    char temp[1];
    strcpy(temp, alp.c_str());
    for(int i = 0; i < my_string.length(); i++) {
        if(my_string[i] == temp[0])
            my_string[i] = toupper(my_string[i]);
    }
    return answer = my_string;
}
