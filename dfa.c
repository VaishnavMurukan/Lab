#include <stdio.h>
void main()
{
    int state[10];
    int str[10], input[10];
    char ch;
    int x[20];
    int s, n, k=0, g, j, a, i, l, t, q=0, fs, b, nxt, z;
    printf("Enter the no. of states:");
    scanf("%d", &s);
    printf("Enter the no. of ips:");
    scanf("%d", &n);
    for(i=0; i<s; i++)
    {
        printf("\nEnter the state %d:", i+1);
        scanf("%d", &state[i]);
        printf("Is final state?...y...1//...n...0:");
        scanf("%d", &a);
        if(a==1)
        {
            fs = state[i];
        }
    }

    printf("\nEnter the input:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &input[i]);
    }

    printf("\nTransition state:");
    for(i=0; i<s; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\nq(%d,%d)=q", state[i], input[j]);
            scanf("%d", &b);
            x[k] = b;
            k++;
        }
    }

    do
    {
        printf("\nEnter the length of string:\n");
        scanf("%d", &l);
        printf("\nEnter the input string:\n");
        for(i=0; i<l; i++)
            scanf("%d", &str[i]);

        q = 0;
        for(i=0; i<l; i++)
        {
            t = 0;
            do
            {
                if(str[i] == input[t])
                {
                    nxt = x[n*q + t];
                    for(j=0; j<s; j++)
                    {
                        if(nxt == state[j])
                            q = j;
                    }
                    t++;
                }
                else
                    t++;
            } while(t != n);
        }

        if(q == fs)
            printf("String accepted.....");
        else
            printf("String not accepted.....");

        printf("\nDo you want to continue...If yes press 1 otherwise 0:");
        scanf("%d", &z);
    } while(z == 1);
}

