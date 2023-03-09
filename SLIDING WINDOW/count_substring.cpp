
//   LINK - https://bit.ly/3xVYTZa
    int countSubstring(string s) {
        int i=0 , j=0;
        int n=s.length();
        // for keeping the count of characters
        map<char , int> m;
        int ans=0;
        while(j < n)
        {
            m[s[j]]++;
            if(m.size() < 3)j++;
            else if(m.size() == 3)
            {
                // JB TK K LIYE SIZE 3 H YB TK K LIYE REMOVE KRNA HOGA JAISE aaacb h toh map ka size kb 3 hoga toh n=5 aur j=4 toh first a k liye ans+=5-4 , ans=1  then second a k liye bhi ans+=5-2 , ans=2 and similary for 3rd a and then finally remove a and hence answer will be 2
                while(m.size() == 3)
               {ans+=n-j;
                   m[s[i]]--;
                if(m[s[i]] == 0)
                {
                    m.erase(s[i]);
                }
                i++;
               }
               j++;
            }
        }
        return ans;
    }