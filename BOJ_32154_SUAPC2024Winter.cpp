#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main(void) {
    vector<list<string>> rank = {
    {"11\n", "A ", "B ", "C ", "D ", "E ", "F ", "G ", "H ", "J ", "L ", "M "},
    {"9\n", "A ", "C ", "E ", "F ", "G ", "H ", "I ", "L ", "M "},
    {"9\n", "A ", "C ", "E ", "F ", "G ", "H ", "I ", "L ", "M "},
    {"9\n", "A ", "B ", "C ", "E ", "F ", "G ", "H ", "L ", "M "},
    {"8\n", "A ", "C ", "E ", "F ", "G ", "H ", "L ", "M "},
    {"8\n", "A ", "C ", "E ", "F ", "G ", "H ", "L ", "M "},
    {"8\n", "A ", "C ", "E ", "F ", "G ", "H ", "L ", "M "},
    {"8\n", "A ", "C ", "E ", "F ", "G ", "H ", "L ", "M "},
    {"8\n", "A ", "C ", "E ", "F ", "G ", "H ", "L ", "M "},
    {"8\n", "A ", "B ", "C ", "F ", "G ", "H ", "L ", "M "},
    };

    int N;
    cin >> N;
    N -= 1;

    for (const string& problem: rank[N]) {
        cout << problem;
    }
}
