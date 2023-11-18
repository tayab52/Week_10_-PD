#include <iostream>

using namespace std;
int progressDays(int saturdaymiles[], int size);

int main()
{
   int size;
   cout << "Enter the number of Saturdays: ";
   cin >> size;
   int saturdaymiles[size];
   for (int i = 0; i < size; i++)
   {
      cout << "Enter miles run for Saturday " << i + 1 << ": ";
      cin >> saturdaymiles[i];
   }
   cout <<"Total progress days: "<< progressDays(saturdaymiles, size);
}
int progressDays(int saturdaymiles[], int size)
{
   int count=0;
   for (int idx = 0; idx < size-1; idx++)
   {
      if (saturdaymiles[idx]<saturdaymiles[idx+1])
      {
         count++;
      }
   }
   return count;
   
}