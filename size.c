#include <stdio.h>
#include <stdlib.h>

void main(){
    printf("[----- [������] [2022041043] -----]\n");
    
    int **x; // ���� ������ x ����.

    printf("sizeof(x) = %lu\n", sizeof(x)); // x�� ũ�� ���.
    printf("sizeof(*x) = %lu\n", sizeof(*x)); // *x�� ũ�� ���.
    printf("sizeof(**x) = %lu\n", sizeof(**x)); // **x�� ũ�� ���.
}