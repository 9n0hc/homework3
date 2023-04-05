#include <stdio.h>

void print_one(int *ptr, int rows); // �����Ϳ� �迭�� ũ�⸦ ���ڷ� �޾Ƽ� �����͸� �̿��Ͽ� 1���� �迭�� ����ϴ� �Լ� ����.

int main() { 
    printf("[----- [������] [2022041043] -----]\n");
    
    int one[] = {0, 1, 2, 3, 4}; // ũ�Ⱑ 5�� int�� �迭 one ���� �� �ʱ�ȭ.

    printf("one = %p\n", one); // �迭�� �̸�(one)�� ����Ű�� �޸� �ּ� ���.
    printf("&one = %p\n", &one); // �迭 ��ü�� �޸� �ּ� ���.
    printf("&one[0] = %p\n", &one[0]); // �迭�� ù ��° ����� �޸� �ּ� ���.
    printf("\n");

    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n"); // �迭�� ù ��° ����� �޸� �ּ� ���.
    printf("------------------------------------\n");
    print_one(&one[0], 5); // print_one �Լ� ȣ��. �迭�� ù ��° ����� �޸� �ּҿ� �迭�� ũ�⸦ ���ڷ� ����.

    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n"); // ���ڿ� ���.
    printf("------------------------------------\n");
    print_one(one, 5); // print_one �Լ� ȣ��. �迭�� �̸��� ũ�⸦ ���ڷ� ����.

    return 0;
}

void print_one(int *ptr, int rows) // �����Ϳ� �迭�� ũ�⸦ ���ڷ� �޾Ƽ� �����͸� �̿��Ͽ� 1���� �迭�� ����ϴ� �Լ�.
{/* print out a one-dimensional array using a pointer */

    int i; // int�� ���� i ����.
    printf ("Address \t Contents\n"); // ���ڿ� ���. ���� ��µ� ������ ���� �ش�.
    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); // 0���� rows �̸����� i�� ���� 1�� ������Ű�� for ����. �ݺ����� ���� : �迭�� �ּҿ� �ش� �ε����� �� ���.
    printf("\n");
}