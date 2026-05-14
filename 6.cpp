#include <iostream>
#include <vector>

template<typename T>
void insertion_sort_desc(std::vector<T>& v) {
    int n = v.size();
    for (int i = 1; i < n; ++i) {
        T key = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] < key) {
            v[j + 1] = v[j];
            --j;
        }
        v[j + 1] = key;
    }
}

int main() {
    std::vector<int> v = {3, 1, 4, 1, 5, 9, 2};

    insertion_sort_desc(v);

    std::cout << "Сортування за спаданням: ";
    for (int n : v) std::cout << n << " ";
    std::cout << std::endl;

    return 0;
}
