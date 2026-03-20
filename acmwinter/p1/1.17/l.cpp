#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int country[100001]={0};
    queue<int>people;
    queue<int>region;
    queue<int>times;
    int total=0;
    while(num--)
    {
        int time;
        cin >> time;
        times.push(time);
        int n;
        cin >> n;
        people.push(n);
        int p;
        for(int i=0;i<n;i++)
        {
            cin >> p;
            region.push(p);
            if(country[p]==0)
            {
                 total++;
                 country[p]++;
            }
            else
            {
                 country[p]++;
            }
        }
while (!times.empty() && (time - times.front()) >= 86400) 
{
    int dele_peo = people.front();
    int dele_cou;
    
    for (int i = 0; i < dele_peo; i++) 
    {
        if (region.empty()) break; 
        dele_cou = region.front();
        region.pop();
        country[dele_cou]--;
        if (country[dele_cou] == 0) 
        {
            total--;
        }
    }
    times.pop();
    people.pop();
}

        cout << total << "\n";
    }
    return 0;
}