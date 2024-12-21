<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
    }
    }
    int lr_sum=0,rl_sum=0;
    for(int i=0;i<n;i++){
        lr_sum+=arr[i][i];
        rl_sum+=arr[i][n-i-1];
    }
    int result=abs(lr_sum-rl_sum);
    cout<<result;  
}
=======
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
    }
    }
    int lr_sum=0,rl_sum=0;
    for(int i=0;i<n;i++){
        lr_sum+=arr[i][i];
        rl_sum+=arr[i][n-i-1];
    }
    int result=abs(lr_sum-rl_sum);
    cout<<result;  
}
>>>>>>> 39127ef4f00ef4cb86f26bcab87f63f0e8f05ef9
