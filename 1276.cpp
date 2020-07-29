#include <iostream>
#include <vector>
using namespace std;
struct warriors{
    int num;
    bool is = true;
};
int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        vector<warriors> w;
        for(int i = 1;i <= k;i++){
            warriors temp;
            temp.num = i;
            w.push_back(temp);
        }
        while(1){
            for(int i = 0;i < w.size();i++){
                if((i + 1) % 2 == 0)
                w[i].is = false;
            }
            vector<warriors>::iterator iter = w.begin();
            while(iter != w.end()){
                if((*iter).is == false)
                    iter = w.erase(iter);
                else ++iter;
            }
            if(w.size() <= 3)
            break;
            for(int i = 0;i < w.size();i++){
                if((i + 1) % 3 == 0)
                w[i].is = false;
            }
            iter = w.begin();
            while(iter != w.end()){
                if((*iter).is == false)
                    iter = w.erase(iter);
                else ++iter;
            }
            if(w.size() <= 3)
            break;
        }
        for(auto iter = w.begin();iter != w.end();++iter){
            if(iter == w.begin())
                cout<<(*iter).num;
            else cout<<" "<<(*iter).num;
        }
        cout<<endl;
    }
    return 0;
}