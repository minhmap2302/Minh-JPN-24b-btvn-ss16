#include <stdio.h>
int sum(int *a,int *b, int *result){
    *result = *a+*b;
    return result;
}
int main() {
    int a = 7;
    int b = 4;
    int result;
    sum(&a,&b,&result);
    printf("tung hai so l� : %d", result);
    return 0;
}
