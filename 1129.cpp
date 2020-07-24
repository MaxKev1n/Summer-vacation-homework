#include <iostream>
#include <string>
using namespace std;
void convert(int k, string a){
    int n, b[75], c[75];
    string d;
    for(n = 0;a[n] != '\0';n++);
    for(int i = 0;i < n;i++){
        if(a[i] == '_')
        b[i] = 0;
        if(a[i] == '.')
        b[i] = 27;
        if(a[i] >= 'a' && a[i] <= 'z')
        b[i] = a[i] - 'a' + 1;
        c[k * i % n] = (b[i] % 28 + i) >= 28 ? b[i] - 28 + i : b[i] + i;
    }
    for(int i = 0; i < n;i++){
        if(c[i] == 0)
        d[i] = '_';
        if(c[i] == 27)
        d[i] = '.';
        if(c[i] >= 1 && c[i] <= 26)
        d[i] = 'a' - 1 + c[i];
    }
    for(int i = 0;i < n;i++)
    cout<<d[i];
}
int main(){
    int k;
    while(cin>>k && k != 0){
        string a;
        cin>>a;
        convert(k, a);
        cout<<endl;
    }
    return 0;
}
