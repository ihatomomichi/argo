#include<stdio.h>

int main(void) {
    int n = 4;
    int a[] = {1,2,3,4};
    int n_node;
    int i;
    int j;
    int k;
    int sump[99];
    int sum[99];
    n_node = 1;

    sump[0] = a[0];
    for(i = 1; i <= n-1; i++){
        k=0;
        for(j = 0; j <= n_node-1; j++){
            sum[k] = sump[j] + a[i];
            k++;
            sum[k] = sump[j] - a[i];
            k++;
        }
        n_node = k;
        for(j=0; j <= n_node-1; j++){
            sump[j] = sum[j];
        }
    }
    
    k = 0;
    for(i=0; i <= n_node - 1; i++){
        if(2<=sum[i]&&sum[i] <=8) {
            k++;
        }
    }
    printf("%d\n", k);
    return 0;
}