#include <iostream>
#include<math.h>
#include<windows.h>
using namespace std;

int main() {
    int T;
    int i,j;
    int n[1000];
    int m[1000];
    int Saidung[1000];
    int a[100];
    int b[100];
    cin>>T;
    for (i = 0; i < T; i++){
        cin>>n[i]>>m[i];
        if (n[i] != m[i]){
            Saidung[i]=0;
            for (int q=0;q<n[i];q++){
                cin>>a[q]; 
            }
            for (int w=0;w<m[i];w++){
                cin>>b[w];
            }
        }
        else {
            for (int j=0; j<n[i]; j++){
                cin>>a[j];
                cin>>b[j];
            }
             
        }
    }   
    for (i = 0; i < T; i++){
        cout<<Saidung[i]<<endl;
    }    
    return 0;
}