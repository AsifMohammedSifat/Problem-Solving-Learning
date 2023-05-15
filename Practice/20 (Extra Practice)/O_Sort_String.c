#include<stdio.h>
#include<string.h>
 
int main()
{
    int n;
    scanf("%d\n", &n);//taking the length from user
    char c;
    int cnt[26]= {0};
 
    for (int  i = 0; i <n; i++)
    {
        scanf("%c", &c);
        cnt[c-'a']++;
    }
    for (int i = 0; i <26; i++)
    {
        if (cnt[i]>0)
        {
            for (int j= 0; j <cnt[i]; j++)
            {
                printf("%c",i+'a');
            }
 
        }
    }
}
