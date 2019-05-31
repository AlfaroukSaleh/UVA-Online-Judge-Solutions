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
    int n,q;int up,dw;
    long long arr1[100000];
    long long arr2[100000];
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>arr1[i];
    cin>>q;
    for (int i=0;i<q;i++)
        cin>>arr2[i];
    
    for (int i=0;i<q;i++){
        
        up =  upper_bound(arr1,arr1+n,arr2[i])-arr1;
        dw = lower_bound(arr1,arr1+n,arr2[i])-arr1;
        dw--;
        if (dw>=0)cout<<arr1[dw]<<" ";
        else cout<<"X ";
        
        if (up!=n)
            cout<<arr1[up]<<endl;
        else cout<<"X"<<endl;
        
        
       
        
    }
   
}
