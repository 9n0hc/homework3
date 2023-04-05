#include <stdio.h>
#include <stdlib.h>

void main(){
    printf("[----- [이은총] [2022041043] -----]\n");

    int list[5]; // 크기가 5인 int형 배열 list 선언.
    int *plist[5]; // 크기가 5인 int형 포인터 배열 plist 선언.

    list[0] = 10; // list[0]에 10 대입.
    list[1] = 11; // list[1]에 11 대입.

    plist[0] = (int*)malloc(sizeof(int)); // plist[0]에 int 크기의 메모리 블록 할당 및 그 주소를 대입.

    printf("list[0] \t= %d\n", list[0]); // list[0]의 값 출력.
    printf("list \t\t= %p\n", list); // list의 시작 주소 값 출력.
    printf("&list[0] \t= %p\n", &list[0]); // list[0]의 주소 값 출력.
    printf("list + 0 \t= %p\n", list+0); // list+0의 주소 값(시작 주소) 출력. list+0, list, list[0]은 같은 값을 가짐.
    printf("list + 1 \t= %p\n", list+1); // list+1의 주소 값(두 번째 요소의 주소) 출력. list+1은 list 주소에서 4 바이트만큼 더한 주소가 됨.
    printf("list + 2 \t= %p\n", list+2); // list+2의 주소 값 출력.
    printf("list + 3 \t= %p\n", list+3); // list+3의 주소 값 출력.
    printf("list + 4 \t= %p\n", list+4); // list+4의 주소 값 출력.
    printf("&list[4] \t= %p\n", &list[4]); // list[4]의 주소 값 출력. &list[4], list+4는 같은 값을 가짐.

    free(plist[0]); // plist[0]이 가리키는 메모리 블록 해제.
}