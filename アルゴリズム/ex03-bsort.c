#include<stdio.h>

int z=0;
int w=0;
void BSort(int n,int a[]){
    int i,j,b;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            z++;
            if(a[j]>a[j+1]){
                b=a[j];
                a[j]=a[j+1];
                a[j+1]=b;
                w++;
            }
        }
    }
}
int main(){
    int n,a[9999],i;
    //scanf("%d",&n);
    //for(i=0;i<n;i++){
        //scanf("%d",&a[i]);
    //}
    while(scanf("%d",&a[n])!=EOF){
        n++;
    }
    BSort(n,a);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("%d\n",z);
    printf("%d\n",w);
    return 0;
}