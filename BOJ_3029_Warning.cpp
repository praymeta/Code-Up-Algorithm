#include <iostream>
using namespace std;

int main(void) {
    int firstHour, firstMinute, firstSecond, secondHour, secondMinute, secondSecond, resultHour, resultMinute, resultSecond;
    string first, second;
    getline(cin, first);
    getline(cin, second);
    if(first == second) {
        cout << "24:00:00";
        return 0;
    }
    firstHour = ((first[0] - '0') * 10) + (first[1] - '0');
    firstMinute = ((first[3] - '0') * 10) + (first[4] - '0');
    firstSecond = ((first[6] - '0') * 10) + (first[7] - '0');
    secondHour = ((second[0] - '0') * 10) + (second[1] - '0');
    secondMinute = ((second[3] - '0') * 10) + (second[4] - '0');
    secondSecond = ((second[6] - '0') * 10) + (second[7] - '0');
    if(secondSecond >= firstSecond) {
        resultSecond = secondSecond - firstSecond;
    } else {
        secondMinute--;
        resultSecond = secondSecond + 60 - firstSecond;
    }
    if(secondMinute >= firstMinute) {
        resultMinute = secondMinute - firstMinute;
    } else {
        secondHour--;
        resultMinute = secondMinute + 60 - firstMinute;
    }
    if(secondHour >= firstHour) {
        resultHour = secondHour - firstHour;
    } else {
        resultHour = secondHour + 24 - firstHour;
    }
    printf("%02d:%02d:%02d", resultHour, resultMinute, resultSecond);
}
