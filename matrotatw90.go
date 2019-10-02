//Rotate a matrix by 90 degree in clockwise direction without using any extra space

package main

import (
	"fmt"
)

func main() {
	mat:=[][]int{{1,2,3},{4,5,6},{7,8,9}}
	temp :=0
	N := len(mat)
	for i:=0;i<N/2;i++{
		for j:=i;j<N-i-1;j++{
			temp = mat[i][j]
			mat[i][j] = mat[N-1-j][i]
		        mat[N - 1 - j][i] = mat[N - 1 - i][N - 1 - j]; 
            		mat[N - 1 - i][N - 1 - j] = mat[j][N - 1 - i]; 
            		mat[j][N - 1 - i] = temp; 
		}	
	}
	
	for _,j:= range mat{
		fmt.Println(j)
	}
	
}
