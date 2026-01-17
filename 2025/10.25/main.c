#include<stdio.h>
enum {print,reverse,replace};
int main()
{
	char str[1001];
	char rep[1001];
	int q;
	scanf("%1000s",str);
	scanf("%d",&q);
	int change;
	int address[2];
	int j;
	int k=0;
	int resv;
	for(int i=0;i<q;i++)
	{
		scanf("%d",&change);
		switch(change){
			case print:
				scanf("%d%d",&address[0], &address[1]);
				for(j=address[0];j<=address[1];j++)
				{
					printf("%c",str[j]);
				}
                printf("\n");
				break;
			case reverse:
				scanf("%d%d",&address[0], &address[1]);
				int len=address[1]-address[0]+1;
                for(j=0;j<len/2;j++)
                {
                    resv=str[address[0]+j];
                    str[address[0]+j]=str[address[1]-j];
                    str[address[1]-j]=resv;
                }
				break;
			case replace:
				scanf("%d%d%1000s",&address[0], &address[1], rep);
				k = 0;
				for(j=address[0];j<=address[1];j++)
				{
					str[j]=rep[k];
					k++;
				}
				break;
			default:
				break;
		}
	}
	return 0;
}
