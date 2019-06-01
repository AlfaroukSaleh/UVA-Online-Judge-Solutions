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
    int n;
    cin>>n;
    
    while (n--){
    
    
    string s;
    cin>>s;
    
    int size=s.length();
    switch (size){
        case 3: {
if ((s[0]=='o'&&s[1]=='n') ||(s[0]=='o'&&s[2]=='e') || (s[1]=='n'&&s[2]=='e'))        
    cout<<"1\n";
else if ((s[0]=='t'&&s[1]=='w') ||(s[0]=='t'&&s[2]=='o') || (s[1]=='w'&&s[2]=='o'))        
    cout<<"2\n";

else if ((s[0]=='s'&&s[1]=='i') ||(s[0]=='s'&&s[2]=='x') || (s[1]=='i'&&s[2]=='x'))        
    cout<<"6\n";

else if ((s[0]=='t'&&s[1]=='e') ||(s[0]=='t'&&s[2]=='n') || (s[1]=='e'&&s[2]=='n'))        
    cout<<"10\n";
        }
        case 4: {
        
        if ((s[0]=='f'&&s[1]=='o') ||(s[0]=='f'&&s[2]=='u') || (s[1]=='o'&&s[2]=='u'))        
    cout<<"4\n";
else if ((s[0]=='f'&&s[1]=='i') ||(s[0]=='f'&&s[2]=='v') || (s[1]=='i'&&s[2]=='v'))        
    cout<<"5\n";

else if ((s[0]=='n'&&s[1]=='i') ||(s[0]=='n'&&s[2]=='n') || (s[1]=='i'&&s[2]=='n'))        
    cout<<"9\n";
        }
    
        case 5: {
        
        if ((s[0]=='t'&&s[1]=='h') ||(s[0]=='t'&&s[2]=='r') || (s[1]=='h'&&s[2]=='r'))        
    cout<<"3\n";
        else if ((s[0]=='s'&&s[1]=='e') ||(s[0]=='s'&&s[2]=='v') || (s[1]=='e'&&s[2]=='v'))        
    cout<<"7\n";

        else if ((s[0]=='e'&&s[1]=='i') ||(s[0]=='e'&&s[2]=='g') || (s[1]=='i'&&s[2]=='g'))        
    cout<<"8\n";
        }
    }
    
    }}
