#include <iostream>
using namespace std;

int main (){
	
	for (int y=0; y<5; y++){
		for (int a=0; a<y+1; a++){
			cout <<"*";
		}
		cout<<endl;
	}
	for (int y=5; y>0; y--){
		for (int a=1; a<=y; a++){
			cout <<"*";
		}
		cout<<endl;
	}
	
	return 0;
}
