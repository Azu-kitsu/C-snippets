using namespace std;

#include <vector>
#include <set>
#include <deque>
#include <queue>
#include <map>
#include <string>

#include <algorithm>
#include <cmath>
#include <cstdlib> 
#include <iostream>

void random(int lb, int ub, int amount)
{
    // This program will create some sequence of random 
    // numbers on every program run within range lb to ub 
    for (int i = 0; i < amount; i++)
        cout << (rand() % (ub - lb + 1)) + lb << " ";
}

typedef long long ll;
typedef vector<int> vInt;
typedef vector<bool> vBool;
typedef vector<vector<int>> vvInt;
typedef vector<string> vString;
typedef pair<int, int> Point;

//if ((r1 < l2) || (r2 < l1)) then no intersection exits.
//else l = max(l1, l2) and r = min(r1, r2)

#define FORiN(N) for (int i = 0; i < N; i++)

int main()
{

}
