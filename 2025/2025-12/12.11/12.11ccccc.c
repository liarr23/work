#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int apple[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&apple[i]);
	}
	long long int total=0;
	for(i=0;i<n;i++)
	{
		total+=apple[i];
	}
	long long min = total;
    for (int mask = 0; mask < (1 << n); mask++) 
	{
     long long int sum = 0;
     for (int i = 0; i < n; i++)
		{
            if (mask & (1 << i))
			{
               sum += apple[i];
         }
      }
       long long diff = llabs(total - 2 * sum);
       if (diff < min)
	   {
       min = diff;
      }
	}
printf("%lld",min);
		return 0;
	}