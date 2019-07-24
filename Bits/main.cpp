#include <iostream>

using namespace std;

int count_set_bits(int n)
{
    int cnt=0;
    while(n>0)
    {
        int m = n;
        if(m&1)
            cnt++;
        n = n>>1;
    }
    return cnt;
}

int count_set_bits_fast(int x)
{
    int cnt=0;
    while(x>0)
    {
        x = (x&(x-1));
        cnt++;
    }
    return cnt;
}

//CPP indexing for i
int get_ith_bit(int n, int i)
{
    return n & (1<<i);
}

int set_ith_bit(int n,int i)
{
    return n | (1<<i);
}

int clear_ith_bit(int n, int i)
{
    return n & ~(1<<i);
}


void get_subsequences(string s)
{
    int range = (1<<(s.length())) -1;
    for(int i=0; i<range+1; i++)
    {
        int x =i;
        int trck = 0;
        string p ="";
        while(x>0)
        {
            int m = x;
            (m&1)?cout<<s[trck]:cout<<"";
            trck++;
            x = x>>1;
        }
        cout<<p<<endl;
    }
}

int main()
{
    string x;
    cin>>x;
    get_subsequences(x);
    return 0;
}
