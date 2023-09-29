#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int num;
    cin >> num;
    string s_num = to_string(num);
    bool contain = false, divisible = false;
    for(int i = 0; i < s_num.length(); i++)
        if(s_num[i] == '7')
            contain = true;
    if(num % 7 == 0)
        divisible = true;
    if(contain && divisible)
        cout << 3;
    else if(contain && (!divisible))
        cout << 2;
    else if((!contain) && divisible)
        cout << 1;
    else
        cout << 0;
}
