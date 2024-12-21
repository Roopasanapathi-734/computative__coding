<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s,t;
    cin>>s>>t;
    int a,b;
    cin>>a>>b;
    int m,n;
    cin>>m>>n;
    vector<int>app(m);
    vector<int>org(n);
    for(int i=0;i<m;i++){
        cin>>app[i];
    }
    for(int i=0;i<n;i++){
        cin>>org[i];
    }
    int a1=0,a2=0;
    for(int i=0;i<m;i++){
        int d=app[i]+a;
        if(d>=s&& d<=t){
            a1++;
        }
    }
    for(int i=0;i<n;i++){
        int c=org[i]+b;
        if(c>=s && c<=t){
            a2++;
        }
    }
    cout<<a1<<endl;
    cout<<a2<<endl;
    
}
=======
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s,t;
    cin>>s>>t;
    int a,b;
    cin>>a>>b;
    int m,n;
    cin>>m>>n;
    vector<int>app(m);
    vector<int>org(n);
    for(int i=0;i<m;i++){
        cin>>app[i];
    }
    for(int i=0;i<n;i++){
        cin>>org[i];
    }
    int a1=0,a2=0;
    for(int i=0;i<m;i++){
        int d=app[i]+a;
        if(d>=s&& d<=t){
            a1++;
        }
    }
    for(int i=0;i<n;i++){
        int c=org[i]+b;
        if(c>=s && c<=t){
            a2++;
        }
    }
    cout<<a1<<endl;
    cout<<a2<<endl;
    
}
>>>>>>> 39127ef4f00ef4cb86f26bcab87f63f0e8f05ef9
