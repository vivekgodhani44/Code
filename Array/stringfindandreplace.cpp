#include <bits/stdc++.h>
using namespace std;
string findandreplace(string subject ,string find,string replace)
{
    int pos=0;
    while((pos=subject.find(find,pos))!=string::npos)
    {
        subject.replace(pos,find.size(),replace);
        pos+=replace.size();
    }
    return subject;
}