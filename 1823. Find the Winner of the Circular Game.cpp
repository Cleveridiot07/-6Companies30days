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

class BruteForceSolution {
public:
    int findTheWinner(int n, int k) {
        vector<bool> arr(n, true);
        int count = n;
        int i = 0;

        while (count > 1) {
            int steps = k;
            while (steps > 0) {
                if (arr[i]) {
                    steps--;
                }
                if (steps > 0) {
                    i = (i + 1) % n;
                }
            }

            arr[i] = false;
            count--;

            do {
                i = (i + 1) % n;
            } while (!arr[i]);
        }

        for (int j = 0; j < n; j++) {
            if (arr[j]) return j + 1;
        }

        return -1;
    }
};

class OptimalSolution {
public:
int f(int n,int k){
    if(n==1){
        return 0;
    }else{
        return (f(n-1,k)+k)%n;
    }
}
    int findTheWinner(int n, int k) {
       return f(n,k) +1;
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