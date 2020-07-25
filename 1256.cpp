#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        char a;
        int k;
        cin>>a>>k;
        int H;
        H = (k - 3) % 2 == 0 ? (k - 3) / 2 : (k - 3) / 2 + 1;
        int Sw =  k / 6 + 1;
        string hk(H, ' '), hz(H, a), sk(Sw, ' '), sz(Sw, a);
        for(int i = 1;i <= k;i++){
            if(i == 1 || i == k || i == (k - 1 - H))
                cout<<sk<<hz<<sk<<endl;
            else cout<<sz<<hk<<sz<<endl;
        }
        if(n != 0)
        cout<<endl;
    }
    return 0;
}