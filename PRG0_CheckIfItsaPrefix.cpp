#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    answer = equal(is_prefix.begin(), is_prefix.end(), my_string.begin());
    return answer;
}
