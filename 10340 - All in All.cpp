
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
    
    //freopen("/Users/al-farouksaleh/Desktop/in.txt","r",stdin);
    //freopen("/Users/al-farouksaleh/Desktop/out.txt","w",stdout);
    string s1,s2;
    while (cin>>s1>>s2){
    int cnt=0;
    int n=s1.size();
    
    for (int i=0;i<s2.size()&&cnt<n;i++){
        if (s2[i]==s1[cnt])cnt++;
    
    }
    if (cnt==n) cout<<"Yes\n";
    else cout<<"No\n";}


}
