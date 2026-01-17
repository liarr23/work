#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int num,reward;
        scanf("%d",&num);
        if(num*6%10==0)
        {
            reward=num*6/10;
        }
        else
        {
            reward=num*6/10+1;
        }
        int silver,gold,sag;
        if(num%10==0)
        {
            gold=num/10;
        }
        else
        {
            gold=num/10+1;
        }
        if(num*3%10==0)
        {
            sag=num*3/10;
        }
        else
        {
            sag=num*3/10+1;
        }
        silver=sag-gold;
        printf("%d\n%d\n%d\n",gold,silver,reward-sag);
    }
    return 0;
}