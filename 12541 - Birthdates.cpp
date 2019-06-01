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
    map <int ,string> m;
    int n; cin>>n;
    while (n--){
    string name;
    int a,b,c,day;
    cin>>name;
    cin>>a>>b>>c;
    day=a+(b*30)+c*365;
m.insert(make_pair(day,name));
    }
    auto itr1=m.begin();
    auto itr2=m.end();
    itr2--;
    cout<<itr2->second<<endl<<itr1->second<<endl;
 }
