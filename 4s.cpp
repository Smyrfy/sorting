#include <iostream>
#include <vector>

template<typename T>
bool is_sorted(const std::vector<T>& v) {
    if (v.empty()) return true;
    for (size_t i = 1; i < v.size(); ++i) {
        if (v[i] < v[i - 1]) return false;
    }
    return true;
}

int main() {
    std::vector<int> v1 = {1, 2, 3, 5};
    std::vector<int> v2 = {1, 3, 2};

    std::cout << std::boolalpha;
    std::cout << "Вектор {1, 2, 3, 5} відсортований: " << is_sorted(v1) << std::endl;
    std::cout << "Вектор {1, 3, 2} відсортований: " << is_sorted(v2) << std::endl;

    return 0;
}
