/*
* Solution to Different is Good, codeforces 352, div 2
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<bits/stdc++.h>

using namespace std;

int freq(string s)
{
    int h[27]={0};
    int t=0;
    for(int i=0; i<s.length(); i++)
        t+= (h[s[i]-96]++) == 0;
    return t;
}

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    string s;
    getline(cin,s);

    int k=freq(s);

    if(n>26)
    printf("-1\n");
    else
    printf("%d\n", n-k);


    return 0;
}
