#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <stack>
#include <queue>
#include <set>
#include <map>

using namespace std;
#define N 500+5
#define MAX 1000005

#define sci(a) scanf("%d", &a)
#define sci2(a,b) scanf("%d%d", &a, &b)
#define sci3(a, b, c) scanf("%d%d%d", &a, &b, &c)
#define scd(a) scanf("%lf", &a)
#define scd2(a,b) scanf("%lf%lf",&a,&b)
#define scd3(a, b, c) scanf("%lf%lf%lf", &a, &b, &c)

int wt[MAX], value[MAX];
int knapsack(int w,int n)
{
    vector<int>result[n+5];
    for(int i = 0; i <=n; i++){
        for(int j=0; j <= w; j++){
            if(i==0 || j==0)
                result[i].push_back(0);
            else if( wt[i-1] <= j ){
                int temp = value[i-1]+ result[i-1][(j-wt[i-1])];
                result[i].push_back(max(temp, result[i-1][j]));
            }
            else
                result[i].push_back(result[i-1][j]);
        }
    }
    return result[n][w];
}
int main()
{
    int w, n;
    sci2(w,n);
    for(int i=0; i<n; i++)
        sci2(wt[i], value[i]);
    int ans = knapsack(w,n);
    printf("%d\n", ans);

    return 0;
}

