#include<bits/stdc++.h>

using namespace std;


void combinationSum(int index,int target,vector<vector<int>>& result,vector<int>& subResult,vector<int>myVector){

if(index == myVector.size()){
    if(target == 0)
            result.push_back(subResult);
    return;
}
if(myVector[index]<=target){
        subResult.push_back(myVector[index]);
        combinationSum(index,target-myVector[index],result,subResult,myVector);
        subResult.pop_back();
    }
combinationSum(index+1,target,result,subResult,myVector);
}

int main(){

vector<int> myVector{2,3,6,7};
int target = 7;

vector<vector<int>>result;
vector<int> subResult;

combinationSum(0,target,result,subResult,myVector);
for(vector<int> i:result){
    for(int j:i)
        cout<<j<<" ";
    cout<<endl;
}
return 0;
}
