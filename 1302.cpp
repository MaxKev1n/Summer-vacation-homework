#include <iostream>
using namespace std;
int main(){
    double H, U, D, F;
    while(cin>>H>>U>>D>>F){
        if(H == 0)
        break;
        double h = 0;
        double U2 = U;
        bool is;
        int i;
        for(i = 1;;i++){
            h += U;
            if(h > H){
                is = true;
                break;
            }
            h -= D;
            if(h < 0){
                is = false;
                break;
            }
            if(U > 0)
            U = U - U2 * (F / 100.0);
            else U = 0;
        }
        if(is)
            cout<<"success on day ";
        else cout<<"failure on day ";
        cout<<i<<endl;
    }
}