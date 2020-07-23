#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
struct time{
    char t[5];
    int p, T;
};
int main(){
    while(1){
        int a, b, c;
        cin>>a>>b>>c;
        queue<int> x;
        queue<int> y;
        queue<int> z;
        if(a == 0 && b == 0 && c == 0)
        break;
        time m[1005];
        int count = 0, num = 0;
        for(int i = 0;;i++){
            cin>>m[i].t;
            if(strcmp(m[i].t, "#") == 0)
                break;
            cin>>m[i].p;
            m[i].T = (m[i].t[0] - '0') * 10 * 60 + (m[i].t[1] - '0') * 60 +(m[i].t[3] - '0') * 10 + (m[i].t[4] - '0');
            count++;
        }
        for(int i = 0;i < count;i++){
            if(m[i].p <= 2){
                if(a > 0){
                    x.push(m[i].T + 30);
                    a--;
                    num += m[i].p;
                }
                else{
                    if(m[i].T + 30 >= x.front()){
                        int temp = x.front();
                        x.pop();
                        if(m[i].T < temp)
                            x.push(temp + 30);
                        else
                            x.push(m[i].T + 30);
                        num += m[i].p;
                    }
                }
            }
            if(m[i].p <= 4 && m[i].p >2){
                if(b > 0){
                    y.push(m[i].T + 30);
                    b--;
                    num += m[i].p;
                }
                else{
                    if(m[i].T + 30 >= y.front()){
                        int temp = y.front();
                        y.pop();
                        if(m[i].T < temp)
                            y.push(temp + 30);
                        else
                            y.push(m[i].T + 30);
                        num += m[i].p;
                    }
                }
            }
            if(m[i].p >= 5){
                if(c > 0){
                    z.push(m[i].T + 30);
                    c--;
                    num += m[i].p;
                }
                else{
                    if(m[i].T + 30 >= z.front()){
                        int temp = z.front();
                        z.pop();
                        if(m[i].T < temp)
                            z.push(temp + 30);
                        else
                            z.push(m[i].T + 30);
                        num += m[i].p;
                    }
                }
            }
        }
        cout<<num<<endl;
    }
    return 0;
}