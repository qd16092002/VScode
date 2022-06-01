#include<stdio.h>
#define N 1001
#define M 1001

int a[N];
int b[M];
int n, m;
void input(){
	scanf("%d%d",&n,&m );
	int i;
	for(i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	for(i = 0; i < m; i++){
		scanf("%d", &b[i]);
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
	scanf("%d",&T);
	while(T--){
		input();
		printf ("%d\n",check());
	}

	return 0;
}