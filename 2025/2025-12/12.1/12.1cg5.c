int strtoint(char s[])
{
    int num=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]<='9'&&s[i]>='0')
        {
            num=num*10+(int)s[i]-48;
        }
    }
    return num;
}