#include <bits/stdc++.h>
using namespace std;
void Permutations(string s,string res)
{
    if(s.length()==0)
    {
        cout<<res<<endl;
        return;
    }
    for(int i=0;i<s.length();i++)
    {
        char ch=s.at(i);
        string rest=s.substr(0,i)+s.substr(i+1);
        Permutations(rest,res+ch);
    }
}
int main()
{
    Permutations("abcde","");
}
