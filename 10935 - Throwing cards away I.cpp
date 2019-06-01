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

int main (){
    int n;int m=0;
    while (cin>>n){int z=0;
    if (n!=0)
        if (!m)
        cout<<"Discarded cards:";
    else cout<<endl<<"Discarded cards:";
        queue <int> q;
    for (int i=1;i<=n;i++){
        q.push(i);
    }

        for (int i=1;i<n;i++){
            if (!z)cout<<" "<<q.front();
            else cout<<", "<<q.front();
            q.pop();
            int x=q.front();

            q.push(x);
                        q.pop();

                        z++;
        }

        cout<<endl<<"Remaining card: "<<q.front();
m++;

    }

}
