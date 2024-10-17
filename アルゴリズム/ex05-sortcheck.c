#include<stdio.h>

int main(){
    int n=0,i;
    int a[10000];
    while(scanf("%d",&a[n])!=EOF){
        n++;
    }
    for(i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            printf("Sorted data NOT in ascending order!!\n");
            return 0;
        }
        else{
            printf("Sorted data in ascending order\n");
        }
    }
    return 0;
}