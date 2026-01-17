#include<stdio.h>
#include<string.h>
int main()
{
    int hour;
    char min[3];
    while(scanf("%d:%s",&hour,min)==2)
    {
        if(hour<12)
        {
            if(hour<10)
            {
            printf("Only 0%d:%s.  Too early to Dang.\n",hour,min);
            }
            else
            {
            printf("Only %d:%s.  Too early to Dang.\n",hour,min);
            }
        }
        else if(hour==12)
        {
            if(strcmp(min,"00")==0)
            {
                 printf("Only %d:%s.  Too early to Dang.\n",hour,min);
            }
            else
            {
                printf("Dang\n");
            }
        }
        else
        {
            if(strcmp(min,"00")==0)
            {
                for(int i=0;i<hour-12;i++)
                {
                    printf("Dang");
                }
                printf("\n");
            }
            else
            {
                for(int i=0;i<hour-11;i++)
                {
                    printf("Dang");
                }
                printf("\n");
            }
        }
    }
    return 0;
}