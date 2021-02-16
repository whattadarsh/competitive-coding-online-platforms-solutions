#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

/// Problem: https://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/
/// Solution: https://www.youtube.com/watch?v=5nMGY4VUoRY&list=PLgUwDviBIf0rPG3Ictpu74YWBQ1CaBkm2&index=3


int *findTwoElement(int *arr, int n) {
    set<int> s;
    int a[2];
    int *ans = (int *)malloc(sizeof(int));
    
    for(int i = 1; i <= n; i++){
        s.insert(i);
    }
    
    for(int i = 0; i < n; i++){
        if(s.find(arr[i]) != s.end()){
            s.erase(arr[i]);
        }
        else{
            ans[0] = arr[i];
        }
    }
    // cout<<"->"<<*s.begin()<<"\n";
    ans[1] = *(s.begin());
    return ans;
}

int main(){
  int n = 0;
  cin>>n;
  int arr[n];
  for(int i = 0; i < n; i++){
    cin>>arr[i];
  }
  int *a = findTwoElement(arr, n);
  cout<<a[0]<<" "<<a[1]<<"\n";
  return 0;
}