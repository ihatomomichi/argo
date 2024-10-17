#include<stdio.h>
#include<math.h>

int N,P,CNT_ALL=0,CNT=0;

int check(int q[]){
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(q[i]==q[j]){
                return 0;
            }
            if(fabs(q[i]-q[j])==fabs(i-j)){
                return 0;
            }
        }
    }
    return 1;
}
void visit(int q[],int i){
    if(i==N){
        CNT_ALL++;
        if(check(q)){
            for(int k=0;k<N;k++){
                printf("%d",q[k]);
            }
            printf("\n");
            CNT++;
        }
        return;
    }
    for(int p=0;p<P;p++){
        q[i]=p;
        visit(q,i+1);
    }
}
int main(){
    scanf("%d%d",&N,&P);
    int q[N];
    visit(q,0);
    printf("CNT_ALL:%d CNT:%d\n",CNT_ALL,CNT);
    return 0;
}