#include <stdio.h>
#include <string.h>

int main()
{
    char s[2001];
    while (scanf(" %s", s) == 1)
    {
        int counts[26] = {0};
        int len = strlen(s);
        for (int i = 0; i < len; i++)
        {
            counts[s[i] - 'a']++;
        }

        int max_count = 0;
        int max_char = 0;
        for(int i = 0;i<26;i++){
			if(counts[i]>max_count) max_count = counts[i];
		}

        int changes = len-max_count;

        printf("%d\n", changes);
    }

    return 0;
}
