#include <iostream>

using namespace std;
int rotations(string array[], int size);

int main()
{
    int size;
    cout << "Enter the length of the array: ";
    cin >> size;
    cout << "Enter the elements of the array (left or right):" << endl;
    string array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int number = rotations(array, size);
    cout << "Number of full rotations: " << number;
}
int rotations(string array[], int size)
{
    int value = 0;
    for (int idx = 0; idx < size; idx++)
    {
        if (array[idx] == "right")
        {
            value += 90;
        }
        else if (array[idx] == "left")
        {
            value -= 90;
        }
    }
    value = value / 360;
    return value;
}