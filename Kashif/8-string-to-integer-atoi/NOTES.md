**Steps:**
Breaking the algorithm into the following steps:
1. Scan through the string ignoring leading whitespaces, checking for negative/ positive sign just before the integer (in char) and then adding the extracted number into array at the same time, lets say if we get at any point i,
2. `if(s[i] == '-') isNegative = true;`  and parse the data into helper function which will create number from this array, reversing the array.
3. let the integer res be nums then
`for (i --> array.size()) res += array[i]*pow(10, i)`; and check for if at any point res > INT_MAX or res < INT_MIN return the clamped number accordingly.