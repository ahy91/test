#include <stdio.h>

int main(){
	int arr[8] = {0,0,0,0,0,0,0,100};
	int i = 0, j = 0;
	int res[2] = {0};

	for(i=0; i<7; i++) scanf("%d", &arr[i]);

	for(i=0; i<6; i++){
		res[0] = (arr[i+1]-arr[i]) < (arr[i+2]-arr[i+1]) ? arr[i] : arr[i+1];
		res[1] = (arr[i+1]-arr[i]) < (arr[i+2]-arr[i+1]) ? arr[i+1] : arr[i+2];
	}

	printf("%d %d", res[0], res[1]);

	return 0;
}
