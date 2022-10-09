 bool areIsomorphic(string str1, string str2)
    {
        if(str1.length() != str2.length())
            return false;
        
        char hash[256];
        
        for(int i = 0;str1[i] != '\0';i++)
            hash[str1[i]] = str2[i];
        for(int i = 0;str1[i] != '\0';i++)
            if(hash[str1[i]] != str2[i])
                return false;
                
        for(int i = 0;str2[i] != '\0';i++)
            hash[str2[i]] = str1[i];
        for(int i = 0;str2[i] != '\0';i++)
            if(hash[str2[i]] != str1[i])
                return false;
        
        return true;
    }
