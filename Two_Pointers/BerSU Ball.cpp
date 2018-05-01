#include<cstdio>
#include<iostream>
#include<algorithm>
#define lli long long int
#define MAX 1000005

using namespace std;

lli dif(lli x, lli y)
{
    if(x>y) return x-y;
    return y-x;
}

int main()
{
    lli m,n,c,a[MAX], b[MAX];
    lli r,l;

    r=l=0;

    scanf("%I64d", &n);

    for(lli i=0; i<n; i++)
        scanf("%I64d", &a[i]);

    scanf("%I64d", &m);

    for(lli i=0; i<m; i++)
        scanf("%I64d", &b[i]);

    c=0;

    sort(a,a+n);
    sort(b,b+m);

    while(l<n&&r<m)
    {
        if(dif(a[l],b[r])<=1)
        {
            c++;
            l++;
            r++;
        }
        else
        {
            if(a[l]<b[r])
                l++;
            else
                r++;
        }
    }

    printf("%I64d\n", c);

    return 0;
}
