#include<bits/stdc++.h>

using namespace std;


bool isPalindrome(string S, int start,int stop){

while(start<=stop){
    if(S[start++]!=S[stop--])
        return false;
}
return true;
}

void palindromicPartitioner(int index,string S,vector<string>& subVect,vector<vector<string>>& result){

if(index == S.size()){
    result.push_back(subVect);
    return;
}

for(int i = index;i<S.size();i++){
    if(isPalindrome(S,index,i)){
        subVect.push_back(S.substr(index,i-index+1));
        palindromicPartitioner(i+1,S,subVect,result);
        subVect.pop_back();
    }
}
}

int main(){

string S = "aabb";
vector<string> subVect;
vector<vector<string>> result;

palindromicPartitioner(0,S,subVect,result);

for(vector<string> i : result){
    for(string j : i)
        cout<<j<<endl;
    cout<<endl;
}

}
