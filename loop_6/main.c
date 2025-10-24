#include <stdio.h>
int main()
{
int i,j;

 for (i=0; i < 3; i = i + 1){//or i++
    for(j=0;j<3;j = j + 1){ //or j++
     printf("i= %d,j= %d\n",i,j);
    }
}
return 0;
}
