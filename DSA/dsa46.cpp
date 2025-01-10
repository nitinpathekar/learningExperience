#include <iostream>
#include <vector>
using namespace std;


vector<int> pair(vector<int> pair1,int target)
{
    int s=0;
    int e=pair1.size()-1;
    vector<int > ans;
    while(s<e){
        if(target==pair1[s]+pair1[e]){
            ans.push_back(s);
            ans.push_back(e);
            return ans;
            
        }
    }
}


int main()
{
    vector<int>  pair1 = {1, 2, 3, 4, 5, 6, 7, 8};
    int target=9;
  vector<int> ans= pair(pair1, target);
    return 0;
}