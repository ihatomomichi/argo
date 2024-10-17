#include<stdio.h>

int main(void){
    int i,j,k,V,n;
    int a[4],v1[2],v2[4];
    int s1=1,s2=1;
    int sign[]={-1,1};
    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&V);
    for(i=0;i<2;i++){
        v1[i]=a[0]+a[1]*sign[i];
    }
    n=0;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            v2[n]=a[2]*sign[i]+a[3]*sign[j];
            n++;
        }
    }
    k=0;
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            if(v1[i]+v2[j]>=V){
                k++;
            }
        }
    }
    printf("%d",k);
    return 0;
}