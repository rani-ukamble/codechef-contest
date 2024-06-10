#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin>>t;
    while(t--){
        int n; cin>>n; 
        vector<int>v(n);
        vector<int>a(n);
        
        for(int i=0;i<n;i++){
            cin>>v[i]>>a[i];
        }
        
        int maxi=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            int s= a[i]*v[j]+v[i]*a[j];
            maxi = max(s, maxi);
        }
        }
        cout<<maxi<<endl;
    }
    
}
