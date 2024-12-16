#include <stdio.h>
void search(int *arr,int number,int length){
    for(int i=0;i<length;i++){
        if(arr[i]==number){
            printf("vi trí cua phan tu %d là %d : ", number , i);
        }
    }
}
int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int length =sizeof(arr)/sizeof(int);
    int *arrptr = arr;
    search(arr, 9, length);
    
    return 0;
}#include <stdio.h>
void sort(int *arr,int length){
    for(int i=0;i<length;i++){
        for(int j = 0;j<length-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                
            }
        }
    }
}
int main(int argc, const char * argv[]) {
    int arr[]={5,7,2,4,9,1};
    int length =sizeof(arr)/sizeof(int);
    sort(arr, length);
    for(int j = 0;j<length;j++){
        printf("%d",arr[j]);
    }
    return 0;
}
