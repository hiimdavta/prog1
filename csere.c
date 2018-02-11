#include <stdio.h>

int main(){

int a = 1;
int b = 2;

printf("a:%d b:%d\n",a,b);

a=b-a;
b=b-a;
a=b+a;

printf("a:%d b:%d\n",a,b);

return 0;
}
