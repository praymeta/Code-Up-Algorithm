#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
    vector<int> answer, temp(num2 - num1 + 1);
    copy(numbers.begin() + num1, numbers.begin() + num2 + 1, temp.begin()); // copy 함수 사용
    // for(int i = 0; i <= num2 - num1 + 1; i++) {  반복문 사용
    //     answer[i] = numbers[i + num1];
    // }
    return temp;
}
