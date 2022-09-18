//Given a matrix mat[][] of size N x M, where every row and column is sorted in increasing order, and a number X is given. The task is to find whether element X is present in the matrix or not.

//{ Driver Code Starts
//Initial Template for C

#include <stdio.h>


// } Driver Code Ends
//User function Template for C

int matSearch (int N, int M, int matrix[][M], int x)
{
    int i = 0;
    int j = M-1;
    
    while(i < N && j >= 0){
        if(matrix[i][j] < x)
            i++;
        else if(matrix[i][j] > x)
            j--;
        else 
            return 1;
    }
    return 0;
}

//{ Driver Code Starts.

int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--)
	{
        int n, m;
		scanf("%d", &n);
		scanf("%d", &m);
		int matrix[n][m];
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				scanf("%d", &matrix[i][j]);
			}
		}
		   
		int x;
		scanf("%d", &x);
		
        int result = matSearch (n, m, matrix, x);
        printf("%d", result);
		printf("\n");
    }
    return 0;
}

// } Driver Code Ends


