// Insertion Sort
// Best Case Time Complexity: O(n)
// Average Case Time Complexity: O(n^2)
// Worst Case Time Complexity: O(n^2)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int>&vec)
{
    int n = vec.size() ;
    
    for( int i=1; i<n; i++)
    {   int current = vec[i] ;
        int prev = i - 1 ;
        
        while( prev >= 0 && current < vec[prev] )
        {
            vec[prev+1] = vec[prev] ;
            prev -- ;
        }

        vec[prev + 1] = current ;
    }
}


int main()
{

  vector<int> vec = {4, 1, 5, 2, 3} ;
  insertion_sort(vec) ;

  for( int x : vec )
  {
    cout << x << endl ;
  }

  return 0;
}