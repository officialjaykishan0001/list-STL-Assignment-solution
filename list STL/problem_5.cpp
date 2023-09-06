#include<iostream>
#include<list>

using namespace std;
//problem : given two list of the same size . for each element of the first list print
// 1 if corresponding element of the second list is same .otherwise print 0.

list<int > result(list<int> l1,list<int> l2,int n)
{
    list<int > output(n);

    list<int >::iterator itr1,itr2;
    list<int>::iterator itr;
    itr = output.begin();
    while(itr1!=l1.end())
    {                       
                            
      if(*itr1==(*itr2))
      {
        output.insert(itr,1);
      }
      else 
      {
        output.insert(itr,0);
      }
      itr1++;
      itr2++;
      itr++;
    }

    return output;
}


int main()
{
    list<int> l1;

    int n;
    cin>>n;
    cout<<endl;
  int m = n;
    while(n--)
    {
        int ele;
        cin>>ele;
        l1.push_back(ele);
    }

    cout<<endl<< endl;
    list<int> l2;
   
    while(m--)
    {
        int ele;
        cin>>ele;
        l2.push_back(ele);
    }

    list<int > output = result(l1,l2,n);

    list<int >::iterator itr ;
    for(itr = output.begin();itr!=output.end();itr ++)
    {
        cout<<*itr<<" ";
    }

    return 0;
}