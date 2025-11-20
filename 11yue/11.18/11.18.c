#include<stdio.h>
#include<string.h>
struct Word
{
    int id;
    char word[21];
    char meaning[51];
};
int main()
{
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        struct Word dict[n];
        for(int j=0;j<n;j++)
        {
            scanf("%20s %50s",dict[j].word,dict[j].meaning);
            dict[j].id=j+1;
        }
        for(int j=0;j<n-1;j++)
        {
            for(int k=0;k<n-j-1;k++)
            {
                if(strcmp(dict[k].word,dict[k+1].word)<0)
                {
                    struct Word temp=dict[k];
                    dict[k]=dict[k+1];
                    dict[k+1]=temp;
                }
            }
        }
        for(int j=0;j<n;j++)
        {
            printf("NO.%d: %s\n",dict[j].id,dict[j].meaning);
        }
    }
    return 0;
}