#include<cs50.h>
#include<stdio.h>

int main(void)
{
int pyramid_height;
do
{
	printf("height : ");
    pyramid_height = get_int();
}
while(pyramid_height<0 || pyramid_height>23);

for(int i = 0; i < pyramid_height; i++) 
	{
        for(int j = pyramid_height-1; j>i; j--)
        {
            printf(" ");
        }
		for(int k = 0; k < i+2; k++)
		{
			printf("#");
		}
		printf("\n");
	}	
	return 0;
}
