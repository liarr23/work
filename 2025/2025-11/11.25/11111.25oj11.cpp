#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>
#include<string>
using namespace std;
struct item {
    long long int value;
    long long int weight;
    char type;
    long long int date;
    string name; 
};
int main()
{
    int n;
    cin >> n;
    vector <item> items(n);
    for(int i=0;i<n;i++)
    {
        cin >> items[i].value >> items[i].weight >> items[i].type >> items[i].date >> items[i].name;
    }
    sort(items.begin(),items.end(),[](const item& a,const item& b)
    {
        return tie(a.value,a.weight,a.type,a.date,a.name)
        <
        tie(b.value,b.weight,b.type,b.date,b.name);
    });
    for(auto &it : items)
    {
        cout << it.value << " " << it.weight << " " << it.type << " " << it.date << " " << it.name <<"\n";
    } 
    return 0;
}