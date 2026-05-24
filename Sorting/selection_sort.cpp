// Selection Sort
// Time Complexity: O(n^2)
// Space Complexity: O(1)


#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int>&vec)
{

  int n = vec.size() ;

  for(int i=0; i<n-1; i++)
  {
    int minIndex = i ;

    for(int j=i+1; j<n; j++)
    {

    if(vec[minIndex] > vec[j]) 
      
      {
        minIndex = j ;
      }
    }

    swap(vec[minIndex], vec[i]) ;
  }

}

int main()
{

  vector<int> vec = {4, 1, 5, 2, 3} ;
  selection_sort(vec) ;

  for( int x : vec)
  {
    cout << x << endl;
  }

return 0;

}