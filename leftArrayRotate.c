#include<stdio.h>

int rotateArray(int,int[]);

int main(){
    int arr[]={4,5,6,7,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    rotateArray(len,arr);
    
    return 0;
}
int rotateArray(int len,int arr[]){
    int temp,i=0;
    temp = arr[0];
    printf("length : %d\n",len);
    
    for(i=0;i<len-1;++i){
        arr[i] = arr[i+1];
    }
    arr[len-1] = temp;
    
    for(i=0;i<len;++i){
        printf("%d\t",arr[i]);
    }
    
    return 0;
}
