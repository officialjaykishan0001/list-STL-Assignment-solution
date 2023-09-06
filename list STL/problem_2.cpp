#include<iostream>
#include<list>

using namespace std;

//problem : given a linkedList count no of  the occurense of x .

int occurenseOfX(list<char> &l)
{
    int count = 0;
    list<char> ::iterator itr;
    for(itr = l.begin();itr!=l.end();itr++)
    {
        if(*itr=='x')
        {
            count++;
        }
    }
    return count;
}

int main()
{   
    list<char> l;

    int n;
    cin>>n;
    cout<<endl;

    if(n<=0) return 0;

    while(n--)
    {
        char  ele;
        cin>>ele;

        l.push_back(ele);

    }

    int output = occurenseOfX(l);

    cout<<"final answer is : "<<output<<endl;
    return 0;
}
/*Jai Jai Jai Bajarangbali...
this program coded by jay kishan kharwar
at
time : 1:53
date : 03-07-2023*/