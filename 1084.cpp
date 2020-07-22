#include <iostream>
using namespace std;
struct student{
    char time[8];
    int t = 0;
    int score;
};
int main(){
    int n;
    cin>>n;
    student s[n];
    int a[4][105];
    for(int i = 0;i < n;i++){
        cin>>s[i].score;
        if(s[i].score > 0 && s[i].score < 5){
            a[s[i].score][0]++;
            int x = a[s[i].score][0];
            a[s[i].score][x] = i;
        }
        for(int j = 0;j < 8;j++)
        cin>>s[i].time[j];
        s[i].t += s[i].time[7] - '0';
        s[i].t += (s[i].time[6] - '0') * 10;
        s[i].t += (s[i].time[4] - '0') * 60;
        s[i].t += (s[i].time[3] - '0') * 10 * 60;
        s[i].t += (s[i].time[1] - '0') * 3600;
        s[i].t += (s[i].time[0] - '0') * 10 * 3600;
        s[i].score = 50 + 10 * s[i].score;
    }
    for(int i = 1;i < 5;i++){
        for(int j = 2;j <= a[i][0];j++){
            for(int k = 2;k <= a[i][0] - j;k++){
                if(s[a[i][k-1]].t > s[a[i][k]].t)
                swap(s[a[i][k-1]], s[a[i][k]]);
            }
        }
        for(int j = 1;j <= a[i][0] / 2;j++)
            s[a[i][j]].score += 5;
    }
    for(int i = 0;i < n;i++)
    cout<<s[i].score<<endl;
    return 0;
}