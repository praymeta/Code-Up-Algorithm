#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main(void) {
    double n, c, bedroom = 0, nonBalcony = 0, totalArea;
    cin >> n >> c;
    vector<double> area(n);
    vector<string> type(n);
    for(int i = 0; i < n; i++)
        cin >> area[i] >> type[i];
    for(int i = 0; i < n; i++) {
        if(type[i] == "bedroom")
            bedroom += area[i];
        if(type[i] != "balcony")
            nonBalcony += area[i];
    }
    totalArea = accumulate(area.begin(), area.end(), 0);
    cout << totalArea << '\n';
    cout << bedroom << '\n';
    cout.precision(6);
    cout << fixed << c * ((totalArea - nonBalcony) / 2 + nonBalcony) << '\n';
}
