#include<stdio.h>
#define max 100
int main(){

     float avg;
     int i,count=0,arr[max],tot=0,limit;
     printf("finding avg for even numbers within the given limit :\n");
     scanf("%d",&limit);
     for(i=2;i<limit;++i){
        if(i%2==0){
            printf("%d\n",i);
            count++;
            arr[count] = i;
            tot +=arr[count];
        }
     }

        printf("\navg == \t%d\n",tot/count);

        return 0;

}
