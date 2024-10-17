#include<stdio.h>
#include<string.h>
#define N 256
int main(){
        char x[N],line[N],key[N];
        FILE *ln;
        ln=fopen("pcode.dat","r");
        while(1){
            scanf("%s",key);
            if(key[0]=='q'&&key[1]==0){
                 break;
            }
            
            while(fgets(line,N,ln)!=NULL){
                if(strstr(line,key)!=NULL){
                    printf("%s",line);
                    break;
                }
            }
            rewind(ln);
        }
        fclose(ln);
        return 0;
}