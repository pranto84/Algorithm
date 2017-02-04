#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <climits>
#include <cstdio>

using namespace std;
int max_sum_subarray(int arr[] , int n)
{
    int ans = INT_MIN;
    int sum = 0;
    for(int i= 0; i<n; i++){
        if(arr[i] + sum > 0)
            sum += arr[i];
        else sum = 0;
        ans = max(ans, sum);
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the size of array:  ";
    cin >> n;
    int ary[n];
    for(int i = 0; i<n; i++)
        cin >> ary[i];
    int sum ;
    sum = max_sum_subarray(ary, n);
    cout << sum << endl;
    return 0;

}
