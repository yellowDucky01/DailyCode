#include <iostream>
using namespace std;

int main()
{
    int n;
    int matched = 0;
    cin >> n;
    int arrayNumbers[n];
    bool visited[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arrayNumbers[i];
        visited[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (visited[i])
            continue;

        bool foundMatch = false;
        for (int k = i + 1; k < n; k++)
        {
            if (arrayNumbers[i] == arrayNumbers[k])
            {
                foundMatch = true;
                visited[k] = true;
            }
        }
        if (foundMatch)
            matched++;
    }

    cout << matched;
}