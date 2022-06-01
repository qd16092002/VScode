#include <bits/stdc++.h>
using namespace std;
/* v = 1 : +
v = 2: -
v = 3: *
v = 4: ^
v = 5: nothing
*/
long long ans = 0;
int check = 1;
int dem = 0;
int sol[10];
int combine(int a, int b)
{
    return a * 10 + b;
}
int tinhluythua(int a, int b)
{
    int answer = 1;
    for (int i = 1; i <= b; i++)
        answer *= a;
    return answer;
}
void remove_arr(int a[], int index, int range)
{
    for (int i = index; i <= range - 1; i++)
    {
        a[i] = a[i + 1];
    }
}
int tinh()
{
    check = 1;
    int toanhang[10];
    int toantu[10];
    for (int i = 1; i <= 9; i++)
        toanhang[i] = i;
    int m = 1; // m la so luong toan hang
    for (int v = 1; v <= 8; v++)
    {
        if (sol[v] == 5)
        {
            toanhang[m] = combine(toanhang[m], v + 1);
        }
        else
        {
            toanhang[m + 1] = v + 1;
            //cout << "Toan hang " << m << " la   " << toanhang1[m] << endl;
            toantu[m] = sol[v];
            m++;
        }
    }
    for (int i = 1; i <= m - 1; i++)
    {
        if (toantu[i] == 4)
        {
            if (toanhang[i] < 20)
            {
                toanhang[i] = tinhluythua(toanhang[i], toanhang[i + 1]);
                remove_arr(toanhang, i + 1, m);
                remove_arr(toantu, i, m - 1);
                m--;
                i--;
            }
            else
                return -1;
        }
    }
    for (int i = 1; i <= m - 1; i++)
    {
        if (toantu[i] == 3)
        {
            if (toanhang[i] < 100000 && toanhang[i + 1] < 100000)
            {
                toanhang[i] *= toanhang[i + 1];
                remove_arr(toanhang, i + 1, m);
                remove_arr(toantu, i, m - 1);
                m--;
                i--;
            }
            else
                return -1;
        }
    }
    int answer = toanhang[1];
    for (int i = 1; i <= m - 1; i++)
    {
        if (toantu[i] == 1)
            answer += toanhang[i + 1];
        if (toantu[i] == 2)
            answer -= toanhang[i + 1];
    }
    return answer;
}
void printsolution()
{
    cout << "Bieu thuc:  ";
    for (int i = 1; i <= 8; i++)
    {
        cout << i;
        if (sol[i] == 1)
            cout << " + ";
        if (sol[i] == 2)
            cout << " - ";
        if (sol[i] == 3)
            cout << " * ";
        if (sol[i] == 4)
            cout << " ^ ";
    }
    cout << "9" << endl;
}
void Try(int k)
{
    for (int v = 1; v <= 5; v++)
    {

        sol[k] = v;
        if (k == 8)
        {
            ans = tinh();
            if (ans == 2022)
            {
                dem++;
                printsolution();
            }
        }
        else
            Try(k + 1);
    }
}
int main()
{
    Try(1);
    cout <<"Dap an: "<< dem;
}
