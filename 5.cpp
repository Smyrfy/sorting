#include <iostream>
#include <vector>

template<typename T>
void insert_sorted(std::vector<T>& v, T value) {
    v.push_back(value);
    int i = v.size() - 2;
    while (i >= 0 && v[i] > value) {
        v[i + 1] = v[i];
        --i;
    }
    v[i + 1] = value;
}

int main() {
    std::vector<int> v = {2, 4, 6, 8};
    int value = 5;

    insert_sorted(v, value);

    std::cout << "Результат вставки 5: ";
    for (int n : v) std::cout << n << " ";
    std::cout << std::endl;

    return 0;
}
