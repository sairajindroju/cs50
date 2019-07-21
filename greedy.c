#include<cs50.h>
#include<stdio.h>
#include<math.h>
int main(void)
{
    int Q = 25, D = 10, N = 5, P = 1;
    
    float given_amount = 0;
    int cent_amount = 0;
    int quarter_count = 0;
    int dime_count = 0;
    int nickel_count = 0;
    int penny_count = 0;
    int leftover = 0;
    int coin_count = 0;
    
     do 
    {
        printf("O hai! How much change is owed?\n");
        given_amount = get_float();
    }
    while(given_amount <= 0);
    
    
    cent_amount = (int)round(given_amount*100);
    
    quarter_count = cent_amount / Q;
    leftover = cent_amount % Q;
    
    dime_count = leftover / D;
    leftover = leftover % D;
    
    nickel_count = leftover / N;
    leftover = leftover % N;
    
    penny_count = leftover / P;
    leftover = leftover % P;
    
   coin_count = quarter_count + dime_count + nickel_count + penny_count;
    
    printf("%d\n", coin_count);
    
}