#include <iostream>
using namespace std;
void printer(string mod,string res)
{
    if(mod.length()==0)
    {
        cout<<res<<endl;
        return;
    }
    char ch=mod.at(0);
    mod=mod.substr(1);
    printer(mod,res+"");
    printer(mod,res+ch);
}
int main() {
    printer("abcd","");

    // cout<<s.at(0);
}
