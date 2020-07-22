#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
const double N = 12.0 * 3600.0;
double hours = 360.0 / (3600 * 12);
double mins = 360.0 / 3600;
double secs = 360.0 / 60;
double hm_ = mins - hours;
double hs_ = secs - hours;
double ms_ = secs - mins;
int main(){
    double k;
    while(cin>>k && k != -1){
        double ans = 0.0;
        double hs1 = k / hs_;
        double hm1 = k / hm_;
        double ms1 = k / ms_;
        double hs2 = (360.0 - k) / hs_;
        double hm2 = (360.0 - k) / hm_;
        double ms2 = (360.0 - k) / ms_;
        double HS = 360.0 / hs_;
        double HM = 360.0 / hm_;
        double MS = 360.0 / ms_;
        for (double hs = 0.0; hs <= N; hs += HS) {
            for (double hm = 0.0; hm <= N; hm += HM) {
                if (hm + hm2 < hs + hs1) continue;
                if (hs + hs2 < hm + hm1) break;
                for (double ms = 0.0; ms <= N; ms += MS) {
                    if (ms + ms2 < hs + hs1 || ms + ms2 < hm + hm1) continue;
                    if (hm + hm2 < ms + ms1 || hs + hs2 < ms + ms1) break;
                    double res1 = max(max(hs + hs1, hm + hm1), ms + ms1);
                    double res2 = min(min(hs + hs2, hm + hm2), ms + ms2);
                    if (res1 < res2) ans += res2 - res1;
                }
            }
        }
        cout<<showpoint<<fixed<<setprecision(3)<<ans / N * 100.0<<endl;
    }
    return 0;
}
