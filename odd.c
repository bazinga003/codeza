#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n>0)
    {
    if(n%2==0)
    {
        printf("Even");
    }
    
    else 
    {
        printf("Odd");
    }
    }
    printf("invalid");
    

    return 0;
}
