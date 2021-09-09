#include<iostream>
#include<vector>

using namespace std;

void subArraySum(int index,int sum,vector<int> myVector,vector<int>& answer){

if(index == myVector.size()){
    answer.push_back(sum);
    return;
}
subArraySum(index+1,sum+myVector[index],myVector,answer);
subArraySum(index+1,sum,myVector,answer);
}

int main(){

vector<int>myVector{3,1,2};
int sum = 0;
vector<int> answer;

subArraySum(0,0,myVector,answer);

for(int i : answer)
    cout<<i<<" ";
return 0;
}
