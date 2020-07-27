#include <iostream>
#include <string>
#include <map>
#include <cstring>
#include <algorithm>
using namespace std;
struct sell{
    map<string, int> species;
};
int main(){
    int n;
    cin>>n;
    while(n--){
        map<string, sell> places;
        map<string, sell> :: iterator itp;
        map<string, int> :: iterator its;
        int k;
        cin>>k;
        while(k--){
            string place, thing;
            int count;
            cin>>thing>>place>>count;
            places[place].species[thing] += count;
        }
        for(itp = places.begin();itp != places.end();itp++){
            cout<<itp->first<<endl;
            for(its = itp->second.species.begin();its != itp->second.species.end();its++){
                cout<<"   |----"<<its->first<<'('<<its->second<<')'<<endl;
            }
        }
        if(n != 0)
        cout<<endl;
    }
    return 0;
}