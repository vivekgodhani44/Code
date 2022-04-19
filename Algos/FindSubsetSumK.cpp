#include <vector.h>
vector<int> input;
int K;
int find_subset(i,int sum)
{
    if(i=N)
    {
        if(sum==K) 
            return 1; 
        return 0;
    }
    return find_subset(i+1,sum+input[i])+find_subset(i+1,sum);
}
void findAllpermutation(int i ,string s)
{
    if(i==s.size()) {
        cout<<s;
    }
    for(int j=i;j<s.size();i++) 
    {
        swap(s[i],s[j]);
        findAllpermutation(i+1,s[j]); 
        swap(s[j],s[i]);
    } 
}