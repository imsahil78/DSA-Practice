// Bubble Sort
// Time Complexity: O(n^2)
// Space Complexity: O(1)


#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int>&vec)
{

  int n = vec.size() ; 

  for(int i=0; i<n-1; i++)
  {
    for(int j=0; j<n-i-1; j++)
    {
      if(vec[j] > vec[j+1])
      {
        swap(vec[j], vec[j+1]) ;
      }
    } 
  } 

} 

int main()
{

vector<int>vec = {4, 1, 5, 2, 3} ;

bubble_sort(vec) ;

for( int x : vec )

{
  cout << x << endl ;
}

  return 0;
}