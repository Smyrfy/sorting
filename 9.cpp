#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
int partition_first(std::vector<T>& v, int low, int high) {
    T pivot = v[low];
    int i = low + 1;
    
    for (int j = low + 1; j <= high; j++) {
        if (v[j] < pivot) {
            std::swap(v[i], v[j]);
            i++;
        }
    }
    std::swap(v[low], v[i - 1]);
    return i - 1;
}

int main() {
    std::vector<int> v = {5, 8, 2, 4, 9, 1};
    int p_index = partition_first(v, 0, v.size() - 1);
    
    std::cout << "Pivot index: " << p_index << "\nArray: ";
    for (int x : v) std::cout << x << " ";
    return 0;
}
