#include <iostream>    //DIVIDE AND CONQUER
using namespace std;
void merge(int arr[],int start,int mid,int end)
{
    int i = mid-start+1;
    int j = end-mid;
    int s[i];
    int e[j];
        

}
void mergesort(int arr[],int start,int end)
{ if(start<end){
    int mid = start -(end-start)/2;
    mergesort(arr,start,mid);    //left
    mergesort(arr,mid+1,end);    //right
    merge(arr,start,mid,end);
    }
}
int main()
{
    
    return 0;
}
