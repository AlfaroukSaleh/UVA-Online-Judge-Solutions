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
    double a,b,x;
    
    int cnt;
    cin>>a>>b;
    while (a!=0&&b!=0) {
        cnt=0;
        for (int i=a;i<=b;i++){
            x=sqrt(i);
            if (x-floor(x)==0){cnt++;}
        }
        cout<<cnt<<endl;
            cin>>a>>b;

    }
    
}
