#include <stdio.h>

#define MAX_SIZE 100

float sum1(float list[], int);
float sum2(float *list, int);
float sum3(int n, float *list);

float input[MAX_SIZE], answer;
int i;
void main(void){
    printf("[----- [이은총] [2022041043] -----]\n");

    for(i=0; i < MAX_SIZE; i++)
    input[i] = i;

    /* for checking call by reference */
    /* call by reference를 확인하기 위한 부분 */
    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);

    answer = sum1(input, MAX_SIZE);
    printf("The sum is: %f\n\n", answer);

    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);

    answer = sum2(input, MAX_SIZE);
    printf("The sum is: %f\n\n", answer);

    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);

    answer = sum3(MAX_SIZE, input);
    printf("The sum is: %f\n\n", answer);
}

/* call by reference(배열을 인자로 전달하는 방식)를 사용하는 sum1 함수 */
float sum1(float list[], int n){
    printf("list \t= %p\n", list);
    printf("&list \t= %p\n\n", &list);

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += list[i];
    return tempsum;
}

/* 포인터를 사용하여 call by reference(배열을 인자로 전달하는 방식)을 사용하는 sum2 함수 */
float sum2(float *list, int n){
    printf("list \t= %p\n", list);
    printf("&list \t= %p %p\n\n", &list);

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += *(list + i);
    return tempsum;
}

/* stack variable reuse test */
/* 지역 변수의 재사용을 테스트하는 sum3 함수 */
float sum3(int n, float *list){
    printf("list \t= %p\n", list);
    printf("&list \t= %p\n\n", &list);

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += *(list + i);
    return tempsum;
}