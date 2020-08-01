#include <iostream>
using namespace std;
int main(){
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int T;
    cin>>T;
    while(T--){
        int month, day;
        cin>>month>>day;
        if((month == 10 && day >21) || month  >10)
            cout<<"What a pity, it has passed!"<<endl;
        else if(month == 10 && day == 21)
            cout<<"It's today!!"<<endl;
        else{
            int d = 0;
            for(int i = 9;i >= month;i--){
                if( i == month)
                d += a[i - 1] - day;
                else d += a[i - 1];
            }
            if(month == 10)
            d += 21 - day;
            else d += 21;
            cout<<d<<endl;
        }
    }
    return 0;
}