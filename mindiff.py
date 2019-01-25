"""
Given an unsorted array, find the minimum difference between any pair in given array.
"""
def findMinDiff(arr, n): 

	arr = sorted(arr) 

	diff = 10**20

	for i in range(n-1): 
		if arr[i+1] - arr[i] < diff: 
			diff = arr[i+1] - arr[i] 

	return diff 

arr = [1, 5, 3, 19, 18, 25] 
n = len(arr) 
print("Minimum difference is " + str(findMinDiff(arr, n))) 
