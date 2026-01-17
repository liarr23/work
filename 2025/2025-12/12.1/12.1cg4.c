int Count_Dight(int n,int d);//申明函数
int main()//主函数
{
   int n,d;
   scanf("%d%d",&n,&d);//输入变量
   int res=Count_Dight(n,d);
   printf("%d",res);//调用函数输出结果
   return 0;
}
int Count_Dight(int n,int d)//定义函数
{
    int cnt=0;
    if(n<0)
    {
        n=-n;
    }
    while(n/10!=0)
    {
        if(n%10==d)
        {
            cnt++;
        }
        n/=10;
    }
    if(n==d)
    {
        cnt++;
    }
    return cnt;
}