#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int j = 2;
        int k;
        cin>>k;
        while(k--){
            int x, y;
            cin>>x>>y;
            if(x == j){
                j = y;
            }
            else if(y == j)
                j = x;
            else continue;
        }
        cout<<j<<endl;
    }
}