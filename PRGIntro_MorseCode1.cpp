#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

string solution(string letter) {
    string answer = "";
    map <string, string> morse = { {".-","a"},{"-...","b"},{"-.-.","c"},                 {"-..","d"},{".","e"},{"..-.","f"},
    {"--.","g"},{"....","h"},{"..","i"},{".---","j"},{"-.-","k"},{".-..","l"},
    {"--","m"},{"-.","n"},{"---","o"},{".--.","p"},{"--.-","q"},{".-.","r"},
    {"...","s"},{"-","t"},{"..-","u"},{"...-","v"},{".--","w"},{"-..-","x"},
    {"-.--","y"},{"--..","z"}};
    stringstream sstream;
    sstream.str(letter);
    string one_morse;
    while(sstream >> one_morse) {
        answer += morse.find(one_morse)->second;
    }
    return answer;
}
