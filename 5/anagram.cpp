bool isAnagram(string a, string b){
        
        char arr[26] = {0};
        for(int i = 0;a[i] != '\0';i++)
            arr[a[i] - 'a']++;
        for(int i = 0;b[i] != '\0';i++)
            arr[b[i] - 'a']--;
        for(int i = 0;i < 26;i++)
            if(arr[i] != 0)
                return false;
        return true;
    }
