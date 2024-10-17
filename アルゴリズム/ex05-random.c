#include<stdio.h>
#include<stdlib.h>

int main(){
    int seed,n;
    scanf("%d%d",&seed,&n);
    srand(seed);
    for(int m=0;m<n;m++){
        printf("%d ",0+rand()%n);
    }
    return 0;
}