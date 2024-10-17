#include<stdio.h>

int LSearch(int n,int a[],int x){
    int y=0;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            printf("%d\n",i+1);
            y++;
        }
    }
    if(y==0){
        printf("-1\n");
    }
}
int main(){
    int n,x;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    LSearch(n,a,x);
}