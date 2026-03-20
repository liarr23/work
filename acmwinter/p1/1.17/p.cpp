#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
int main()
{
    string line;
    while(getline(cin,line))
    {
        vector<char>ops;
        vector<double>nums;
        if(line=="0")
        {
            break;
        }
        stringstream ss(line);
        string token;
        ss >> token;
        nums.push_back(stod(token));
        while(ss >> token)
        {
            ops.push_back(token[0]);
            ss >> token;
            nums.push_back(stod(token));
        }
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]=='*')
            {
                double res = nums[i]*nums[i+1];
                nums[i]=res;
                nums.erase(nums.begin()+i+1);
                ops.erase(ops.begin()+i);
                i--;
            }
            if(ops[i]=='/')
            {
                double res = nums[i]/nums[i+1];
                nums[i]=res;
                nums.erase(nums.begin()+i+1);
                ops.erase(ops.begin()+i);
                i--;
            }
        }
        double res=nums[0];
        for(int i=0;i<ops.size();i++)
        {
            
            if(ops[i]=='+')
            {
                res+=nums[i+1];
            }
            else
            {
                res-=nums[i+1];
            }
        }
        printf("%.2lf\n",res);
    }
    return 0;
}