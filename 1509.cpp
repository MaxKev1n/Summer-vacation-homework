#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct cod{
    string c;
    int p;
    int pri;
};
bool cmp(cod a, cod b){
    return a.pri < b.pri;
}
int main(){
    vector<cod> a;
    string x;
    while(cin>>x)
    if(x == "GET"){
        if(a.empty())
        cout<<"EMPTY QUEUE!"<<endl;
        else{
            cout<<a.front().c<<" "<<a.front().p<<endl;
            a.erase(a.begin());
        }
        continue;
    }
    else{
        cod temp;
        cin>>temp.c>>temp.p>>temp.pri;
        a.push_back(temp);
        sort(a.begin(), a.end(), cmp);
    }
    return 0;
}