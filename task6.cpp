#include <iostream>

using namespace std;
void reverseString(string line);

int main()
{
    string line;
    cout << "Enter a string: ";
    getline(cin, line);
    cout << "Reversed string: ";
    reverseString(line);
}
void reverseString(string line)
{
    string result[10];
    int count = 0;
    for (int i = 0; line[i] != '\0'; i++)
    {
        result[count] = result[count] + line[i];
        if (line[i] == ' ')
        {
            count++;
            continue;
        }
    }
    for (int i = count; i >= 0; i--)
    {
        cout << result[i];
        if (i == count)
            cout << " ";
    }
}