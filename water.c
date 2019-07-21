#include<cs50.h>
#include<stdio.h>


int main(void)
{
printf("Minutes: ");
int m = get_int();
int b;
do
{
    b = 12*m;
}
while(m<0);
printf("Bottles: %d\n",b);
}
