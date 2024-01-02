#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str1[100];
    scanf("%[^
]s",&str);
    strcpy(str1,str);
    printf("%s",str1);
}