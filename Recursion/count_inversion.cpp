#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int> &vec, int start, int mid, int end)
{
  vector<int> temp;
  int i = start;
  int j = mid + 1;
  int count = 0;

  while(i <= mid && j <= end){
    if(vec[i] <= vec[j]){
      temp.push_back(vec[i]);
      i++;
    }
    else{
      temp.push_back(vec[j]);
      j++;
      count += mid - i + 1;
    } 

  }

  while(i <= mid){
    temp.push_back(vec[i]);
    i++;
  }
   while(j <= end){
    temp.push_back(vec[j]);
    j++;
  }

  for(int index=0; index<temp.size(); index++){
    vec[start + index] = temp[index] ;
  }
  return count;
}

int mergesort(vector<int> &vec, int start, int end)
{
  if(start >= end){
    return 0 ;
  }

    int mid = start + (end - start)/2;

    int left = mergesort(vec, start, mid); // leftside

    int right = mergesort(vec, mid+1, end); // Rightside

    int merge_count = merge(vec, start, mid, end);

    return left + right + merge_count ;

  }


int main(){

  vector<int> vec = {3, 5, 7, 1};
  int count = mergesort(vec, 0, vec.size() - 1);
  cout << count ;

  return 0;
}