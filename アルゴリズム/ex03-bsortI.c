#include<stdio.h>

int z=0;
int w=0;
void BSortI(int n,int a[]){
    int i,j,b,y;
    for(i=0;i<n-1;i++){
        y=0;
        for(j=0;j<n-1-i;j++){
            z++;
            if(a[j]>a[j+1]){
                b=a[j];
                a[j]=a[j+1];
                a[j+1]=b;
                w++;
                y++;
            }
        }
        if(y==0){
                break;
            }
    }
}
int main(void){
    int n=0,a[99999],i;
    //scanf("%d",&n);
    //for(i=0;i<n;i++){
        //scanf("%d",&a[i]);
    //}
    while(scanf("%d",&a[n])!=EOF){
        n++;
    }
    BSortI(n,a);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("比較回数%d\n",z);
    printf("交換回数%d\n",w);
    return 0;
}