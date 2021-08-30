#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string b;
        cin>>b;
        vector<string>a;
        a.push_back(b[0]);
        for(int i=1;i<b.size()-1;i++)
        {
            if(b[i]==b[i+1])
                a.push_back(b[i]);

        }
        for(int i=0;i<a.size();i++)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
