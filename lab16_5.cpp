#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	int *e = &a;
	int *f = &b;
	int *g = &c;
	int *h = &d;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a, &b, &c,&d);
	    cout << *e << " " << *f << " " << *g << " " << *h << "\n";
	}
	
	return 0;
}

void shuffle(int *e,int *f,int *g,int *h){
int x[4] = {50,100,500,1000};
	*e = x[rand()%4];
	*f = x[rand()%4];
		while(*e == *f){
			*f = x[rand()%4];
		}
	*g = x[rand()%4];
		while(*g == *e or *g ==*f){
			*g = x[rand()%4];
		}
	*h = x[rand()%4];
		while(*h == *e or *h == *f or *h == *g){
			*h = x[rand()%4];
		 }
}
