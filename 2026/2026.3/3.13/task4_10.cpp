#include<bits/stdc++.h>
using namespace std;
class Birthday
{
    private:
    int year;
    int month;
    int day;
    public:
    Birthday()://默认构造函数
    year(0),month(0),day(0)//初始化列表
    {
    }
    Birthday(int Year,int Month,int Day)://带参构造函数
    year(Year),month(Month),day(Day)
    {
    }
    ~Birthday()//析构函数
    {
    }
    Birthday(const Birthday &b)://拷贝构造函数
    year(b.year),month(b.month),day(b.day)
    {
    }
    void setyear(int Year)
    {
        year=Year;
    }
    void setmonth(int Month)
    {
        month=Month;
    }
    void setday(int Day)
    {
        day=Day;
    }
    int getyear()
    {
        return year;
    }
    int getmonth()
    {
        return month;
    }
    int getday()
    {
        return day;
    }
};
class Person
{
    private:
    int id;
    string sex;
    int age;
    string idcard;
    Birthday birthday;
    public:
    Person()://默认构造函数
    id(0),sex(""),age(0),idcard(""),birthday()
    {
    }
    Person(int Id,string Sex,int Age,string Idcard,Birthday Birthday)://带参构造函数
    id(Id),sex(Sex),age(Age),idcard(Idcard),birthday(Birthday)
    {
    }
    ~Person()//析构函数
    {
    }
    Person(const Person &p)://拷贝构造函数
    id(p.id),sex(p.sex),age(p.age),idcard(p.idcard),birthday(p.birthday)
    {
    }
    void setsex(string Sex)
    {
        sex=Sex;
    }
    void setage(int Age)
    {
        age=Age;
    }
    void setidcard(string Idcard)
    {
        idcard=Idcard;
    }
    void setbirthday(Birthday Birthday)
    {
        birthday=Birthday;
    }
    int getid()
    {
        return id;
    }
    string getsex()
    {
        return sex;
    }
    int getage()
    {
        return age;
    }
    string getidcard()
    {
        return idcard;
    }
    Birthday getbirthday()
    {
        return birthday;
    }
};
int main()
{
    Person person;
    int id,age,year,month,day;
    string sex,idcard;
    cin >> id >> age >> sex >> idcard >> year >> month >> day;
    Birthday birthday(year, month, day);
    person = Person(id, sex, age, idcard, birthday);
    cout << person.getid() << " " << person.getage() << " " << person.getsex() << " " << person.getidcard() << " " << person.getbirthday().getyear() << " " << person.getbirthday().getmonth() << " " << person.getbirthday().getday() << endl;
}