#include <bits/stdc++.h>
using namespace std;
class myString
{
private:
    int length;
    char *str;
public:

    myString()
    {
        str = (char*)malloc(sizeof(char) * 100 );
    }

    myString(int x)
    {
        str = (char*)malloc(sizeof(char) * x);
    }

    bool setter(char *st)
    {
        int i,l=0;
        for (i = 0 ; st[i] != '\0'; i++ )
        {
            l++;
        }
        if ( l <= length )
        {
            str = st;
            return true;
        }
        else
            return false;
    }

    void print_str()
    {
        char *s;
        s = str;
        cout << s << endl;
    }
};

/* int main()
{
    return 0;
} */
