#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin>> s;
    int ct=1;
    int prev=s[0];
    int best=1;
    for(int i=1; i<s.length();i++)
    {
      if(s[i]==prev)
      {
        ct++;
      }
      else{
        ct=0;
      }
      if(ct>best)
      {
        best=ct;
      }
      prev=s[i];  

    }
    cout<<best;
    return 0;
}