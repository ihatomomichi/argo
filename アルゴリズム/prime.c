#include <stdio.h>

int main ()
{
    int n, k, found;

    printf("正の整数 => ");
    scanf("%d", &n);
    found = 0;
    k = 2;
    while (k < n){
        if (n % k == 0)
           found = 1;
        k = k+1;
    }
    if (n <= 1 || found == 1)
       printf ("%dは素数ではありません\n", n);
    else
       printf ("%dは素数です\n", n);
}
