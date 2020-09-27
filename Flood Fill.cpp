#include <bits/stdc++.h>
using namespace std;
int visited[10][10]={0};
int maze[10][10];
void floodfill(int n, int m, int maze[][10], int x, int y, string path)
{
    if(x==n-1&&y==m-1)
    {
        cout<<path<<endl;
        return;
    }
    if(x==n||y==m||x<0||y<0||visited[x][y]==1)
        return;

    visited[x][y]=1;

    if(maze[x-1][y]!=1 )//&& visited[x-1][y]!=1)
    {
        // visited[x-1][y]=1;
        floodfill(n,m,maze,x-1,y,path+'t');
    }

    if(maze[x][y-1]!=1 )//&& visited[x][y-1]!=1)
    {
        // visited[x][y-1]=1;
        floodfill(n,m,maze,x,y-1,path+'l');
    }

    if(maze[x+1][y]!=1 )//&& visited[x+1][y]!=1)
    {
        // visited[x+1][y]=1;
        floodfill(n,m,maze,x+1,y,path+'d');
    }

    if(maze[x][y+1]!=1 )//&& visited[x][y+1]!=1)
    {
        // visited[x][y+1]=1;
        floodfill(n,m,maze,x,y+1,path+'r');
    }
    visited[x][y]=0;


}
int main() {
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>maze[i][j];
    }
    floodfill(n,m,maze,0,0,"");
}
