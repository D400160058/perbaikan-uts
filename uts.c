#include<stdio.h>

char i=0;

int main()
{
for (i=0; i<255; i++)
{
printf("%c %d %x\n" , i, i, i);
}
return 0;
}
