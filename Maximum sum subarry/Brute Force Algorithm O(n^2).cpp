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

    for(int index = 0; index<n; index++){
            int sum = 0;
        for(int sub_ary_size = 1; sub_ary_size <= n; sub_ary_size++){
            if(sub_ary_size + index>n)
                break;
            sum += arr[index + sub_ary_size -1];
            ans = max(ans, sum);
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
    int max_sum ;
    max_sum = max_sum_subarray(ary, n);
    cout << max_sum << endl;
    return 0;

}
