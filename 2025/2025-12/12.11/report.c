#include<stdio.h>
struct card{
    char color;
    int num;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct card cards[n];
    struct card cards1[n];
    struct card cards2[n];
    for(int i=0;i<n;i++)
    {
        scanf(" %c%d",&cards[i].color,&cards[i].num);
        cards1[i].color=cards[i].color;
        cards2[i].color=cards[i].color;
        cards1[i].num=cards[i].num;
        cards2[i].num=cards[i].num;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(cards1[j].num>cards1[j+1].num)
            {
                int temp=cards1[j].num;
                cards1[j].num=cards1[j+1].num;
                cards1[j+1].num=temp;
                char temp1=cards1[j].color;
                cards1[j].color=cards1[j+1].color;
                cards1[j+1].color=temp1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        int mini=i;
        for(int j=i+1;j<n;j++)
        {
            if(cards2[mini].num>cards2[j].num)
            {
                mini=j;
            }
        }
        if(mini!=i)
        {
            int temp=cards2[mini].num;
                cards2[mini].num=cards2[i].num;
                cards2[i].num=temp;
                char temp1=cards2[mini].color;
                cards2[mini].color=cards2[i].color;
                cards2[i].color=temp1;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%c%d ",cards1[i].color,cards1[i].num);
    }
    printf("\nStable\n");
    for(int i=0;i<n;i++)
    {
        printf("%c%d ",cards2[i].color,cards2[i].num);
    }
    int check=0;
    for(int i=0;i<n;i++)
    {
       if(cards1[i].color!=cards2[i].color || cards1[i].num!=cards2[i].num)
       {
        check=1;
        break;
       }
    }
    if(check)
    {
        printf("\nNot stable");
    }
    else
    {
        printf("\nStable");
    }
    return 0;
}