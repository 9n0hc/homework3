#include <stdio.h>

// ����ü student1 ����.
struct student1 {
    char lastName; // char�� ���� lastName ����.
    int studentId; // int�� ���� studentId ����.
    char grade; // char�� ���� grade ����.
};

// ����ü student2�� typedef�� ����Ͽ� ����.
typedef struct {
    char lastName; // char�� ���� lastName ����.
    int studentId; // int�� ���� studentId ����.
    char grade; // char�� ���� grade ����.
} student2;

int main() {
    printf("[----- [������] [2022041043] -----]\n");

    struct student1 st1 = {'A', 100, 'A'}; // student1 ����ü ���� st1 ���� �� �ʱ�ȭ.

    // st1�� ��� ���.
    printf("st1.lastName = %c\n", st1.lastName); 
    printf("st1.studentId = %d\n", st1.studentId); 
    printf("st1.grade = %c\n", st1.grade); 

    student2 st2 = {'B', 200, 'B'}; // student2 ����ü ���� st2 ���� �� �ʱ�ȭ.

    // st2�� ��� ���.
    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade); 

    student2 st3; // student2 ����ü ���� st3 ����.
    st3 = st2; // student2 ����ü ���� st3�� student2 ����ü ���� st2�� �ʱ�ȭ.

    // st3�� ��� ���.
    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);

    // st2�� st3�� �������� ���� �� ��� ���
    if(st3.lastName == st2.lastName && st3.studentId == st2.studentId && st3.grade == st2.grade)
        printf("equal\n");
    else
        printf("not equal\n");

return 0;
}