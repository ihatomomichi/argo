#include<stdio.h>

void visit(int q[],int i){
    int n=8;
    for(int j=0;j<=7;j++){
        printf("%d",q[j]);
    }
    printf("\n");
    if(i<n){
        q[i]=0;
        i=i+1;
        visit(q,i);
    }
}
int main(){
    int q[8]={-1,-1,-1,-1,-1,-1,-1,-1};
    visit(q,0);
    return 0;
}