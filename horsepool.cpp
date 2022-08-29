#include <iostream>
#include <string>
using namespace std;
#define MAX 500
int t[MAX];
void shifttable(string p)
{
    int i, j, m;
    m = p.length();
    for (i = 0; i < MAX; i++)
        t[i] = m;
    for (j = 0; j < m - 1; j++)
        t[p[j]] = m - 1 - j;
}

int horspool(string src, string p)
{
    int i, j, k, m, n;
    n = src.length();
    m = p.length();
    printf("\nLength of text=%d", n);
    printf("\nLength of pattern=%d", m);
    i = m - 1;
    while (i < n)
    {
        k = 0;
        while ((k < m) && (p[m - 1 - k] == src[i - k]))
            k++;
        if (k == m)
            return (i - m + 1);
        else
            i += t[src[i]];
    }
    return -1;
}

int main()
{
    string src, p;
    int pos;
    cout << "Enter the text : " << endl;
    getline(cin, src);
    cout
        << "Enter the pattern to be searched: " << endl;
    getline(cin, p);
    shifttable(p);
    pos = horspool(src, p);
    if (pos >= 0)
        printf("\nThe desired pattern was found starting from position %d\n", pos + 1);
    else
        printf("\nThe pattern was not found in the given text\n");
}