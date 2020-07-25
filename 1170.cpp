#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        char oper;
        int a, b;
        cin>>oper;
        cin>>a>>b;
        switch(oper){
            case '+' :{
                cout<<a+b<<endl;
                break;
            }
            case '-' :{
                cout<<a-b<<endl;
                break;
            }
            case '*' :{
                cout<<a*b<<endl;
                break;
            }
            case '/' :{
                if(a % b != 0)
                cout<<fixed<<setprecision(2)<<a/(double)b<<endl;
                else cout<<a/b<<endl;
            }
        }
    }
    return 0;
}