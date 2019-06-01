
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
    
    int n;
    cin>>n;
            cin.ignore();

    while (n--){
    string s;int array[205]={0};

    getline(cin,s);
   // cin.ignore();
    int size = s.length();
    //if (size==1)cout<<s; continue;
    
    for (int i=0;i<size;i++){
        //cout<<"hello";
        if (isalpha(s[i]))
        { s[i]=tolower(s[i]);
            int g=(int)s[i];
            array[g-97]++;
           // cout<<"char = "<<s[i]<<" "<<"saved at location "<<g-97<<"value "<<array[g-97]<<endl;
        }
        
    }
    int max=-1;
    
    for (int i=0;i<=25;i++){
        if (max<array[i])max=array[i];
        //cout<<max<<endl;
    }
    
    for (int i=0;i<=25;i++){
       // cout<<"max= "<<max<<"arr= "<<array[i]<<endl;
        if (max==array[i]){
           // cout<<"found\n";
            int u=i+97;
            cout<<(char)u;
        }
    }cout<<endl;
    
    //n--;
    }

}
