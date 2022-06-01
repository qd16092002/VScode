#include<iostream>
#include<Windows.h>
#include<fstream>
#include<string>

using namespace std;

void txtColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); 
}

void load(){
	int n=0;
	while (n <= 100)
	{	
		txtColor(4);	
		Sleep(100);
        cout<<"Loading.....loading....."<<n<<"%"<<endl;
        n++;
        n+=10;
    }
    Sleep(1500);
    cout<<"Loading.....loading....."<<"100%"<<endl;
}


int main()
{
	load();
	int color;
    txtColor(20);
//	cout<<"Nhap color ( color la ma color trong C/C++ VD: 1,2,3,4..... )"<<endl;
//	cin>>color;
	txtColor(30);
	ifstream FileIn;
	FileIn.open("C:\\New folder\\1.txt", ios_base::in);		
	string line;
	
	while (!FileIn.eof())
	{
		getline(FileIn, line);
		cout << line << endl;
		Sleep(50);
	}
	
	FileIn.close(); 
	system("pause");
	return 0;
}