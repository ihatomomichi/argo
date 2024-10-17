#include<stdio.h>
#include<string.h>
#define N 64
int BSearch(int n,char a[][N],char x[N]){
    int i=0,j=n;
    while(i<=j){
        int m=(i+j)/2;
        if(strcmp(a[m],x)==0){
            printf("%d\n",m);
            break;
        }
        else if(strcmp(a[m],x)>0){
            j=m-1;
        }
        else if(strcmp(a[m],x)<0){
            i=m+1;
        }
    }
}
void SSort(int n,char a[][N]){
    int i,j,no;
    char b[N];
    for(i=0;i<n;i++){
        strcpy(b,a[i]);
        no=i;
        for(j=i+1;j<n;j++){
            if(strcmp(b,a[j])>0){
                strcpy(b,a[i]);
                no=j;
            }
        }
        if(no!=i){
            strcpy(a[no],a[i]);
            strcpy(a[i],b);
        }
    }
}
int main(){
    int n,i;
    char x[N];
    scanf("%d",&n);
    char a[n][N];
    for(i=0;i<n;i++){
        scanf("%s",a[i]);
    }
    scanf("%s",x);
    //SSort(n,a);
    BSearch(n,a,x);
    return 0;
}