
#include <bits/stdc++.h>

using namespace std;

vector<string> getResponses(vector<string> &tokens, vector<vector<string>> &requests){
    vector<string> ans;
    for(auto it: tokens){
        for(auto x: requests){
            string req = x[1];
            int feq = req.find("=");
            int fand = req.find("&");
            string each_token = req.substr(feq + 1, fand - feq - 1);
            string name = req.substr(req.find("name") + 5);
            if(each_token == it){
                ans.push_back("VALID,name," + name);
            }
            else{
                ans.push_back("INVALID");
            }
        }
    }
    return ans;
}


int main(){
    vector<string> tokens{"ah37j"};
    vector<vector<string>> req{{"get", "https://example.com/?token=ah37j&name=tauseef"}};
    vector<string> ans;
    ans = getResponses(tokens, req);
    for(auto it: ans){
        cout<<it<<endl;
    }
    cout<<"Hello World";
    return 0;
}
