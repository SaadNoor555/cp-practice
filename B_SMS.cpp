#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>


using namespace std;

int main ()
{
    int t, j;
    int cnt = 0;
    char buf;
    scanf("%d%c", &t, &buf);

    while(t--)
    {
        cnt++;
        int i, count = 0;
        char s[110];
        fgets(s, 110, stdin);

        for(i=0;s[i] != '\0'; i++)
        {
            if(s[i] == 'a' || s[i] == 'd' || s[i] == 'g' || s[i] == 'j' || s[i] == 'm' || s[i] == 'p' || s[i] == 't' || s[i] == 'w' || s[i] == ' ')
                count += 1;

            else if(s[i] == 'b' || s[i] == 'e' || s[i] == 'h' || s[i] == 'k' || s[i] == 'n' || s[i] == 'q' || s[i] == 'u' || s[i] == 'x')
                count += 2;

            else if(s[i] == 'c' || s[i] == 'f' || s[i] == 'i' || s[i] == 'l' || s[i] == 'o' || s[i] == 'r' || s[i] == 'v' || s[i] == 'y')
                count += 3;

            else if(s[i] == 's' || s[i] == 'z')
                count += 4;
        }
        printf("Case #%d: %d\n", cnt, count);
    }

    return 0;
}