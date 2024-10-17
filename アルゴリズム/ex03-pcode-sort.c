#include<stdio.h>
#include<string.h>
#define N 128
#define M 1000000

typedef struct rc{
    char pcode[N],add[N];
}RC;

void BSort(int n,RC a[]){
    int i,j;
    RC tmp;
    for(i=n-1;i>0;i--){
        for(j=0;j<i;j++){
            if(strcmp(a[j].pcode,a[j+1].pcode)>0){
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
}

void QSort(int f,int t,RC a[]){
    int i=f,j=t;
    char p[N];
    strcpy(p,a[(f+t)/2].pcode);
    RC tmp;
    while(i<=j){
        while(strcmp(a[i].pcode,p)<0){
            i++;
        }
        while(strcmp(a[j].pcode,p)>0){
            j--;
        }
        if(i<=j){
            tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
            i++;
            j--;
        }
    }
    if(f<j){
        QSort(f,j,a);
    }
    if(i<t){
        QSort(i,t,a);
    }
}

int main(){
    int n=0,i;
    static RC a[M];
    FILE *fp1,*fp2;
    fp1=fopen("pcode.dat","r");
    fp2=fopen("pcode-sort-new1.dat","w");
    while(fscanf(fp1,"%s%s",a[n].pcode,a[n].add)!=EOF){
        n++;
    }
    fclose(fp1);
    //BSort(n,a);
    QSort(0,n-1,a);
    for(i=0;i<n;i++){
        fprintf(fp2,"%s %s\n",a[i].pcode,a[i].add);
    }
    fclose(fp2);
    return 0;
}