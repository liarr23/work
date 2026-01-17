#include<stdio.h>
#include<stdlib.h>
void hanoi(int n,int start,int middle,int dest)
{
  if(n==1){
    printf("%d %d\n",start,dest);
    return ;
  }
  hanoi(n-1,start,dest,middle);
  printf("%d %d\n",start,dest);
  hanoi(n-1,middle,start,dest);
}
void cnt(int n,int start,int middle,int dest,int *res)
{
  if(n==1){
    (*res)++;
    return ;
  }
  cnt(n-1,start,dest,middle,res);
  (*res)++;
  cnt(n-1,middle,start,dest,res);
}
int main()
{
  int n;
  int *res = (int *)malloc(sizeof(int));
  *res=0;
  scanf("%d",&n);
  int middle=2;
  int start=1;
  int dest=3;
  cnt(n,start,middle,dest,res);
  printf("%d\n",*res);
  hanoi(n,start,middle,dest);
  return 0;
}