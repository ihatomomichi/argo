#include<stdio.h>

int z=0,w=0;
void SSort(int n,int a[]){
    int k;
    for(int i=0;i<n-1;i++){
        int min=a[i];
        int no=0;
        for(int j=i;j<n-1;j++){
            z++;
            if(min>a[j+1]){
                min=a[j+1];
                k=j+1;
                no++;
                w++;
            }
        }
        if(no !=0){
            a[k]=a[i];
            a[i]=min;
        }
    }
}
int main(void){
    int n=0,i,k,j,min,a[9999];
    //scanf("%d",&n);
    //for(i=0;i<n;i++){
        //scanf("%d",&a[i]);
    //}
    while(scanf("%d",&a[n])!=EOF){
        n++;
    }
    SSort(n,a);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("%d\n",z);
    printf("%d\n",w);
    return 0;
}