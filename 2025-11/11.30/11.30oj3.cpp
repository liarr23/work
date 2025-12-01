#include <iostream>
#include <vector>
#include <cctype>
#include <string>
using namespace std;

int main() 
{
    string expr;
    while (cin >> expr) 
    {
        vector<long long> terms; 
        char op = '+';           
        long long num = 0;

        for (int i = 0; i < expr.size(); i++) 
        {
            char c = expr[i];
            if (isdigit(c)) 
            {
                num = num * 10 + (c - '0');
            }
            if (!isdigit(c) || i == expr.size() - 1) 
            {
                if (op == '+') 
                {
                    terms.push_back(num);
                } 
                else if (op == '-') 
                {
                    terms.push_back(-num);
                } 
                else if (op == '*') 
                {
                    long long last = terms.back();
                    terms.pop_back();
                    terms.push_back(last * num);
                } 
                else if (op == '/') 
                {
                    long long last = terms.back();
                    terms.pop_back();
                    terms.push_back(last / num);
                }

                if (!isdigit(c)) 
                {
                    op = c;  
                    num = 0;  
                }
            }
        }

        long long result = 0;
        for (long long x : terms) 
        {
            result += x;
        }
        cout << result << '\n';
    }
    return 0;
}