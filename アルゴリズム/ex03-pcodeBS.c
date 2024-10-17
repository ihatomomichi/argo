#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 100
#define M 130000

typedef struct rc{
    char pc[N],add[N];
}RC;

int BSearch(int n,RC a[],char key[]){
    int i=0,j=n-1,k=0;
    while(i<=j){
        int m=(i+j)/2;
        if(strcmp(a[m].pc,key)==0){
            printf("%s\n",a[m].add);
            k++;
            break;
        }
        else if(strcmp(a[m].pc,key)>0){
            j=m-1;
        }
        else if(strcmp(a[m].pc,key)<0){
            i=m+1;
        }
    }
    if(k==0){
        printf("該当なし\n");
    }
    }
int main(){
    int n=0;
    static RC a[M];
    char key[N];
    FILE *ln;

    ln=fopen("pcode-sort.dat","r");
    if(ln==NULL) {puts("error"); exit(-1);}

    while(1){
        scanf("%s",key);
        
        if(key[0]=='q'&&key[1]==0){
                break;
        }
        
        while(fscanf(ln,"%s %s",a[n].pc,a[n].add)!=EOF){
            n++;
        }
        BSearch(n,a,key);
        rewind(ln);
    }

    fclose(ln);
    return 0;
}