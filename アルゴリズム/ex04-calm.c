#include<stdio.h>
#include<math.h>

int CalM(int n,double a){
    int m;
    m=ceil(n*a);
    while(1){
        int k=0;
        for(int i=2;i<m;i++){
            if(m % i==0){
                k++;
            }
        }
        if(k==0){
            return m;
            break;
        }
        m++;
    }
}

int main(){
    int n;
    double a;
    scanf("%d",&n);
    scanf("%lf",&a);
    printf("%d\n",CalM(n,a));
    return 0;
}