#include <stdio.h>

int main() {
    int a=100;
    int *aptr=&a;
    printf("gi� tri cua a l� : %d\n",a);
    printf("dia chi cua a l� : %lu\n",&a);
    printf("gi� tri cua a l� : %lu\n",*aptr);
    printf("dia chi cua a l� : %lu\n",aptr);
    return 0;
}
