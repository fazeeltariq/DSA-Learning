#include<bits/stdc++.h>
using namespace std;

void merge (vector<int> &vec , int start , int end)
{
   int mid = start + (end - start)/2;
   int i = start;
   int j = mid + 1;
   vector<int> temp;

   while (i <= mid && j <= end)
   {
      if(vec[i] < vec[j])
      {
         temp.push_back (vec[i]);
         i++;
      }
      else{
         temp.push_back (vec[j]);
         j++;
      }
   }
   while (i <= mid)
   {
      temp.push_back (vec[i]);
      i++;
   }
   while (j <= end)
   {
      temp.push_back (vec[j]);
      j++;
   }
   vec = temp; 
   
}
void merge_sort (vector<int> &vec , int start , int end)
{
   if (start >= end) return;

   int mid = start + (end - start)/2;
   merge_sort (vec , start , mid);
   merge_sort (vec, mid+1, end);
    merge (vec , start , end );
}
int main()
{
   int n;
   cin >> n;
   vector<int> vec (n);
   for (int i = 0; i < n; i++)
   {
      cin >> vec[i];
   }
   merge_sort (vec, 0 , n - 1);

   for (int i = 0; i < n; i++)
   {
      cout << vec[i] << " ";
   }
   
   
   return 0;
}