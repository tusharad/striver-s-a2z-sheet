  int countBitsFlip(int a, int b){
        
        int res = 0;
        int n = a^b;
        while(n != 0){
            n = n&(n-1);
            res++;
        }
        return res;
        
    }