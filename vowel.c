#include <stdio.h>

int main()
{
    char a;
    scanf("%c",&a);
    if((a>='a'&&a<='z')|(a>='A'&&a<='Z'))
    {
    if(a=='a'|a=='A')
    {
        printf("Vowel");
    }
    else if(a=='e'|a=='E')
    {
        printf("Vowel");
    }
    else if(a=='i'|a=='I')
    {
        printf("Vowel");
    }
    else if(a=='o'|a=='O')
    {
        printf("Vowel");
    }
    else if(a=='u'|a=='U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    }
    else
    {
        printf("invalid");
    }
    return 0;
}
