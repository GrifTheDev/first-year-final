#include <iostream>
using namespace std;
int zbrojDjelitelja;
int main(){
	
	for(int i = 1; i < 100000 + 1; i++){
		zbrojDjelitelja = 0;
		for(int j = 1; j < i; j++){
			if(i % j == 0){
				zbrojDjelitelja += j;
			}
		}
		if(i < zbrojDjelitelja){
			cout << i << endl;
		}
	}
	
	return 0;
}
