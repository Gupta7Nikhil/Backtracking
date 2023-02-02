#include<bits/stdc++.h>
using namespace std;
void permute(long index,vector<string> &output,string s)
{
    if(index==s.length())
    {
        output.push_back(s);
        return;
    }
    for(long j=index;j<s.length();j++)
    {
        swap(s[index],s[j]);
        permute(index+1,output,s);
        swap(s[index],s[j]);

    }
}
int main()
{
    string s="123";
    vector<string> out;
    cout<<endl<<"Permutation of strings are"<<endl;
    permute(0,out,s);

    for(int i=0;i<out.size();i++)
    cout<<out[i]<<endl;
    return 0;
}