#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define whl(tt) while(tt--)
bool isscramble(string s1,string s2){
    if (s1.compare(s2)==0)
    {
        return true;
    }
    int n=s1.size();
    if (s1.length()!=s2.length())
    {
        return false;
    }
    for (int i = 1; i < s1.size(); i++)
    {
       if (isscramble(s1.substr(0,i),s2.substr(0,i))&&isscramble(s1.substr(i,n-i),s2.substr(i,n-i)))
       {
        return true;
       }
       if (isscramble(s1.substr(0,i),s2.substr(n-i,i))&&isscramble(s1.substr(i,n-i),s2.substr(0,n-i)))
       {
        return true;
       }
       
    }
    
    return false;
    
    
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<isscramble(s1,s2);
return 0;
}