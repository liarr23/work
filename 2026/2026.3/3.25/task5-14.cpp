#include<bits/stdc++.h>
using namespace std;
class Boat;
class Car;
double getTotalWeight(Boat *b,Car *c);
class Boat
{
    public:
    friend double getTotalWeight(Boat *b,Car *c);
    Boat()
    {
        weight=0;
    }
    void setweight(double w)
    {
        weight=w;
    }
    private:
    double weight;
};
class Car
{
    public:
    friend double getTotalWeight(Boat *b,Car *c);
    Car()
    {
        weight=0;
    }
    void setweight(double w)
    {
        weight=w;
    }
    private:
    double weight;
};
double getTotalWeight(Boat *b,Car *c)
{
    return b->weight+c->weight;
}
int main()
{
    Boat boat;
    Car car;
    double bw,cw;
    cin >> bw >> cw;
    boat.setweight(bw);
    car.setweight(cw);
    cout << getTotalWeight(&boat, &car) << endl;
}