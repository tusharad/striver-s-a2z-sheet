//find the missing number from 1 to N in between 1 to N-1 array

int missingNumber(int A[], int N)
{
    int sum = 0;
    for(int i = 1;i <= N;i++)
        sum += i;
    int total = 0;
    for(int i = 0;i < N-1;i++)
        total += A[i];
    return sum-total;
}
