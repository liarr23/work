#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int treasure[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&treasure[i]);
    }
    int chance=n-k-2;
    int stable[chance];
    int left=1;
    int right = 1+k;
    while(chance--)
    {
        int max=treasure[0];
        int min=treasure[0];
        for(int i=0;i<left;i++)
        {
            if(treasure[i]>max)
            {
                max=treasure[i];
            }
            if(treasure[i]<min)
            {
                min=treasure[i];
            }
        }
        for(int i=right;i<n;i++)
        {
            if(treasure[i]>max)
            {
                max=treasure[i];
            }
            if(treasure[i]<min)
            {
                min=treasure[i];
            }
        }
        stable[left-1]=max-min;
        right++;
        left++;
    }
    int min_stable=stable[0];
    for(int i=0;i<n-k-2;i++)
    {
      if(min_stable>stable[i])
      {
        min_stable=stable[i];
      }
    }
    printf("%d",min_stable);
    return 0;
}