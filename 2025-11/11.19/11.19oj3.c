#include<stdio.h>
#include<string.h>
int main()
{
    char shelf[4][11]={"bowl","knife","fork","chopsticks"};
    int n;
    while(scanf("%d",&n)==1)
    {
        for(int i=0;i<n;i++)
        {
            char item[20];
            scanf("%19s",item);
            for(int j=0;j<4;j++)
            {
                if(strcmp(item,shelf[j])==0)
                {
                    printf("%s ",item);
                    break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}