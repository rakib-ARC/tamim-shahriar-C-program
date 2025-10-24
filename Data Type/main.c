#include <stdio.h>
int dt_1() {
int x, y, z;
printf("Enter the value of x and then y\n");
scanf("%d %d", &x, &y);
z = x + y ;
printf("The value of %d + %d equals %d\n", x, y, z);
return 0;
}
