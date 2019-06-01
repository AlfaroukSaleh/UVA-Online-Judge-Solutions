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

int main () {
    int n; cin>>n;getchar(); int t=0;
    while (n--){
        stack <char> stk;
        string stg;
        getline(cin,stg);
        if (stg.compare("\n")==0){ cout<<"Yes\n"; continue;}
        if (stg.size()==1|| stg.size()%2!=0){cout<<"No\n"; continue;}
        int flag =0;
        for (int i=0;i<stg.size();i++){
            if (stg[i]=='('||stg[i]=='[') stk.push(stg[i]);
            else if (stg[i]==')'&&!stk.empty()&&stk.top()=='(')
                stk.pop();
            else if (stg[i]==']'&&!stk.empty()&&stk.top()=='[')
                stk.pop();
            else flag=1;
            
        }
        if (stk.empty()&&flag==0) cout<<"Yes\n";
        else cout<<"No\n";
        
    }


}

