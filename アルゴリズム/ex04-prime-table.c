#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        int k=0;
        for(int j=i-1;j>1;j--){
            if(i%j==0){
                k++;
            }
        }
        if(k==0){
            printf("%d\n",i);
        }
    }
    return 0;
}