#include <stdio.h>
#include <string.h>

int main()
{   char a [50] = "abcdef";
    char b [50] = "ghijkl";
    int len = strlen(a);

    strcat(b,a);
    printf("%s\n",b);
    printf("Length of this sting %d\n", len);

    return 0;
}
