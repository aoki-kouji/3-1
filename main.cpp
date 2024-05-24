#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;

int main() {

	list<const char*>rosen = { "tokyo","kanda","akihabara","okachimachi","ueno","uguisudani","nippori","tabata","komagome","sugamo","otsuka","ikebukuro","mejiro","takadanobaba","shin-okubo","shinjuku","yoyogi","harajuku","shibuya","ebisu","meguro","gotanda","osaki","shinagawa","tamachi","hamamatucyo","shimbashi","yurakucho"};
	for (list<const char*>::iterator itr = rosen.begin(); itr != rosen.end(); ++itr) {
		cout << *itr << endl;
	}

	

	for(list<const char*>::iterator itr=rosen.begin();itr!= rosen.end();++itr){
		if (strcmp(*itr, "tabata") == 0) 
		{
			itr = rosen.insert(itr, "nishi nippori"); ++itr;
		}
    }
	printf("\n2019\n");

	for (list<const char*>::iterator itr = rosen.begin(); itr != rosen.end(); ++itr) {
		cout << *itr << endl;
	}
	
	printf("\n2022\n");

	for (list<const char*>::iterator itr = rosen.begin(); itr != rosen.end(); ++itr) {
		if (strcmp(*itr, "tamachi") == 0)
		{
			itr = rosen.insert(itr, "takanawa getoway"); ++itr;
		}
	}

	for (list<const char*>::iterator itr = rosen.begin(); itr != rosen.end(); ++itr) {
		cout << *itr << endl;
	}

	return 0;
}
