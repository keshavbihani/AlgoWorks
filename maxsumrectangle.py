#maximum sum rectangle

def kadaneAlgo(tempArray):
    result = [0, 0, -1]     # result[0] - max, result[1] - findalStartIndex, result[2] - finalEndIndex
    current_max = 0
    tempStartIndex = 0

    for i in xrange(0, len(tempArray)):
        current_max = current_max + tempArray[i]
        if current_max < 0:
            current_max = 0
            tempStartIndex = tempStartIndex + 1
        elif current_max > result[0]:
            result[0] = current_max
            result[1] = tempStartIndex
            result[2] = i

    return result

def maxSubArray2D(array):
    max = top = bottom = right = left = 0
    rows = len(array)
    cols = len(array[0])

    for leftCols in xrange(0, cols):
        temp = [i * 0 for i in xrange(0, rows)]  # auxilary space
        for rightCols in xrange(leftCols, cols):
            for i in xrange(0, rows):
                temp[i] = temp[i] + array[i][rightCols]
            current_max = kadaneAlgo(temp)

            if current_max[0] > max:
                max = current_max[0]
                left = leftCols
                right = rightCols
                top = current_max[1]
                bottom = current_max[2]

    return "max->" + str(max) + ",range->("+ str(left) + "," + str(top) + "), " \
                                   "(" + str(right) + "," + str(bottom) + ")"

array = [[1, 2, -1, -4, -20], [-8, -3, 4, 2, 1], [3, 8, 10, 1, 3], [-4, -1, 1, 7, -6]]

print maxSubArray2D(array)
