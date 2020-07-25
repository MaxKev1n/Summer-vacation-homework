#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
struct student{
    int num;
    int count = 0;
    char time[8];
    int t = 0;
};
bool cmp(student s1, student s2)
{   if(s1.count != s2.count)
        return s1.count > s2.count;
    else return s1.t < s2.t;
}
int main(){
    int number, gold, silver, copper, M;
    while(1){
    cin>>number>>gold>>silver>>copper>>M;
    if(number == 0 && gold == 0 && silver == 0 && copper == 0 && M == 0)
    break;
    student s[number];
    for(int i = 0;i < number;i++){
        cin>>s[i].count;
        cin>>s[i].time;
        s[i].num = i + 1;
        s[i].t += s[i].time[7] - '0';
        s[i].t += (s[i].time[6] - '0') * 10;
        s[i].t += (s[i].time[4] - '0') * 60;
        s[i].t += (s[i].time[3] - '0') * 10 * 60;
        s[i].t += (s[i].time[1] - '0') * 3600;
        s[i].t += (s[i].time[0] - '0') * 10 * 3600;
    }
    sort(s, s + number - 1, cmp);
    student f;
    int n;
    for(int i = 0;i < number;i++)
        if(s[i].num == M){
            n = i + 1;
    }
    string a;
    if(n <= gold)
    a = "a gold medal";
    else if(n <= gold + silver)
    a = "a silver medal";
    else if(n <= gold + silver + copper)
    a = "a copper medal";
    else a = "an honor mentioned";
    cout<<"Accepted today? I've got" + a<<":)"<<endl;
    }
    return 0;
}