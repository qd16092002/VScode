#include<iostream>
using namespace std;
int n, M;
int f[30];
int a = 0;
void Try(int id){
    int temp = M / f[id];
    for(int k = 1; k <= temp; k++){
        if(M > k * f[id]){
            M -= k * f[id];
            if(id == n - 1){
                    if(M % f[n] == 0)
                    a++;
                }
                else
                 Try(id + 1);
            M += k * f[id];
        }
    }
}
int main(){
    cin >> n >> M;
    for(int i = 1; i <= n; i++)
    cin >> f[i];
    Try(1);
    cout << a;
    return 0;
}