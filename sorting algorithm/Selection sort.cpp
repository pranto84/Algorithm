#include<iostream>
using namespace std;
void Selection_sort(int arra[], int a, int b){
    for(int i=a; i<b; i++){
        int min_idx = i;      // minimum index
        for(int j=i+1; j<b; j++){
            if(arra[min_idx] > arra[j])         // use if(arra[min_idx] < arra[j]) for decreasing order
                min_idx = j;
        }
        swap(arra[i], arra[min_idx]);
    }
}
void printArray(int A[], int n){
    for(int i=0; i<n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arra[1000];
    int n;
    cout << "Enter the size of array:\n";
    cin >> n;
    cout << "Enter the element of array:\n";
    for(int i=0; i<n; i++)
        cin >> arra[i];
    Selection_sort(arra, 0, n);
    printArray(arra, n);
    return 0;
}
