#include <iostream>
using namespace std;

int main(void) {
    int T;
    cin >> T;
    int score[5] = {0, };
    long long student_number;
    for(int i = 0; i < T; i++)
        cin >> score[i];
    if(score[0] > score[2])
        student_number = (score[0] - score[2]) * 508;
    else
        student_number = (score[2] - score[0]) * 108;
    if(score[1] > score[3])
        student_number += (score[1] - score[3]) * 212;
    else
        student_number += (score[3] - score[1]) * 305;
    student_number += score[4] * 707;
    student_number *= 4763;
    cout << student_number;
}
