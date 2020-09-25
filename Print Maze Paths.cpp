#include <bits/stdc++.h>
using namespace std;
//We'll take 2 vars verti and hori and for every vectical move we'll append V in string res and H for horizontal call.
//we'll backtrack if the path go ut of bound
void PrintMaze(int verti,int hori,int n,string res)
{
    if(verti==n-1&&hori==n-1)
    {
        cout<<res<<endl;
        return;
    }
    if(verti>n-1||hori>n-1)
    return;
    PrintMaze(verti+1,hori,n,res+'V');
    PrintMaze(verti,hori+1,n,res+'H');
}
int main()
{
    PrintMaze(0,0,4,"");
}
