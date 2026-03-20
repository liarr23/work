#include<bits/stdc++.h>
using namespace std;
class box
{
    private:
        double hei;
        double len;
        double bread;
    public:
        void gethei(double height)
        {
            hei=height;
        }
        void getlen(double lenght)
        {
            len=lenght;
        }
        void getbread(double breadth)
        {
            bread=breadth;
        }
        box operator+(const box&b)
        {
            box bo;
            bo.len=this->len + b.len;
            bo.hei=this->hei + b.hei;
            bo.bread=this->bread + b.bread;
            return bo;
        }
        void print()
        {
            cout << len << " " << hei << " " << bread;
        }
};
int main()
{
    int a,b,c;
    box box1,box2,box3;
    cin >> a >> b >> c;
    box1.getlen(a);
    box2.getlen(a);
    box1.gethei(b);
    box2.gethei(b);
    box1.getbread(c);
    box2.getbread(c);
    box3=box1+box2;
    box3.print();
    return 0;
}