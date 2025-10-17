class Solution {
public:
    int romanToInt(string s) {
        int Sum=0;
        map<char,int> mp;
       mp['I']=1;
       mp['V']=5;
       mp['X']=10;
       mp['L']=50;
       mp['C']=100;
       mp['D']=500;
       mp['M']=1000;
      for(int i=0;i<s.length();i++){
        if(mp[s[i+1]]<=mp[s[i]]){
              Sum+=mp[s[i]];
        }
        else{
            Sum-=mp[s[i]];
        }
      }
       return Sum;
    }
};