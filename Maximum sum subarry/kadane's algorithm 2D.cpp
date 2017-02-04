#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <climits>
#include <cstdio>

using namespace std;

int kadane(int arr[], int n)
{
    int sum = 0;
    int ans = 0;
    for(int i = 0; i <n; i++){
        if(arr[i] + sum < 0)
            sum = 0;
        else
            sum += arr[i];
        ans = max(sum, ans);
    }
    return ans;
}

int main()
{
    int n, m;
    cout << "enter the row and collam  of a matrix" << endl;
    cin >>  n >> m;
    int matrix[n][m];
    int maxm = INT_MIN;
    for(int i = 0;i <n; i++){
        for(int j= 0; j<m; j++){
            cin >> matrix[i][j];
            maxm = max(maxm, matrix[i][j]);
        }
    }
    if(maxm <= 0){
        cout << maxm << endl;
        return 0;
    }
    int sum = INT_MIN;
    int ans;

    for(int left = 0; left<m; left++){
            int sub_arr[n] = {0};
        for(int right = left; right<m; right++){
            for(int i=0; i<n; i++){
                sub_arr[i] += matrix[i][right];
               }
            ans = kadane(sub_arr, n);
            sum = max(sum, ans);
        }
    }
    cout << sum << endl;
    return 0;
}

