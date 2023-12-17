#include <stdio.h>
#include <time.h>

int square(int a) {
    return a * a;
}

int add(int a, int b) {
    return a + b;
}

int calculate(int a, int b) {
    int e = square(a);
    int f = add(b, b);
    return e + f;
}

int main() {
    clock_t start, end;
    double cpu_time_used;
    
    start = clock();
    
    int a = 3;
    int b = 4;
    int result = calculate(a, b);
    
    printf("Result: %d\n", result);
    
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    
    printf("Time taken: %f\n", cpu_time_used);
    
    return 0;
}
