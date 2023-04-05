#include <stdio.h>
#include <stdlib.h>

void main(){
    printf("[----- [이은총] [2022041043] -----]\n");
    
    int **x; // 이중 포인터 x 선언.

    printf("sizeof(x) = %lu\n", sizeof(x)); // x의 크기 출력.
    printf("sizeof(*x) = %lu\n", sizeof(*x)); // *x의 크기 출력.
    printf("sizeof(**x) = %lu\n", sizeof(**x)); // **x의 크기 출력.
}