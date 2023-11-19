#include <iostream>

using namespace std;
int dimensions(int side[], int size);

int main()
{
    int size;
    cout << "Enter the number of boxes: ";
    cin >> size;
    cout << "Enter the dimensions of the boxes (length, width, height ): " << endl;
    int side[size * 3];
    for (int j = 0; j < (size * 3); j++)
    {
        cin >> side[j];
    }
    int dimension = dimensions(side, size);
    cout << "Total volume of all boxes: " << dimension;
}

int dimensions(int side[], int size)
{
    int total=0;
    int area;

    for (int i = 0; i < (size*3); i+=3)
    {
        area=1;
        for (int idx=0; idx < 3; idx++)
        {
            area=area*side[i+idx];
        }
        total=total+area;
    }
    return total;
}