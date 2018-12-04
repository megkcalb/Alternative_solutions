#include<stdio.h>
int main(){
    int arr[10],i,j,n;
    printf("enter n : ");
    scanf("%d",&n);
    for(i=0;i<n;++i){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            if(arr[j]!=-1){
                if(arr[i]==arr[j]){
                    arr[j] = -1;
                    arr[i] = -1;
                }
            }
        }
    }
    for(i=0;i<n;++i)
        if(arr[i]!=-1)
           printf("%d",arr[i]);
    return 0;
}
