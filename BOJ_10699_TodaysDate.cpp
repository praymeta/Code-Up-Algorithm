#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
using namespace std;

int main(void) {
    struct tm curr_tm;
    time_t curr_time = time(nullptr);

    localtime_r(&curr_time, &curr_tm);

    int curr_year = curr_tm.tm_year + 1900;
    int curr_month = curr_tm.tm_mon + 1;
    int curr_day = curr_tm.tm_mday;

    printf("%d-%02d-%02d\n", curr_year, curr_month, curr_day);    
    return 0;
}
