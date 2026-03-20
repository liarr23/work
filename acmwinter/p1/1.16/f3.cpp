#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int num;
    string o1, o2;
    
    while (cin >> num)
    {
        cin >> o1 >> o2;
        
        stack<char> s; // 模拟栈
        vector<string> steps; // 记录操作
        
        int j = 0; // 指向o1的指针
        bool valid = true;
        
        // 核心：遍历输出序列 o2
        for (int i = 0; i < num; i++)
        {
            char target = o2[i];
            
            // 如果栈顶不是我要的，就一直压入，直到找到它
            while (j < num && (s.empty() || s.top() != target))
            {
                s.push(o1[j]);
                steps.push_back("in");
                j++;
            }
            
            // 检查是否找到了目标
            if (!s.empty() && s.top() == target)
            {
                s.pop();
                steps.push_back("out");
            }
            else
            {
                // 输入用完了，栈顶也不是我要的 -> 失败
                valid = false;
                break;
            }
        }
        
        if (valid)
        {
            cout << "Yes." << endl;
            for (const string& op : steps)
            {
                cout << op << endl;
            }
        }
        else
        {
            cout << "No." << endl;
        }
        cout << "FINISH" << endl;
    }
    
    return 0;
}
