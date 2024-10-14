#include <bits/stdc++.h>
using namespace std;

void countingSort(int array[], int N, int L, int R) {
    int frequency[(R - L) + 1] = {0};
    for (int i = 0; i < N; ++i) {
        frequency[array[i] - L] += 1;
    }
    for (int j = 1; j < (R - L) + 1; ++j) {
        frequency[j] += frequency[j - 1];
    }

    int temp[N];
    for (int k = N - 1; k >= 0; --k) {
        temp[frequency[array[k] - L] - 1] = array[k]; frequency[array[k] - L] -= 1;
    }

    for (int i = 0; i < N; ++i) {
        array[i] = temp[i];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    return 0;
}
