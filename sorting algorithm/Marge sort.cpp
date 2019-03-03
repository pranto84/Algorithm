/*
Author : Pranto Chandra Saha
         Dept. of CSTE
         Noakhali Science and Technology University
Contact: Sahapranto32@gmail.com
*/

#include<iostream>
#include<cstdio>
using namespace std;

int marge(int ara[], int l, int m, int r){
    int i, j, k,n1, n2;
    n1 = m-l+1;
    n2 = r-m;
    int L[n1], R[n2];
    for(i=0; i<n1; i++)
        L[i] = ara[l+i];
    for(i=0; i<n2; i++)
        R[i] = ara[m+i+1];
    i=0, j=0, k=l;
    while(i<n1 && j<n2){
        if(L[i] <= R[j])        // use if(L[i] >= R[j]) // [for decreasing order ]
            ara[k++] = L[i++];
        else
            ara[k++] = R[j++];
    }
    while(i<n1){
        ara[k++] = L[i++];
    }
    while(j<n2)
        ara[k++] = R[j++];
}
int marge_sort(int ara[],int l, int r)
{
    if(l<r){
        int m = (l+r)/2;
        marge_sort(ara, l, m);
        marge_sort(ara, m+1, r);
        marge(ara, l, m, r);
    }

}
void printArray(int A[], int Size)
{
    int i;
    for (i=0; i < Size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
int main()
{
    int n;
    cin >> n;
    int ara[n+5];
    for(int i=0; i<n; i++){
        cin >> ara[i];
    }
    marge_sort(ara, 0, n-1);
    printArray(ara, n);

}
