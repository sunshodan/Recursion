#include <bits/stdc++.h>
using namespace std;
void PrintMazeJumps(int verti,int hori,int n,string res)
{
    if(verti==n-1&&hori==n-1)
    {
        cout<<res<<endl;
        return;
    }
    if(verti>=n||hori>=n)
    return;
    for(int i=1;i<n;i++)
    {
        PrintMazeJumps(verti+i,hori,n,res+"V"+char(i+'0')+" ");
        PrintMazeJumps(verti,hori+i,n,res+"H"+char(i+'0')+" ");
    }
}
int main()
{
    PrintMazeJumps(0,0,4,"");
}
