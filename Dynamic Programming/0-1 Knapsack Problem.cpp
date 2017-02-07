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
    int w, n;
    cout << " The value Of total wait :";
    cin >> w;
    cout << "The number of wait :";
    cin >> n;
    cout << "enter wait and its value :"<< endl;
    int wt[n], value[n];
    //wt[0]= 0;
    //value[0] = 0;
    for(int i = 0; i<n; i++)
        cin>> wt[i] >> value[i];
    int result[n+1][w+1];
    for(int i = 0; i <=n; i++){
        for(int j=0; j <= w; j++){
            if(i==0 || j==0)
                result[i][j] = 0;
            else if( wt[i-1] <= j ){
                int temp = value[i-1]+ result[i-1][(j-wt[i-1])];
                result[i][j] = max( temp , result[i-1][j]);
            }
            else
                result[i][j] = result[i-1][j];
        }
    }

    cout  << result[n][w]<< endl;
    return 0;

}
