#include <bits/stdc++.h>

using namespace std;

int mp[26];
int main()
{
    string s; cin >> s;
    for(int i=0; i < s.length(); i++)
        mp[s[i] - 'a']++;
    int o =0;
    for(int i=0; i < 26; i++) {
        if(mp[s[i] - 'a'] &1) o++;
    }
    if(o&1) {
        string res,mid;
        int j = 25;
        int oc = 0;
        for(int i = 0; i < 26; i++) {
            if(mp[s[i]]&1) {
                oc++;
                while(j > i && !(mp[j]&1))
                    j--;

                for(int k = 0; k < (mp[i]+mp[j])/2; k++) 
                    res += (i + 'a');


            }
            if(oc == (o+1)/2) {
                for(int k = 0; k < mp[i]; k++) 
                    mid += (k + 'a');
            }
            if(i >= j)
                break;
        }
        string temp = res;
        reverse(res.begin(), res.end());
        cout << temp + mid + res ;
    }
    else {
        string res;
        int j = 25;
        for(int i = 0; i < 26; i++) {
            while(j > i && !(mp[j]&1))
                j--;

            for(int k = 0; k < (mp[i]+mp[j])/2; k++) 
                res += (i + 'a');
            
            if(i >= j)
                break;

        }
        string temp = res;
        reverse(res.begin(), res.end());
        cout << temp + res;
    }
    return 0; 
}
