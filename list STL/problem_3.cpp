#include<iostream>
#include<list >

using namespace std;
//problem : given a linkedList remove the all occurrense of 1 that appear before 0.

list<int>  removeOccurrenseOfOne(list<int> &l)
{
    list<int>::iterator itr1  = l.begin();
    advance(itr1,2);
    list<int> output;
    list<int>::iterator itr2 ;
    for(itr2 = l.begin();itr2!=l.end();itr2++)
    {
        if(*itr2==1 && *itr1==0)
        {
            output.push_back(*itr2);
        
        }
        itr1++;
    }

    return output;
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

     removeOccurrenseOfOne(l);

    cout<<"Final result = "<<endl;

    for(auto ele : l)
    {
        cout<<ele<<" ";
    }

    return 0;
}