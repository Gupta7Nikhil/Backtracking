#include<bits/stdc++.h>
using namespace std;
int countpairsum(vector<int> a,int sum){
    int cnt=0;
    for(int i=0;i<a.size();i++)
    {
        for(int j=i+1;j<a.size();j++)
        if(a[i]+a[j]==sum)
        cnt++;
    }
    return cnt;
}
int main()
{
    vector<int> arr={1,2,3,4,5,1};
    int sum=4;
    cout<<countpairsum(arr,sum);


    return 0;
}