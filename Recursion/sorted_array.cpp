// problem = is array sorted
// time complexity = 0(n)
// space complexity = 0(n)

#include <iostream>
#include <vector>
using namespace std;

bool is_sorted(vector<int> vec, int n){

  if(n == 1 || n == 0){
    return true;
  }

  return vec[n - 1] >= vec[n - 2] && is_sorted( vec, n-1) ;

}

int main()
{

  vector<int> vec = {1, 2, 3, 4, 5} ;
  int n = vec.size() ;
  cout << is_sorted(vec, n) ;

}