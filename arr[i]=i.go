//Rearrange an array such that arr[i] = i

package main

import (
	"fmt"
)

func main() {
	fmt.Println("Hello, playground")
	m := map[int]bool{}
	arr:= []int{-1, -1, 6, 1, 9, 
                    3, 2, -1, 4,-1}
	for _,val:= range arr{
		m[val]=true
	}
	for i,_:= range arr{
		if _,ok:= m[i];ok{
			arr[i]=i
		}else{
			arr[i]=-1
		}
	}
	fmt.Println(arr)
}
