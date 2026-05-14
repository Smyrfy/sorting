#include <iostream>
#include <vector>

template<typename T>
int binary_search_pos(const std::vector<T>& v, T item, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (item == v[mid])
            return mid + 1;
        if (item > v[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}

template<typename T>
void binary_insertion_sort(std::vector<T>& v) {
    int n = v.size();
    for (int i = 1; i < n; ++i) {
        T key = v[i];
        int j = i - 1;
        int pos = binary_search_pos(v, key, 0, j);
        while (j >= pos) {
            v[j + 1] = v[j];
            --j;
        }
        v[pos] = key;
    }
}

int main() {
    std::vector<int> v = {37, 23, 0, 17, 12, 72, 31};

    binary_insertion_sort(v);

    std::cout << "Результат Binary Insertion Sort: ";
    for (int n : v) std::cout << n << " ";
    std::cout << std::endl;

    return 0;
}
