#include <stdio.h>
#include <stdlib.h>

void main(){
    printf("[----- [������] [2022041043] -----]\n");

    int list[5]; // ũ�Ⱑ 5�� int�� �迭 list ����.
    int *plist[5]; // ũ�Ⱑ 5�� int�� ������ �迭 plist ����.

    list[0] = 10; // list[0]�� 10 ����.
    list[1] = 11; // list[1]�� 11 ����.

    plist[0] = (int*)malloc(sizeof(int)); // plist[0]�� int ũ���� �޸� ���� �Ҵ� �� �� �ּҸ� ����.

    printf("list[0] \t= %d\n", list[0]); // list[0]�� �� ���.
    printf("list \t\t= %p\n", list); // list�� ���� �ּ� �� ���.
    printf("&list[0] \t= %p\n", &list[0]); // list[0]�� �ּ� �� ���.
    printf("list + 0 \t= %p\n", list+0); // list+0�� �ּ� ��(���� �ּ�) ���. list+0, list, list[0]�� ���� ���� ����.
    printf("list + 1 \t= %p\n", list+1); // list+1�� �ּ� ��(�� ��° ����� �ּ�) ���. list+1�� list �ּҿ��� 4 ����Ʈ��ŭ ���� �ּҰ� ��.
    printf("list + 2 \t= %p\n", list+2); // list+2�� �ּ� �� ���.
    printf("list + 3 \t= %p\n", list+3); // list+3�� �ּ� �� ���.
    printf("list + 4 \t= %p\n", list+4); // list+4�� �ּ� �� ���.
    printf("&list[4] \t= %p\n", &list[4]); // list[4]�� �ּ� �� ���. &list[4], list+4�� ���� ���� ����.

    free(plist[0]); // plist[0]�� ����Ű�� �޸� ���� ����.
}