#include<bits/stdc++.h>
using namespace std;
class Dog
{
   public:
    void setname(string Name);
    void setage(int Age);
    void setweight(int Weight);
    string getname();
    int getage();
    int getweight();
   private:
    string name;
    int age;
    int weight;
};
void Dog::setname(string Name)
{
    name=Name;
}
void Dog::setage(int Age)
{
    age=Age;
}
void Dog::setweight(int Weight)
{
    weight=Weight;
}
string Dog::getname()
{
    return name;
}
int Dog::getage()
{
    return age;
}
int Dog::getweight()
{
    return weight;
}
int main()
{
   Dog poppy;
   string name;
   int age,weight;
    cin >> name >> age >> weight;
    poppy.setname(name);
    poppy.setage(age);
    poppy.setweight(weight);
    cout << poppy.getname() << " " << poppy.getage() << " " << poppy.getweight() << endl;
    return 0;
}