//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int st(string s,string t,int n,int m,vector<vector<int>> v){
      if(n==0||m==0) return 0;
      if( v[n][m]!=-1) return  v[n][m];
      if(s[n]==s[m]) return v[n][m]=st(s,t,n-1,m-1,v);
      return v[n][m]= 1+min({ st(s,t,n-1,m-1,v), st(s,t,n,m-1,v), st(s,t,n-1,m,v)});
      
      
  }
    int editDistance(string s, string t) {
        int n=s.size(),m=t.size();
        vector<vector<int>> v(n+1,vector<int>(m+1,-1));
        
        return st(s,t,n-1,m-1,v);
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
