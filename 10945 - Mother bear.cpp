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
    
    while (true){
    
    string st;
getline(cin,st);
if (st.compare("DONE")==0) break;
   
    
    vector<char> v;
    for (int i=0;i<st.length();i++){
       if (isalpha(st[i]))
       {  
           v.push_back(st[i]);  
       }
    }
    int flag=1;
    
        vector<char>::iterator itr1=v.begin();
        vector <char> ::iterator itr2= v.end()-1;
        for (int i=0;i<(v.size()/2);i++){
            *itr1=tolower(*itr1);
            *itr2=tolower(*itr2);

            if (*itr1 != *itr2)
                flag=0;
            itr1++; itr2--;
        }
        flag? cout<<"You won't be eaten!\n": cout<<"Uh oh..\n";}
        
}
