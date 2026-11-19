#include <iostream>
using namespace std;
int main()
{
    int n,k,missing;
    int tot=0;
    int tot1=0;
    
    cin>>n;
    for(int k=1;k<=n;k++)
    {
        tot1+=k;
    }
    
    for(int i=1;i<n;i++)
    {
        cin>>k;
        tot+=k;
    }
    missing=tot1-tot;
    cout<<missing;
    return 0;

}