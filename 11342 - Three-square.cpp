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
    int N;
    int k;
    cin>>N;
    while (N--){ int flag =0;
        cin>>k;
        int o=sqrt(k);
        for (int i=0;i<=o;i++){
            for (int j=i;j<=o;j++){
                for (int m=j;m<=o;m++)
                {
                    if (i*i+j*j+m*m==k)
                    {cout<<i<<" "<<j<<" "<<m<<endl;
                    flag=1;
                    
                    
                    }   
                
                            if (flag)break;

                }
                       if (flag)break;

            }
            if (flag)break;
        }
        if (!flag)cout<<"-1"<<endl;
        
    }



}
