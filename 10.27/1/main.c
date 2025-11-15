#include<stdio.h>
#include<string.h>
int main()
{
	char num[10000001];
	scanf("%1000000s", num);
	int len = strlen(num);
	int cnt = 1;
	for(int i=0;i<len/2;i++)
	{
		if(num[i]!=num[len-i-1])
		{
              cnt=0;
			  break;
		}
	}
	if(cnt==1)
	{
		printf("%s",num);
	}
	else
	{
		printf("0");
	}
	return 0;
}
