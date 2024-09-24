#include <chrono>
#include <iostream>

int sum_array(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return sum;
}

void measure(int nb_elements){
    std::cout << "Number of elements : " << nb_elements<< std::endl;

    auto init_start_time_point = std::chrono::high_resolution_clock::now();

    int even_integers[nb_elements];
    even_integers[0] = 2;

    for (int i = 1; i < nb_elements; ++i) {
        even_integers[i] = even_integers[i-1] + 2;
    }

    auto init_end_time_point = std::chrono::high_resolution_clock::now();

    std::cout << "Initialization time: " << (init_end_time_point-init_start_time_point).count() << std::endl;

    init_start_time_point = std::chrono::high_resolution_clock::now();

    int sum = sum_array(even_integers, nb_elements);

    init_end_time_point = std::chrono::high_resolution_clock::now();

    std::cout << "Sum time : " << (init_end_time_point-init_start_time_point).count() << std::endl;
    std::cout << "Result : " << sum << std::endl;
    std::cout << "---------------------------" << std::endl;
}

int main() {
    measure(1000);
    measure(10000);
    measure(100000);
    return 0;
}
