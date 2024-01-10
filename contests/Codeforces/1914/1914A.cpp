#include <iostream>
int main()
{
    using namespace std;
    int t, strSize, uniqueLetters;
    cin >> t;
    while (t--)
    {
        cin >> strSize;
        char str[strSize];
        uniqueLetters = 0;
        int visited[26] = {0};
        cin >> str;
        for (int i = 0; str[i] != '\0'; ++i)
        {
            if (visited[int(str[i]) - int('A')] < int(str[i]) - int('A') + 1)
            {
                visited[int(str[i]) - int('A')]++;
            }
            if (visited[int(str[i]) - int('A')] == int(str[i]) - int('A') + 1)
            {
                uniqueLetters++;
                visited[int(str[i]) - int('A')]++;
            }
        }
        cout << uniqueLetters << endl;
    }
    return 0;
}