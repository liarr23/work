#include<stdio.h>
#include<string.h>
int main()
{
    char input[1000];
    while(fgets(input,sizeof(input),stdin)!=NULL)
    {
        int num1=0;
        int num2=0;
        int is_num1=1;
        int is_num2=1;
        int cnt_num=0;
        int blank_pos=-1;
        int len = strlen(input);
        if (len > 0 && input[len-1] == '\n') 
        {
        input[len-1] = '\0';
        }
        for(int i=0;input[i]!=' ';i++)
        {
            blank_pos=i;
        }
        blank_pos++;
        if(input[0]>'0'&&input[0]<='9')
        {
        for(int i=0;input[i]!=' ';i++)
        {
            if(input[i]>='0'&&input[i]<='9')
            {
                num1=num1*10+(int)input[i]-48;
            }
            else
            {
                is_num1=0;
            }    
        }
        }
        else
        {
            is_num1=0;
        }
        if(is_num1)
        {
            if(num1>1000)
            {
                is_num1=0;
            }
            else
            {
                cnt_num++;
            }
        }
        if(is_num1)
        {
            printf("%d + ",num1);
        }
        else
        {
            printf("? + ");
        }
        if(input[blank_pos+1]<='9'&&input[blank_pos+1]>'0')
        {
        for(int i=blank_pos+1;input[i]!='\0';i++)
        {
            if(input[i]>='0'&&input[i]<='9')
            {
                num2=num2*10+(int)input[i]-48;
            }
            else
            {
                is_num2=0;
                break;
            }
        }
        }
        else
        {
            is_num2=0;
        }
        if(is_num2)
        {
            if(num2>1000)
            {
                is_num2=0;
            }
            else
            {
                cnt_num++;
            }
        }
        if(is_num2)
        {
            printf("%d = ",num2);
        }
        else
        {
            printf("? = ");
        }
        if(cnt_num==2)
        {
            printf("%d\n",num1+num2);
        }
        else
        {
            printf("?\n");
        }
    }
    return 0;
}