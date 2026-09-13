#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &vec, int start, int mid, int end)
{
  vector<int> temp;
  int i = start;
  int j = mid + 1;

  while(i <= mid && j <= end){
    if(vec[i] < vec[j]){
      temp.push_back(vec[i]);
      i++;
    }
    else{
      temp.push_back(vec[j]);
      j++;
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

}

void mergesort(vector<int> &vec, int start, int end)
{
  if(start >= end){
    return ;
  }

    int mid = start + (end - start)/2;

    mergesort(vec, start, mid); // leftside

    mergesort(vec, mid+1, end); // Rightside

    merge(vec, start, mid, end);

  }


int main(){

  vector<int> vec = {3, 5, 7, 1};
  mergesort(vec, 0, vec.size() - 1);

  for(int i=0; i<vec.size(); i++){
    cout << vec[i] << " ";
  }





  return 0;
}