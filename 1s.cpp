#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void bubble_sort_desc(vector<T>& v) {
    int n = v.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] < v[j + 1]) {
                swap(v[j], v[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> v = {5, 3, 8, 4, 2};

    bubble_sort_desc(v);

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
