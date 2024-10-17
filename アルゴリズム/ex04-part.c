#include<stdio.h>

void Qsort(int a[],int f,int t){
    for(int h=f;h<=t;h++){
        printf("%d ",a[h]);
    }
    printf("\n");
    int i=0,j=t,a1;
    int p=a[(f+t)/2];
    while(i<=j){
        while(a[i]<p){
            i++;
        }
        while(a[j]>p){
            j--;
        }
        a1=a[i];
        a[i]=a[j];
        a[j]=a1;
        i++;
        j--;
        
    }
    if(f<j){
        Qsort(a,f,j);
    }
    if(i<t){
        Qsort(a,i,t);
    }
}
int main(){
    int i,n,a[99];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int f=0;
    int t=n-1;
    Qsort(a,f,t);
    for(f=0;f<=t;f++){
        printf("%d ",a[f]);
    }
    printf("\n");
    return 0;
}