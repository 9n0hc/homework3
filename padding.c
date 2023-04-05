#include <stdio.h>

// student 구조체 정의.
struct student {
    char lastName[13]; /* 13 bytes */ // 크기가 13인 char형 배열 lastName 선언.
    int studentId; /* 4 bytes */ // int형 변수 studentId 선언.
    short grade; /* 2 bytes */ // short형 변수 grade 선언.
};

int main(){
    printf("[----- [이은총] [2022041043] -----]\n");

    struct student pst; // student 구조체 변수 pst 선언.

    printf("size of student = %ld\n", sizeof(struct student)); // 구조체 student의 크기 출력.
    printf("size of int = %ld\n", sizeof(int)); // int 변수 타입의 크기 출력.
    printf("size of short = %ld\n", sizeof(short)); // short 변수 타입의 크기 출력.

    return 0;
}