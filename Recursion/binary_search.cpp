#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int>vec, int target, int start, int end)
{

  if(start <= end){
    int mid = start + (end - start)/2 ;

    if(vec[mid] == target) return mid;

    else if(vec[mid] <= target){
      return binary_search(vec, target, mid+1, end);
    }

    else{
      return binary_search(vec, target, start, mid - 1);
    }
  } return -1 ;


}

int main()
{

  vector<int> vec = {1, 2, 3, 4 ,5};
  int target = 3;
  int start = 0;
  int end = vec.size() - 1;

  int ans = binary_search(vec, target, start, end) ;
  cout << ans;

}