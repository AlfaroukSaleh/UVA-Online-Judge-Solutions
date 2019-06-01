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

int main() {
    int n;
    cin>>n;
    while (n--){
    
    char s[11];
    cin>>s;
    int size = strlen(s);
    sort (s,s+size);
    do {
        for (int i=0;i<size;i++)
            cout<<s[i];
                    cout<<endl;
    
    }while (next_permutation(s,s+size));
    cout<<endl;
    
    }

}
