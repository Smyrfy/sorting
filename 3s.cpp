#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void bubble_sort_range(vector<T>& v, int left, int right) {
    for (int i = left; i < right; i++) {
        for (int j = left; j < right - (i - left); j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> v = {9, 5, 3, 8, 4, 2, 7};

    bubble_sort_range(v, 2, 5);

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
