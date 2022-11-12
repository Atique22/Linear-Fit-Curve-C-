
#include <iostream>
using namespace std;
int main(){
	int i, j;
	char plot[10][10];

// draw graph where y=x 
cout<<endl<<"graph where y=x\n";
	for(i=9; i>-1; i--){
	  for(j=0; j<10; j++){
			if(i==0){cout<<" "<<j<<" ";}
			else if(j==0){cout<<" "<<i<<" ";}
			else if(i==j){cout<<" o ";}
			else{cout<<" . ";}
		}cout<<endl;
	}
// draw graph where y=2x+1
cout<<endl<<"graph where y=2x+1\n";

	for(i=9; i>-1; i--){
	  for(j=0; j<10; j++){
			if(i==0){cout<<" "<<j<<" ";}
			else if(j==0){cout<<" "<<2*i+1<<" ";}
			else if(i==j){cout<<" o ";}
			else{cout<<" . ";}
		}cout<<endl;
	}	
	
	return 0;
}

