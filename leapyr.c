#include <stdio.h>

int main()
{
    int yr;
    scanf("%d",&yr);
    if((yr%4==0)&&(yr>100))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
