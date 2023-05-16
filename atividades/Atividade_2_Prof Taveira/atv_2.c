#include <stdio.h>
#define N 3
 
void mat(int (*m)[N], int (*n)[N], int (*soma)[N], int d){ 
	
	
	int l, c;
	 
	for(l=0; l<d; l++){ 
	for(c=0; c < N; c++){
 	soma[l][c] = m[l][c] + n[l][c];
  	printf("%d ", soma[l][c]);
   	} 
   printf("\n"); 
   	}
}
int main(){
	
	int A[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int B[N][N] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
	int C[N][N]; 
	
	printf("Soma de Matrizes - Resultado (C=A+B)\n");
	
 	mat(A, B, C, N);
 	
 }