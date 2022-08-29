for i<-0 to n-2:
    for j<-0 to n-2-i:
        if(A[j] > A[j+1])
            swap(A[j], A[j+1])