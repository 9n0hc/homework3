#include <stdio.h>

void print_one(int *ptr, int rows); // 포인터와 배열의 크기를 인자로 받아서 포인터를 이용하여 1차원 배열을 출력하는 함수 선언.

int main() { 
    printf("[----- [이은총] [2022041043] -----]\n");
    
    int one[] = {0, 1, 2, 3, 4}; // 크기가 5인 int형 배열 one 선언 및 초기화.

    printf("one = %p\n", one); // 배열의 이름(one)이 가리키는 메모리 주소 출력.
    printf("&one = %p\n", &one); // 배열 전체의 메모리 주소 출력.
    printf("&one[0] = %p\n", &one[0]); // 배열의 첫 번째 요소의 메모리 주소 출력.
    printf("\n");

    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n"); // 배열의 첫 번째 요소의 메모리 주소 출력.
    printf("------------------------------------\n");
    print_one(&one[0], 5); // print_one 함수 호출. 배열의 첫 번째 요소의 메모리 주소와 배열의 크기를 인자로 전달.

    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n"); // 문자열 출력.
    printf("------------------------------------\n");
    print_one(one, 5); // print_one 함수 호출. 배열의 이름과 크기를 인자로 전달.

    return 0;
}

void print_one(int *ptr, int rows) // 포인터와 배열의 크기를 인자로 받아서 포인터를 이용하여 1차원 배열을 출력하는 함수.
{/* print out a one-dimensional array using a pointer */

    int i; // int형 변수 i 선언.
    printf ("Address \t Contents\n"); // 문자열 출력. 이후 출력될 값들의 제목에 해당.
    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); // 0부터 rows 미만까지 i의 값을 1씩 증가시키는 for 루프. 반복문의 내용 : 배열의 주소와 해당 인덱스의 값 출력.
    printf("\n");
}