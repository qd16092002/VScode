#include <iostream>
#include<math.h>
#include<windows.h>
using namespace std;
#define N 1001
#define M 1001
int a[N];
int b[M];
int n, m;
void input(){
	cin>>n>>m;
	int i;
	for(i = 0; i < n; i++){
		cin>>a[i];
	}
	for(i = 0; i < m; i++){
		cin>>b[i];
	}
} 
int check(){
	if (m != n) return 0;
	int cnt = 0;
	if (m == n){
		int i;
		for (i = 0; i < n; i++){
			if (a[i] == b[i]) cnt++;
		}
		if (cnt == n) return 1;
		else return 0;
	}
}
int main (){
	int T;
	cin>>T;
	while(T--){
		input();
		cout<<check()<<endl;
	}

	return 0;
}