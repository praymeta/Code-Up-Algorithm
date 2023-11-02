#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    int N, M, B;
    int min_height = 256, max_height = 0;
    int min_time = 100000000;
    int block_height = 0;
    int ground[502][502];
    cin >> N >> M >> B;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> ground[i][j];
            min_height = min(min_height, ground[i][j]);
            max_height = max(max_height, ground[i][j]);
        }
    }
    for(int h = min_height; h <= max_height; h++) {
        int tmp = 0;
        int h_cur_diff = 0;
        int inventory = B;

        for(int i = 0; i < N; i++) {
            for(int j = 0; j < M; j++) {
                h_cur_diff = abs(ground[i][j] - h);
                if(ground[i][j] < h) {
                    tmp += h_cur_diff;
                    inventory -= h_cur_diff;
                } else if(ground[i][j] > h) {
                    tmp += (2 * h_cur_diff);
                    inventory += h_cur_diff;
                }
            }
        }
        if(inventory >= 0) {
            min_time = min(min_time, tmp);
            if(tmp == min_time)
                block_height = max(block_height, h);
        }
    }
    cout << min_time << ' ' << block_height;
}
