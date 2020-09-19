#include<stdio.h>

int main()
{
    int t,a,b,c;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (n>10)
        {
            a= n-10;
            b=10;
            printf("%d %d\n", a,b);
        }
        else
        {
            a=0;
            printf("%d %d\n", a,n);
        }
        
        
    }
    
}