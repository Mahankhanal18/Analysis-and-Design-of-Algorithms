pseudo code

for i<-0 to n-m: // n is the length of text and m is the length of the pattern
    j<-0
    while j < m and T[i+j] == P[j]:  // T is the text string and P is the pattern string
        j <- j+1
    if j == m:
        pattern found at the index i


pattern is not found