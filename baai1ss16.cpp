#include <stdio.h>

int main() {
    int a=100;
    int *aptr=&a;
    printf("giá tri cua a là : %d\n",a);
    printf("dia chi cua a là : %lu\n",&a);
    printf("giá tri cua a là : %lu\n",*aptr);
    printf("dia chi cua a là : %lu\n",aptr);
    return 0;
}
