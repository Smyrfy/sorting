#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
int partition(std::vector<T>& v, int low, int high) {
    T pivot = v[high];
    int i = low;
    for (int j = low; j < high; j++) {
        if (v[j] <= pivot) {
            std::swap(v[i], v[j]);
            i++;
        }
    }
    std::swap(v[i], v[high]);
    return i;
}

template<typename T>
T quick_select(std::vector<T>& v, int low, int high, int k) {
    if (low <= high) {
        int pi = partition(v, low, high);

        if (pi == k) return v[pi];
        if (k < pi) return quick_select(v, low, pi - 1, k);
        return quick_select(v, pi + 1, high, k); 
    }
    return -1; 
}

int main() {
    std::vector<int> v = {5, 3, 8, 4, 2};
    int k = 2;
    int result = quick_select(v, 0, v.size() - 1, k);
    
    std::cout << "The element at index " << k << " is: " << result << std::endl;
    return 0;
}
