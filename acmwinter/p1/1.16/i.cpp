#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, width;
    cin >> num >> width;
    vector<int> nums(num);
    for (int i = 0; i < num; i++)
    {
        cin >> nums[i];
    }

    deque<int> q_max; 
    deque<int> q_min; 
    vector<int> max_vals;
    vector<int> min_vals;

    for (int i = 0; i < num; i++)
    {
        while (!q_min.empty() && nums[q_min.back()] > nums[i])
        {
            q_min.pop_back();
        }
        while (!q_max.empty() && nums[q_max.back()] < nums[i])
        {
            q_max.pop_back();
        }
        q_min.push_back(i);
        q_max.push_back(i);
        if (i >= width - 1)
        {
            while (!q_min.empty() && q_min.front() <= i - width)
            {
                q_min.pop_front();
            }
            while (!q_max.empty() && q_max.front() <= i - width)
            {
                q_max.pop_front();
            }
            min_vals.push_back(nums[q_min.front()]);
            max_vals.push_back(nums[q_max.front()]);
        }
    }
    for (int i = 0; i < min_vals.size(); i++)
    {
        cout << min_vals[i] << " ";
    }
    cout << '\n';
    for (int i = 0; i < max_vals.size(); i++)
    {
        cout << max_vals[i] << " ";
    }
    cout << '\n';

    return 0;
}
