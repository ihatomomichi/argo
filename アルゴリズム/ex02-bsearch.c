#include<stdio.h>

int BSearch(int n,int a[],int x){
    int i=0,j=n-1,p=-1;
    while(i<=j){
        int m=(i+j)/2;
        for(int r=i;r<=j;r++){
            printf("%d ",a[r]);
        }  
        printf("\n");
        if(a[m]==x){
            p=m;
            break;
        }
        else if(a[m]>x){
            j=m-1;
        }
        else if(a[m]<x){
            i=m+1;
        }
    }

    printf("%d\n",p);
}
void SSort(int n,int a[]){
    int i,j,min,no;
    for(i=0;i<n-1;i++){
        min=a[i];
        no=i;
        for(j=i+1;j<n;j++){
            if(min>a[j]){
                min=a[j];
                no=j;
            }
        }
        if(no!=i){
            a[no]=a[i];
            a[i]=min;
        }
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
    SSort(n,a);
    BSearch(n,a,x);
}