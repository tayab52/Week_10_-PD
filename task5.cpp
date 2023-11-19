#include <iostream>

using namespace std;
void sortedData(int packages[]);

int main()
{
    int packages[10];
    cout << "Enter the weight of the 10 packages: ";
    for(int i=0;i<10;i++){
        cin>>packages[i];
    }

    cout<<"Sorted array in ascending order: ";
    sortedData(packages);
    
    }
    void sortedData(int packages[]){
        int count;
        int result[10];
        for (int idx = 0; idx < 10; idx++)
        {
            count=0;
            for (int i = 0; i < 10; i++)
        {
        
            if (packages[idx]>packages[i])
            {
                count++;
            }    
        }
        result[count]=packages[idx];
        
    }
    cout<<"[";
    for (int j = 0; j < 10; j++)
    {
        cout<<result[j];
        if(j!=9){
            cout<<", ";
        }
    }
    cout<<"]";
    
    }