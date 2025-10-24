#include <stdio.h>
int main()
{


int n = 1;
for(;n <= 100; n = n + 1) {
printf("%d\n", n);
if (n >= 50) {
    break;// if break remove then 100 print
    }
 }
return 0;
}
