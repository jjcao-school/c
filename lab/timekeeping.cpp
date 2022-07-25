
#include <stdio.h>
#include <chrono>

int main () {
    double sum(0), add(1);
    auto begin = std::chrono::high_resolution_clock::now();
    
    int iterations = 1000*1000*100;
    for (int i=0; i<iterations; i++) {
        sum += add;
        add /= 2.0;
    }
    
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    printf("Result: %.20f\n", sum);
    printf("C++ Time measured: %.3f seconds.\n", elapsed.count() * 1e-9);
    
    return 0;
}