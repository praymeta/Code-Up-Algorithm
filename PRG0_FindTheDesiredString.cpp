#include <string>
#include <vector>
#include <cctype>

using namespace std;

string makeToLower(string str) {
    for(int i = 0; i < str.length(); i++)
        str[i] = tolower(str[i]);
    return str;
}

int solution(string myString, string pat) {
    int answer = 0;
    myString = makeToLower(myString);
    pat = makeToLower(pat);
    if(myString.find(pat) != string::npos)
        answer = 1;
    else answer = 0;
    return answer;
}
