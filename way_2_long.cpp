#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    int n;
    vector<string> vec;
    cin>>n;
    
    
    while(n--){
        
        string str;
        cin>>str;
        
        vec.push_back(str);
        
    }
    
    for(int i=0; i<vec.size();i++){
        
        string s = vec[i];
        
        if(s.size()>10)
        {
        
        string s1 = to_string(s.size()-2);
        string s2 = s[0] + s1 + s[s.size()-1];
        cout<<s2<<endl;
            
        }
        else cout<<s<<endl;
    }

    
return 0;
}