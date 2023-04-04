#include <stdio.h>
#include <stdlib.h>

void main(){

    printf("[----- [이은총] [2022041043] -----]\n");

    int list[5]; // int형 배열 list 선언.
    int *plist[5] = {NULL,}; // int형 포인터 배열 plist 선언 및 NULL로 초기화.

    plist[0] = (int *)malloc(sizeof(int)); // plist[0]에 int형 크기만큼 동적 메모리를 할당 받음.
    list[0] = 1; // list[0]에 1 대입.
    list[1] = 100; // list[1]에 100 대입.
    *plist[0] = 200; // *plist[0]에 200 대입.

    printf("list[0] = %d\n", list[0]); // list[0] 출력.
    printf("&list[0] = %p\n", &list[0]); // &list[0] 출력. 
    printf("list = %p\n", list); // list 출력. 
    printf("&list = %p\n", &list); // &list 출력. &list, list, &list[0]이 가리키는 메모리 주소는 같음.
    printf("----------------------------------------\n\n");

    printf("list[1] = %d\n", list[1]); // list[1] 출력.
    printf("&list[1] = %p\n", &list[1]); // &list[1] 출력.
    printf("*(list+1) = %d\n", *(list + 1)); // *(list+1) 출력.
    printf("list+1 = %p\n", list+1); // list+1 출력. list+1, &list[1]이 가리키는 메모리 주소는 같음.
    printf("----------------------------------------\n\n");

    printf("*plist[0] = %d\n", *plist[0]); // *plist[0] 출력.
    printf("&plist[0] = %p\n", &plist[0]); // &plist[0] 출력.
    printf("&plist = %p\n", &plist); // &plist 출력.
    printf("plist = %p\n", plist); // plist 출력. plist, &plist, &plist[0]이 가리키는 메모리 주소는 같음.
    printf("plist[0] = %p\n", plist[0]); // plist[0] 출력. 동적으로 할당한 메모리의 주소를 가리킴.
    printf("plist[1] = %p\n", plist[1]); // plist[1] 출력.
    printf("plist[2] = %p\n", plist[2]); // plist[2] 출력.
    printf("plist[3] = %p\n", plist[3]); // plist[3] 출력.
    printf("plist[4] = %p\n", plist[4]); // plist[4] 출력. plist[1]부터 plist[4]는 모두 NULL.

    free(plist[0]); // 동적으로 할당 받은 메모리 해제.
}