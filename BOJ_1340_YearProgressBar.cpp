#include <iostream>
using namespace std;

int main(void) {
    string month_str, time_str, day_str;
    string mon[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int year_int, mon_int, day_int[2] = {0, }, hour, min, total, cnt = 0;
    cin >> month_str >> day_str >> year_int >> time_str;
    int mon_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if((year_int % 400 == 0) || (year_int % 4 == 0 && year_int % 100 != 0)) {
        mon_day[1] = 29;
        total = 366 * 24 * 60;
    } else
        total = 365 * 24 * 60;
    int day_sum = 0;
    for(int i = 0; i < 12; i++) {
        if(month_str == mon[i]) {
            for(int j = 0; j < i; j++) {
                day_sum += mon_day[j];
            }
            break;
        }
    }
    for(int i = 0; i < day_str.length() - 1; i++) {
        day_int[i] = day_str[i] - '0';
        cnt++;
    }
    if(cnt == 1)
        day_sum += day_int[0];
    else if(cnt == 2)
        day_sum += day_int[0] * 10 + day_int[1];
    day_sum--;

    if(time_str[0] == '0')
        hour = time_str[1] - '0';
    else
        hour = (time_str[0] - '0') * 10 + (time_str[1] - '0');

    if(time_str[3] == '0')
        min = time_str[4] - '0';
    else
        min = (time_str[3] - '0') * 10 + (time_str[4] - '0');

    int min_sum = day_sum * 24 * 60 + hour * 60 + min;
    double ans = (double)min_sum / total * 100;
    cout.precision(9);
    cout << fixed << ans;
}
