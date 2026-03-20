#include<bits/stdc++.h>
using namespace std;
class DataType
{
    private:
    char type;//数据类型,'c'表示char,'i'表示int,'d'表示double
    double value;
    public:
    DataType()://默认构造函数
    type('d'),value(0.0)
    {
    }
    DataType(char input)
    {
        type='c';
        value=input;
    }
    DataType(int input)
    {
        type='i';
        value=input;
    }
    DataType(double input)
    {
        type='d';
        value=input;
    }
    ~DataType()//析构函数
    {
    }
    DataType(const DataType &d)://拷贝构造函数
    type(d.type),value(d.value)
    {
    }
    void gettype()
    {
        cout << type << endl;
    }
    void getvalue()
    {
        if(type=='c')
        {
            cout << (char)value << endl;
        }
        else if(type=='i')
        {
            cout << (int)value << endl;
        }
        else if(type=='d')
        {
            cout << value << endl;
        }
    }
};
int main()
{
    char c;
    int i;
    double d;
    cin >> c >> i >> d;
    DataType data1(c);
    DataType data2(i);
    DataType data3(d);
    data1.gettype();
    data1.getvalue();
    data2.gettype();
    data2.getvalue();
    data3.gettype();
    data3.getvalue();   
}