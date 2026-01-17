#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <set <int>> players(100);
    int player;
    int skin;
    int num=0;
    set <int> skins;
    while(scanf("%d%d", &player, &skin) != EOF)
    {
        skins.insert(skin);
        players[player - 1].insert(skin);
        for(int i = 0; i < players.size();i++)
        {
         if(skins.size()==players[i].size())
         {
             num++;
             break;
         }   
        }
    }
    cout << num << endl;
    return 0;
}
