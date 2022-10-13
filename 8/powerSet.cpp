	vector<string> AllPossibleStrings(string s){
		    vector<string> res;
		    int n = s.length();
		    for(int i = 1;i < (1<<n);i++){
		        string temp = "";
		        for(int j = 0;j < n; j++){
		            if((i&(1<<j)) != 0)
		                temp += s[j];
		        }
		        res.push_back(temp);
		    }
		    sort(res.begin(),res.end());
		    return res;
		}