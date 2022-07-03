#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

typedef struct {
    int hour, min, sec;
} time;


time string_to_integer(string strTime, time intTime) {
    time tempTime;
    int colon = strTime.find(':', 0);
    int colon2 = strTime.find(':', colon + 1);

    tempTime.hour = stoi(strTime.substr(0, colon));
    tempTime.min = stoi(strTime.substr(colon + 1, colon2 - colon - 1));
    tempTime.sec = stoi(strTime.substr(colon2 + 1));

    return tempTime;
}

time converter_to_make_second(time exTime) {
    exTime.sec = exTime.hour * 60 * 60 + exTime.min * 60 + exTime.sec;
    exTime.hour = exTime.min = 0;

    return  exTime;
}

time time_calculator(time start, time end) {
    time temp;
    start = converter_to_make_second(start);
    end = converter_to_make_second(end);
    if(end.sec < start.sec) {
        end.sec += 24 * 60 * 60;
    }
    temp.sec = end.sec - start.sec;

    return temp;
}

int main(void) {
    string start, end;
    getline(cin, start);
    getline(cin, end);
    start.erase(remove(start.begin(), start.end(), ' '), start.end());
    end.erase(remove(end.begin(), end.end(), ' '), end.end());
    time startTime, endTime, resultTime;
    startTime = string_to_integer(start, startTime);
    endTime = string_to_integer(end, endTime);
    resultTime = time_calculator(startTime, endTime);
    cout << resultTime.sec << endl;
    return 0;
}
