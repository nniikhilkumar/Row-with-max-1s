#include<iostream>
using namespace std;
int main(){
    int r,c;cin>>r>>c;
    int arr[r][c];
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cin>>arr[i][j];
        }
    }
    int n=0,k=0,g=c;
    for(int i=1;i<=r;i++){
        int a=0;
        for(int j=1;j<=g;j++){
            if(arr[i][j]==1){
                g=j;
                a=c+1-j;
            }
        }
        if(a>n){
            n=a;
            k=i;
        }
    }
    cout<<k;
    return 0;
}
