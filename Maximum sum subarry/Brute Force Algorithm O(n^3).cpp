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

    for(int sub_arr_size = 1; sub_arr_size <= n; sub_arr_size++){
        for(int index = 0; index<n; index++){
            int sum = 0;
            if(sub_arr_size + index>n)
                break;
            for(int start = index; start < sub_arr_size; start++){
                sum += arr[start];
            }
            ans = max(sum, ans);
        }
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
