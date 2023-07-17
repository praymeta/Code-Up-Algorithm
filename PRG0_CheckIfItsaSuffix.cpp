#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    answer = equal(is_suffix.rbegin(), is_suffix.rend(), my_string.rbegin());
    return answer;
}
