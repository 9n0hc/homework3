#include <stdio.h>

// 구조체 student1 정의.
struct student1 {
    char lastName; // char형 변수 lastName 선언.
    int studentId; // int형 변수 studentId 선언.
    char grade; // char형 변수 grade 선언.
};

// 구조체 student2를 typedef를 사용하여 정의.
typedef struct {
    char lastName; // char형 변수 lastName 선언.
    int studentId; // int형 변수 studentId 선언.
    char grade; // char형 변수 grade 선언.
} student2;

int main() {
    printf("[----- [이은총] [2022041043] -----]\n");

    struct student1 st1 = {'A', 100, 'A'}; // student1 구조체 변수 st1 선언 및 초기화.

    // st1의 멤버 출력.
    printf("st1.lastName = %c\n", st1.lastName); 
    printf("st1.studentId = %d\n", st1.studentId); 
    printf("st1.grade = %c\n", st1.grade); 

    student2 st2 = {'B', 200, 'B'}; // student2 구조체 변수 st2 선언 및 초기화.

    // st2의 멤버 출력.
    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade); 

    student2 st3; // student2 구조체 변수 st3 선언.
    st3 = st2; // student2 구조체 변수 st3를 student2 구조체 변수 st2로 초기화.

    // st3의 멤버 출력.
    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);

    // st2와 st3가 동일한지 비교한 뒤 결과 출력
    if(st3.lastName == st2.lastName && st3.studentId == st2.studentId && st3.grade == st2.grade)
        printf("equal\n");
    else
        printf("not equal\n");

return 0;
}