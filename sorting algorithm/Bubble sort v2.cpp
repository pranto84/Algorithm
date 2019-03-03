#include<iostream>
using namespace std;
void buble_sort(int arra[], int a, int b){
    bool swapped;
    for(int i=a; i<b; i++){
        swapped  =  false;
        for(int j=a; j<b-i; j++){
            if(arra[j] > arra[j+1]){     // use if(arra[j] < arra[j+1] for decreasing order;
                swap(arra[j], arra[j+1]);
                swapped = true;
            }
        }
        if(!swapped)
            break;
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
    buble_sort(arra, 0, n-1);
    printArray(arra, n);
    return 0;
}

