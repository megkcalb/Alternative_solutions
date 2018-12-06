#include <stdio.h>

int main()
{
    int i,j,n,k=0;
    printf("enter the n : ");
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        for(j=1;j<=i;++j){
            printf("%d",k+j);
        }
        k++;
        printf("\n");
    }
    return 0;
}
