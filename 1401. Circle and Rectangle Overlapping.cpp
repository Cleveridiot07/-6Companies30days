#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <climits>
#include <string>
#include <iostream>
#include <stack>
#include <set>
using namespace std;

// Typedefs
typedef long long ll;
typedef double db;
typedef unsigned int ui;
typedef vector<ll> VT;
typedef pair<int, int> pii;

// Macros
#define sz(x) ((int)((x).size()))
#define max_val(a, b) (a < b ? b : a)
#define min_val(a, b) (a < b ? a : b)
#define cy cout << "YES" << endl;
#define cn cout << "NO" << endl;
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define fi first
#define se second

template <typename T>
void printVector(vector<T> &arr) {
    for (int i = 0; i < sz(arr); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

class Solution {
    double calDistance(int x1, int y1, int x2, int y2) {
        double a = pow(x2 - x1, 2); 
        double b = pow(y2 - y1, 2); 
        return sqrt(a + b);
    }
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        double r = (double)radius;
        double tempx = (double)x1;
        double tempy = (double)y1;

        // check if rectangle contains circle?
        if(xCenter >= x1 && xCenter <= x2 && yCenter >= y1 && yCenter <= y2) return true;

        while(tempy<=y2){
            if(calDistance(tempx,tempy,xCenter,yCenter) <= r) return true;
            tempy++;
        }
        tempy = y2;
        while(tempx <= x2){
            if(calDistance(tempx,tempy,xCenter,yCenter) <= r) return true;
            tempx++;
        }
        tempx = x2;
        while(tempy >= y1){
            if(calDistance(tempx,tempy,xCenter,yCenter) <= r) return true;
            tempy--;
        }
        tempy = y1;
        while(tempx <= x1){
            if(calDistance(tempx,tempy,xCenter,yCenter) <= r) return true;
            tempx--;
        }

        return false;
    }
};

void clever() {
    // write your code here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        clever();
    }
    return 0;
}