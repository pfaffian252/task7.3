#include <stdio.h>
#include <stdlib.h>
const int n=6;
int main()
{
    int i, j, p, k, a[n];
    printf("enter an array\n");
    for (i=0; i<n; i++) scanf("%d", &a[i]);
    for (p=0; p<n-1; p++)
    for (i=p+1; i<n; i++)
       while (a[i]==a[p] && a[p]!=0)
           {
                for (j=i; j<n-1; j++) a[j]=a[j+1];
        a[n-1]=0;
        }

        for (i=0; i<n; i++) printf("%d ", a[i]);
    return 0;
}
