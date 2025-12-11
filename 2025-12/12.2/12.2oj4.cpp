#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    string chem;
    cin >> t;
    while(t--)
    {
    cin >> chem;
    int cnt_c=0,cnt_o=0,cnt_h=0;
    int i=0;
    while(i<chem.size())
    {
    if (chem[i] == 'C') 
    {
        i++;
        int num = 0;
        while (i < chem.size() && isdigit(chem[i])) 
        {
            num = num * 10 + (chem[i] - '0');
            i++;
        }
           if(num!=0)
           {
            cnt_c+=num;
           }
           else
           {
            cnt_c+=1;
           }
    }
        if (i < chem.size() && chem[i] == 'H') 
        {
            i++;
            int num = 0;
            while (i < chem.size() && isdigit(chem[i])) 
            {
                num = num * 10 + (chem[i] - '0');
                i++;
            }
            if(num!=0)
            {
                cnt_h+=num;
            }
            else
            {
                cnt_h+=1;
            }
        }
        if (i < chem.size() && chem[i] =='O') 
        {
            i++; 
            int num = 0;
            while (i < chem.size() && isdigit(chem[i])) 
            {
                num = num * 10 + (chem[i] - '0');
                i++;
            }
            if(num!=0)
            {
                cnt_o+=num;
            }
            else
            {
                cnt_o+=1;
            }
        }
    }
    int cnt_h2o=0;
    int cnt_o2=0;
    int cnt_co2=0;
    int cnt_chem=1;
    while(cnt_h%2!=0)
    {
        cnt_c*=2;
        cnt_h*=2;
        cnt_o*=2;
        cnt_chem*=2;
    }
    cnt_h2o=cnt_h/2;
    cnt_co2=cnt_c;
    while((cnt_h2o+2*cnt_co2-cnt_o)%2!=0)
    {
        cnt_o*=2;
        cnt_h2o*=2;
        cnt_co2*=2;
        cnt_chem*=2;
    }
    cnt_o2=(cnt_h2o+2*cnt_co2-cnt_o)/2;
    if(cnt_chem!=1)
    {
        cout << cnt_chem ;
    }
    cout << chem << "+";
    if(cnt_o2!=1)
    {
        cout << cnt_o2;
    }
    cout << "O2" << "=";
    if(cnt_co2!=1)
    {
        cout << cnt_co2;
    }
    cout << "CO2" << "+";
    if(cnt_h2o!=1)
    {
         cout << cnt_h2o;
    }
    cout << "H2O" << "\n";
}
return 0;
}