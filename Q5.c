#include <stdio.h>
int main(){
    int temp[4][4] = {
		{12, 15, 10, 9},
		{11, 8, 12, 13},
		{14, 13, 9, 7},
		{16, 11, 10, 8}
	};
    int i,j,cold;
    for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(temp[i][j] < temp[i+1][j]){
				if(temp[i][j] < temp[i-1][j]){
					if(temp[i][j] < temp[i][j-1]){
						if(temp[i][j] < temp[i][j+1]){
							printf("The point(%d, %d) is a cold spot with temperature = %dC\n", i+1,j+1,temp[i][j]);
						}
					}
				}
			}
		}
	}
	
	
	return 0;
}
