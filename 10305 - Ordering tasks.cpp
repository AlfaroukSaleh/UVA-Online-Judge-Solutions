#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
#include <math.h>
#include <string>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include<string.h>
#include<list>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
const int N=1e5+5,M=1e6+5;
int head [N],nxt[M],to[M],v,n,m;
int ne,x=0;
void init(){
    memset (head,-1,n*sizeof head[0]);
    ne=0;
}

void addEdge (int f,int t){
    to[ne]=t;
    nxt[ne]=head[f];
    head[f]=ne;
    ne++;
}

void addBiEdge(int a,int b){
    addEdge(a,b);
    addEdge(a,b);
}
int vis[N];
int vid=0;

void Dfs(int u){
    if (vis[u]==vid)return ;
    vis[u]=vid;
    
    for (int k=head[u];~k;k=nxt[k]){
         v=to[k];
        Dfs(v);
    
    }
if (x>0)cout<<" ";
        printf("%d",u+1);x++;
    
}


int main (){
   // int n,m;
    
    int u,v;
    while (scanf("%d%d",&n,&m), n||m){
        init();
        while (m--){scanf("%d%d",&u,&v);
    --u;--v;
    addEdge (v,u);}
    ++vid;
    for (int i=0;i<n;i++)
        Dfs(i);
        puts("");}
    
    
    


}
