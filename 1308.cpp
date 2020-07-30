#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
vector<string> weekdays = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
vector<string> months = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
map<int, int> md = {{1, 31}, {2, 28}, {3, 31}, {4, 30}, {5, 31}, {6, 30}, {7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31}};
int isleap(int year){
    if(year > 1582)
    return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
    else return year % 4 == 0;
}
bool check(int year, int month, int day){
    if(year <= 0 || month <= 0 || day <= 0)
    return false;
    if(year == 1752 && month == 9 && day >=3 && day <=13)
    return false;
    if(isleap(year)){
        if(month == 2 && day > 29)
        return false;
        if(day > md[month])
        return false;
    }
    else{
        if(day > md[month])
        return false;
    }
    return true;
}
int number(int year, int month, int day){
    int num = 0;
    for(int i = 1;i < year;i++){
        num += (isleap(i) ? 366 : 365);
    }
    for(int i = 1;i < month;i++){
        if(isleap(year))
        num += ((i == 2) ? md[i] + 1 : md[i]);
        else num += md[i];
    }
    num += day;
    return num;
}
int main(){
    int year, month, day;
    while(cin>>month>>day>>year){
        if(!check(year, month, day)){
            cout<<month<<'/'<<day<<'/'<<year<<" is an invalid date."<<endl;
            break;
        }
        int num = number(year, month, day);
        if(num > 639798)
        num -= 11;
        num -= 1;
        cout<<months[month - 1]<<" "<<day<<", "<<year<<" is a "<<weekdays[num % 7]<<endl;
    }
    return 0;
}
