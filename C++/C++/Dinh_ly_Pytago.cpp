#include <bits/stdc++.h>
using namespace std;
bool check(vector <long long>a,int n){
    for(int i=n-1;i>=0;i--){
        int r=i-1,l=0;
        while(l<r){
            long long tmp=a[r]*a[r]+a[l]*a[l];
            if(tmp==a[i]*a[i])return true;
            else if(tmp>a[i]*a[i]) --r;
            else l++;
        }
    }
    return false;
}
int main(){
    int n; cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    if(check(a,n)) cout<<"YES";
    else cout<<"NO";
}