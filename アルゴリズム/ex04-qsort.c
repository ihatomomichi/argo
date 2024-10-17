#include<stdio.h>

int z=0,w=0;
void Qsort(int a[],int f,int t){
    //for(int h=f;h<=t;h++){
        //printf("%d ",a[h]);
    //}
    //printf("\n");
    int i=f,j=t,a1;
    int p=a[(f+t)/2];
    while(i<=j){
        while(a[i]<p){
            i++;
            z++;
        }
        while(a[j]>p){
            j--;
            z++;
        }
        if(i<=j){
            a1=a[i];
            a[i]=a[j];
            a[j]=a1;
            i++;
            j--;
            w++;
            z++;
        } 
    }
    if(f<j){
        Qsort(a,f,j);
    }
    if(i<t){
        Qsort(a,i,t);
    }
}
int main(){
    int i,n=0,a[9999];
    //scanf("%d",&n);
    //for(i=0;i<n;i++){
        //scanf("%d",&a[i]);
    //}
    while(scanf("%d",&a[n])!=EOF){
        n++;
    }
    int f=0;
    int t=n-1;
    Qsort(a,f,t);
    for(f=0;f<=t;f++){
        printf("%d ",a[f]);
    }
    printf("\n");
    printf("%d\n",z);
    printf("%d\n",w);
    return 0;
}