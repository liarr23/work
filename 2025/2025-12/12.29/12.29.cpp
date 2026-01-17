#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sem;
    cin >> sem;
    double gpa[sem],score[sem];
    for(int i=0;i<sem;i++)
    {
        cin >> gpa[i] >> score[i];
    }
    double total_gpa=0.0,total_score=0.0;
    for(int i=0;i<sem;i++)
    {
        total_gpa+=gpa[i]*score[i];
        total_score+=score[i];
    }
    printf("%.3f",total_gpa/total_score);
}