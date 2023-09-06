#include<iostream>
#include<list>
using namespace std;

//problem : rorate the given list to the left by k steps.
//time complexity : o(n)
//space complexity : o(n)
list<int> rorateTheList(list<int> &l,int k,int n )
{
    list<int> roratedL;
    
    list<int>::iterator itr ;
    itr = l.begin();

    int i = 0;
    while(i<k)
    {
        itr ++;
        i++;
    }

    while(itr!=l.end())
    {
        roratedL.push_back(*itr);
        itr++;
    }

    i = 0;
    itr = l.begin();

    while(i<k)
    {
        roratedL.push_back(*itr);
        i++;
        itr++;
    }

    return roratedL;

}
int main()
{
    list<int> l;
    int n;
    cin>>n;

    while(n--)
    {
        int ele;
        cin>>ele;
        l.push_back(ele);

    }

    int k;
    cout<<"\nk : ";
    cin>>k;

    list<int> result = rorateTheList(l,k,n);

    cout<<endl<<"The final answer is : "<<endl;

    list<int>::iterator itr ; 
    for(itr = result.begin();itr!=result.end();itr ++)
    {
        cout<<*itr<<" ";
    }

    cout<<endl;

    

    return 0;
}/*Jai Jai Jai Bajarangbali...
this program coded by jay kishan kharwar
at 
time : 6:02
date : 04-07-2023*/