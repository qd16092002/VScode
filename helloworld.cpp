#include<iostream>

using namespace std;

int f[9][9];
bool markR[9][10];
bool markC[9][10];
bool markS[3][3][10];

void print(){
    static int cnt = 1;
    cout << "Solution " << cnt++ << ":\n";
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++)
            cout << f[i][j] << " ";
        cout << "\n";
    }
}

bool check(int r, int c, int v){
    if(markC[c][v])
        return false;
    if(markR[r][v])
        return false;
    if(markS[r/3][c/3][v])
        return false;
    return true;
}

void Try(int r, int c){
    for(int v = 1; v < 10; v++){
        if(check(r, c, v)){
            f[r][c] = v;
            markR[r][v] = true;
            markC[c][v] = true;
            markS[r/3][c/3][v] = true;
            if(r == 8 && c == 8)
                print();
            else{
                if(c < 8)
                    Try(r, c + 1);
                else 
                    Try(r + 1, 0);
            }
            markR[r][v] = false;
            markC[c][v] = false;
            markS[r/3][c/3][v] = false;
        }
        
    }

}

int main(){
    Try(0, 0);
    return 0;
}
