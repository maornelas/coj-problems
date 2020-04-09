

#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

const int maxn = 100;

class HugeInt{
    friend ostream &operator<<(ostream &, const HugeInt &);
    friend istream &operator>>(istream &, HugeInt &);

public:
    HugeInt(char *);
    HugeInt(long long = 0);
    HugeInt operator+(HugeInt &);
    HugeInt operator-(HugeInt &);
    HugeInt operator*(HugeInt &);
    HugeInt operator*(long long);
    int num[maxn], len;
};

ostream &operator<<(ostream &output, const HugeInt &a){
    for (int i = a.len - 1; i >= 0; --i)
        output << a.num[i];

    if (a.len == 0)
        output << '0';

    return output;
}

istream &operator>>(istream &input, HugeInt &a){
    int i, len;
    char s[maxn + 5];
    input >> s;
    len = strlen(s) - 1;

    memset(a.num, 0, sizeof(a.num));

    i = 0;
    while (i <= len && s[i] == '0')
        ++i;

    for (a.len = 0; len >= 0 && len >= i; ++a.len, --len)
        a.num[a.len] = s[len] - '0';

    return input;
}

HugeInt::HugeInt(char *s){
    int i, j = strlen(s) - 1;
    num[0] = 0;

    memset(num, 0, sizeof(num));

    i = 0;
    while (i <= j && s[i] == '0')
        ++i;

    for (len = 0; j >= 0 && j >= i; ++len, --j)
        num[len] = s[j] - '0';
}

HugeInt::HugeInt(long long n){
    len = 0;
    memset(num, 0, sizeof(num));

    while (n){
        num[len++] = n % 10;
        n /= 10;
    }
}

int hugecmp(HugeInt a, HugeInt b){
    if (a.len < b.len)
        return -1;
    else if (a.len == b.len){
        for (int i = a.len - 1; i >= 0; --i){
            if (a.num[i] < b.num[i])
                return -1;
            else if (a.num[i] > b.num[i])
                return 1;
        }
        return 0;
    }
    else
        return 1;
}

HugeInt HugeInt::operator+(HugeInt &a){
    HugeInt res = a;

    res.len = len > a.len ? len : a.len;
    for (int i = 0; i < res.len; ++i){
        res.num[i] += num[i];
        if (res.num[i] >= 10){
            res.num[i + 1]++;
            res.num[i] %= 10;
        }
    }

    if (res.num[res.len] > 0)
        res.len++;

    return res;
}

HugeInt HugeInt::operator-(HugeInt &a){
    HugeInt res = *this;

    for (int i = 0; i < a.len; ++i){
        if (res.num[i] < a.num[i]){
            res.num[i + 1]--;
            res.num[i] += 10 - a.num[i];
        }
        else
            res.num[i] -= a.num[i];
    }

    for (int i = 0; i < res.len; ++i)
        if (res.num[i] < 0){
            res.num[i + 1]--;
            res.num[i] += 10 - a.num[i];
        }

    while (res.len > 0 && res.num[res.len - 1] == 0)
        res.len--;

    return res;
}

HugeInt HugeInt::operator*(HugeInt &a){
    int i, j;
    HugeInt res;

    for (i = 0; i < len; ++i)
        for (j = 0; j < a.len; ++j)
            res.num[i + j] += num[i] * a.num[j];

    for (i = 0; i <= len + a.len; ++i){
        res.num[i + 1] += res.num[i] / 10;
        res.num[i] %= 10;
    }

    for (res.len = len + a.len + 1; res.len > 0 && res.num[res.len - 1] == 0; --res.len)
        ;

    return res;
}

HugeInt HugeInt::operator*(long long n){
    HugeInt temp = n;
    return *this * temp;
}

HugeInt pow3[100], pow2[100];
HugeInt zero = (long long)0;
HugeInt one = (long long)1;
int result[50], nn;

int main(){
    HugeInt k;
    int i;

    pow3[0] = one;
    for (i = 1; i < 65; i++)
        pow3[i] = pow3[i - 1] * 3;
    pow2[0] = one;
    for (i = 1; i < 65; i++)
        pow2[i] = pow2[i - 1] * 2;

    while (cin >> k && hugecmp(k, zero) != 0){
        nn = 0;
        while (hugecmp(k, one) > 0){
            for (i = 0; i < 65; i++)
                if (hugecmp(k, pow2[i] + one) < 0)
                    break;
            i--;
            result[nn++] = i;
            k = k - pow2[i];
        }
        cout << "{ ";
        for (int j = nn - 1; j >= 1; j--)
            cout << pow3[result[j]] << ", ";
        if (nn > 0)
            cout << pow3[result[0]];
        cout << " }" << endl;
    }
    return 0;
}
