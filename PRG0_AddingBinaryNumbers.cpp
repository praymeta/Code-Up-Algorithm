#include <string>
#include <vector>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    int i = bin1.length() - 1;
    int j = bin2.length() - 1;
    int k = 0, l = 0, s[100];
    while(k > 0 || i >= 0 || j >= 0) {
        if(i >= 0) k += bin1[i] - '0';
        if(j >= 0) k += bin2[j] - '0';
        s[l++] = k % 2;
        k /= 2;
        i--;
        j--;
    }
    for(l; l > 0; l--) answer += s[l - 1] + '0';
    return answer;
}
