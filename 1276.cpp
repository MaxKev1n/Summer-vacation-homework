#include <iostream>
#include <vector>
using namespace std;
struct warriors{
    int num;
    int count;
    bool is = true;
};
int main(){
    int n;
    cin>>n;
    while(n--){
        vector<warriors> w;
        int k;
        cin>>k;
        for(int i = 1;i <= k;i++){
            warriors temp;
            temp.num = i;
            w.push_back(temp);
        }
        while(w.size() > 3){
            for(int i = 0;i < w.size();i++){
                if(i % 2 == 0)
                w[i].is = false;
            }
            for(int i = 0;i < w.size();i++){
                if(!w[i].is)
                w.erase(w.cbegin() + i + 1);
                cout<<w[i].num<<endl;
            }
            cout<<"**2"<<endl;
            cout<<w.size()<<"*"<<endl;
            if(w.size() <= 3)
            break;
            for(int i = 0;i < w.size();i++){
                if(i % 3 == 0)
                w[i].is = false;
            }
            for(int i = 0;i < w.size();i++){
                if(!w[i].is)
                w.erase(w.cbegin() + i + 1);
                cout<<w[i].num<<endl;
            }
            cout<<"**3"<<endl;
        }
        cout<<"***"<<endl;
        cout<<w.size()<<endl;
        for(int i = 0;i < w.size();i++)
        cout<<w[i].num<<endl;
    }
    return 0;
}