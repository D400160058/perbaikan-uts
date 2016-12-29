#include<stdio.h>
unsigned char i=0;
int main()
{
printf("HURUF | DESIMAL | HEXADESIMAL\n");
printf("_____________________________\n");

for(i=65; i<255; i++)
{
printf("%c | %d | 0x%x \n");
}
printf("_____________________________\n");
return 0;
}
