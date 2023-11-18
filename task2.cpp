#include <iostream>

using namespace std;
int searchletter(string result, char letter);

int main()
{
    int size;
    char letter;
    cout << "Enter how many words you want to enter:  to : ";
    cin >> size;
    string sentence[size];
    string result = "";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter word " << i + 1 << ": ";
        cin >> sentence[i];
        result = result + sentence[i];
    }
    cout << "Enter the letter you want to count: ";
    cin >> letter;
    int times = searchletter(result, letter);
    cout << letter << " shows up " << times << " in the data.";
}
int searchletter(string result, char letter)
{
    int count=0;
    for (int i = 0 ; result[i] != '\0'; i++)
    {
        if (letter == (result[i]))
        {
            count++;
        }
    }
    return count;
}