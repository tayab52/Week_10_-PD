#include <iostream>
#include<cmath>

using namespace std;
bool isCycle(int array[],int arraylength,int cyclelength);

int main()
{
    int arraylength;
    int cyclelength;
    cout << "Enter the length of the array: ";
    cin >> arraylength;
    int array[arraylength];
    for (int i = 0; i < arraylength; i++)
    {
        cin >> array[i];
    }
    cout << "Enter the length of the cycle: ";
    cin >> cyclelength;
    if (cyclelength > arraylength){
        cout<<"Output: "<< true;
        return 0;
    }
    cout<<"Output: "<<isCycle(array,arraylength,cyclelength);
}

bool isCycle(int array[],int arraylength,int cyclelength){
    int times=ceil(arraylength/cyclelength);
    int count=1,length;
    int i=cyclelength;
    int size=cyclelength+cyclelength;
    for (int idx = 0; idx < (times); idx++)
    {
       while (i<size)
       {
        if(array[i]==array[i-cyclelength]){
            count++;
        }
       i++;
       }
        size+=cyclelength;
       if (size>arraylength)
       {
        length=(size-arraylength);
        size=arraylength;
       }
    }
    if(count==(cyclelength*(times-1)+(length-1))){
        return true;
    }
    else{
        return false;
    }
    
}