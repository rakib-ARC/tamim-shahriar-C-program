#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[30];
    int i;
    scanf("%s", str);
    for(i=5;i>=0;i = i-1){
     printf("%c",str[i]);
}
 printf("\n");

    return 0;
}
