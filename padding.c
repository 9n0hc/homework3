#include <stdio.h>

// student ����ü ����.
struct student {
    char lastName[13]; /* 13 bytes */ // ũ�Ⱑ 13�� char�� �迭 lastName ����.
    int studentId; /* 4 bytes */ // int�� ���� studentId ����.
    short grade; /* 2 bytes */ // short�� ���� grade ����.
};

int main(){
    printf("[----- [������] [2022041043] -----]\n");

    struct student pst; // student ����ü ���� pst ����.

    printf("size of student = %ld\n", sizeof(struct student)); // ����ü student�� ũ�� ���.
    printf("size of int = %ld\n", sizeof(int)); // int ���� Ÿ���� ũ�� ���.
    printf("size of short = %ld\n", sizeof(short)); // short ���� Ÿ���� ũ�� ���.

    return 0;
}