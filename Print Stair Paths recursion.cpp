#include <bits/stdc++.h>
using namespace std;
void PrintPath(int num,string res)
{
    if(num==0)
    {
        cout<<res<<endl;
        return;
    }
    if(num<0)
    return;
    for(int i=1;i<=num;i++)
    {
        PrintPath(num-i,res+char(i+'0'));
    }
}
int main()
{
    PrintPath(5,"");
}
