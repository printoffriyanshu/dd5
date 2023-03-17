class Solution
{
    public:
    int lis(int n,int a[],int curr,int prev, vector<vector<int>>v){
        if(curr==n) return 0;
        if(v[curr][prev+1]!=-1) return v[curr][prev];
        int take=0;
        if(prev==-1||a[curr]>a[prev]){
            take=1+lis(n,a,curr+1,curr,v);
        }
        
       
            
           int nottake=0+lis(n,a,curr+1,prev,v);
        
        return v[curr][prev+1] = max(take,nottake);
    }
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
        vector<vector<int>>v(n,vector<int>(n+1,-1));
        return lis(n,a,0,-1,v);
    }
};
