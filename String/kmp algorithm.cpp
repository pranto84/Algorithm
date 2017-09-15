// prefix search array 

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
#define N 10000005
#define MAX 100005

#define sci(a) scanf("%d", &a)
#define sci2(a,b) scanf("%d%d", &a, &b)
#define sci3(a, b, c) scanf("%d%d%d", &a, &b, &c)
#define scd(a) scanf("%lf", &a)
#define scd2(a,b) scanf("%lf%lf",&a,&b)
#define scd3(a, b, c) scanf("%lf%lf%lf", &a, &b, &c)

int result[MAX];

void kmp(int n, string str){
    int cnt = 0;
    int j=0;
    for(int i = 1; i<n; i++){
        if(str[j] == str[i]){
            result[i] = j+1;
            j++;
        }
        else if(str[j] != str[i]){
            while(j!=0){
                j = result[j-1];
                if(str[j] == str[i]){
                  result[i]= j+1;
                  j++;
                  break;
                }

            }
        }
    }
}

int main()
{
    string str;
    cout << "Enter the string : \n";
    cin >> str;
    int len = str.size();
    kmp(len, str);
    cout << "matching accross potion :\n";
    for(int i=0; i<len; i++){
        cout << result[i] << " ";
    }
    return 0;
}
