#include <iostream>
#include <string>
using namespace std;
struct number{
    char num;
    string n1;
    string n2;
    string n3;
    string n4;
    string n5;
};
int main(){
    number n[10];
    for(int i = 0;i < 10;i++){
        n[i].num = i + '0';
        if(i != 1 && i != 4)
        n[i].n1 = " - ";
        else
        n[i].n1 = "   ";
        if( i == 2 || i == 3 || i == 7 || i == 1)
        n[i].n2 = "  |";
        else if(i == 4 || i == 8 || i == 9 || i == 0)
        n[i].n2 = "| |";
        else
        n[i].n2 = "|  ";
        if(i == 1 || i == 7 || i == 0)
        n[i].n3 = "   ";
        else n[i].n3 = " - ";
        if( i == 4 || i == 3 || i == 7 || i == 9 || i == 5 || i == 1)
        n[i].n4 = "  |";
        else if(i == 8 || i == 6 || i == 0)
        n[i].n4 = "| |";
        else
        n[i].n4 = "|  ";
        if(i == 1 || i == 7 || i == 4)
        n[i].n5 = "   ";
        else n[i].n5 = " - ";
    }
    int x;
    string a;
    while(cin>>x>>a && x != 0 && a != "0"){
        for(int i = 0;i < a.size();i++){
            cout<<n[a[i] - '0'].n1[0];
            for(int k = 0;k < x;k++)
            cout<<n[a[i] - '0'].n1[1];
            cout<<n[a[i] - '0'].n1[2];
        }
        cout<<endl;
        for(int j = 0;j < x;j++){
            for(int i = 0;i < a.size();i++){
            cout<<n[a[i] - '0'].n2[0];
            for(int k = 0;k < x;k++)
            cout<<n[a[i] - '0'].n2[1];
            cout<<n[a[i] - '0'].n2[2];
        }
        cout<<endl;
        }
        for(int i = 0;i < a.size();i++){
            cout<<n[a[i] - '0'].n3[0];
            for(int k = 0;k < x;k++)
            cout<<n[a[i] - '0'].n3[1];
            cout<<n[a[i] - '0'].n3[2];
        }
        cout<<endl;
        for(int j = 0;j < x;j++){
            for(int i = 0;i < a.size();i++){
            cout<<n[a[i] - '0'].n4[0];
            for(int k = 0;k < x;k++)
            cout<<n[a[i] - '0'].n4[1];
            cout<<n[a[i] - '0'].n4[2];
        }
        cout<<endl;
        }
        for(int i = 0;i < a.size();i++){
            cout<<n[a[i] - '0'].n5[0];
            for(int k = 0;k < x;k++)
            cout<<n[a[i] - '0'].n5[1];
            cout<<n[a[i] - '0'].n5[2];
        }
        cout<<endl;
    }
    return 0;
}