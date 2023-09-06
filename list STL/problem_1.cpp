#include<iostream>
#include<list>

using namespace std;
//problem : given a linkedList containing only a and b . we need to insert x
//before a .

void InsertXBeforeA(list<char> &l,int n)
{
    list<char>::iterator itr;
    for(itr = l.begin();itr!=l.end();itr++)
    {
        if(*itr=='a')
        {
            l.insert(itr,'x');
        }
    }

    return;
}
int main()
{
    list<char> l;
    int n;
    cin>>n;
    cout<<endl;
    while(n--)
    {
        char ele;
        cin>>ele;
        l.push_back(ele);
    }


    InsertXBeforeA(l,n);

    cout<<endl;
    for(auto e : l)
    {
        cout<<e<<" ";
    }

}
/*Jai Jai Jai Bajarangbali...
this program coded by jay kishan kharwar
at
time : 1:47
date : 03-07-2023*/