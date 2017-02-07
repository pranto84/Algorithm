#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <climits>
#include <cstdio>

using namespace std;
int main()
{
    string one, two ;
    getline(cin, one);
    getline(cin, two);
    int len1 = one.size();
    int len2 = two.size();
    int result[len2+1][len1+1];
    for(int i = 0; i <= len2; i++){
        for(int j = 0; j<= len1; j++){
            if(i == 0 || j==0)
                result[i][j] = 0;
            else if(one[j-1] == two[i-1])
                result[i][j] = result[i-1][j-1] +1;
            else{
                result[i][j] = max(result[i][j-1], result[i-1][j]);
            }
        }
    }
    cout << "The maximum subsequence is :" << result[len2][len1] << endl;
    return 0;
}
