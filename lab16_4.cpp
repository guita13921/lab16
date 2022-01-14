#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
	int x[4] = {50,100,500,1000};
	a = x[rand()%4];
	b = x[rand()%4];
		while(b == a){
			b = x[rand()%4];
		}
	c = x[rand()%4];
		while(c == a or c ==b){
			c = x[rand()%4];
		}
	d = x[rand()%4];
		while(d == a or d == b or d == c){
			d = x[rand()%4];
		 }
}