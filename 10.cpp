#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
int partition(std::vector<T>& v, int low, int high) {
    T pivot = v[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (v[j] <= pivot) {
            i++;
            std::swap(v[i], v[j]);
        }
    }
    std::swap(v[i + 1], v[high]);
    return i + 1;
}

template<typename T>
void quick_sort_recursive(std::vector<T>& v, int low, int high, int& count) {
    count++;
    if (low < high) {
        int pi = partition(v, low, high);
        quick_sort_recursive(v, low, pi - 1, count);
        quick_sort_recursive(v, pi + 1, high, count);
    }
}

template<typename T>
int quick_sort_count(std::vector<T>& v) {
    int count = 0;
    if (!v.empty()) {
        quick_sort_recursive(v, 0, v.size() - 1, count);
    }
    return count;
}

int main() {
    std::vector<int> v = {10, 7, 8, 9, 1, 5};
    int total_calls = quick_sort_count(v);
    std::cout << "Total recursive calls: " << total_calls << std::endl;
    return 0;
}
