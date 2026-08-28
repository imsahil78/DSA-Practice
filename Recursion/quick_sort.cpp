#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> &vec, int start, int end, int pivot){
  int i = start - 1;
  
  // left value pivot se choti right value badi eg 526413 = 21 3 564
  for(int j=start; j < end; j++){
    
    if(vec[j] < vec[pivot]){
      i++;
      swap(vec[i], vec[j]);

    }
  }
  
  i++;
  swap(vec[i], vec[pivot]);
  return i;
}

void quick_sort(vector<int> &vec, int start, int end){
  if(start >= end){
    return;
  }
  int pivot = end;  

  int index = solve(vec, start, end, pivot); // 21 3 564 = 3 pivot index left side smaller right greater

  quick_sort(vec, start, index-1); // left side

  quick_sort(vec, index+1, end); 

}

int main(){

  vector<int> vec = {5, 2, 6, 4, 1, 3};
  int start = 0;
  int end = vec.size() - 1;
  quick_sort(vec, start, end);

  for(auto p : vec){
    cout << p << " ";
  }

  return 0;
}