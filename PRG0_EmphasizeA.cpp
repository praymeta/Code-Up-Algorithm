#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(int i = 0; i < myString.length(); i++) {
        if(myString[i] == 'a' || myString[i] == 'A')
            myString[i] = toupper(myString[i]);
        else
            myString[i] = tolower(myString[i]);
    }
    return answer = myString;
}
