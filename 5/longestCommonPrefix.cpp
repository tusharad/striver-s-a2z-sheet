string longestCommonPrefix (string arr[], int N)
    {
        sort(arr,arr+N);
        string res = "";
        int i = 0;
        int j = 0;
        while(i < arr[0].size() && j < arr[N-1].size()){
            if(arr[0][i] != arr[N-1][j])
                break;
            res += arr[0][i];
            i++;
            j++;
        }
        if(res == "")
            return "-1";
        return res;
    }
