#include <iostream>
#include <math.h>
using namespace std;
bool isprime(int a){
    if(a < 2)
    return false;
    else{
        for(int i = 2;i <= (int)sqrt(a);i++){
            if(a % i == 0)
            return false;
        }
        return true;
    }
}
int main(){
    int n;
    while(cin>>n){
        for(int i = n / 2;i > 1;i--){
            if(isprime(i) && isprime(n - i)){
                cout<<i<<" "<<n - i<<endl;
                break;
            }
        }
    }
    return 0;
}