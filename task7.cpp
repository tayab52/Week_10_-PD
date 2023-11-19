#include <iostream>

using namespace std;
bool checkArranged(int array[], int size);
bool checkTwice(int array[],int size);

int main()
{
    int size;
    cout << "Enter the length of the array: ";
    cin >> size;
    cout << "Enter the elements of the array: " << endl;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << "Can be arranged: ";
    cout << checkArranged(array, size);
}
bool checkArranged(int array[], int size)
{
    bool value;
    int count = 0;
    for (int idx = 0; idx < size; idx++)
    {
        value = false;
        for (int j = 0; j < size; j++)
        {

            if ((array[idx] - 1) == array[j] || (array[idx] + 1) == array[j])
            {
                value = true;
            }

        }
        if (value)
        {
            count++;
        }
        
    }
bool twice=checkTwice(array,size);
    if (count == size && twice)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool checkTwice(int array[],int size){
    int count=0;
    for (int idx = 0; idx < size; idx++)
    {
       for (int i = 0; i < size; i++)
       {
        if(array[idx]==array[i]){
            count++;
        }
       }
       
    }
    if(count>size){
        return false;
    }
    else if(count<=size)
    {
        return true;
    }
    
}