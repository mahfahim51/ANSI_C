#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

int main()
{
  int count=0;
  string br;
  stack<char> t;  //    (()))(

  cin>>br;
  for(int i=0;i<br.size();i++)
  {

    if(br[i]=='(')
    {
      t.push(br[i]);
    }
    else if( !t.empty()  &&  br[i]==')')
    {
     if( t.top()=='(' )
     {
      t.pop();
      count++;
     }
    }
  }
   printf("%d\n",count*2);
}
