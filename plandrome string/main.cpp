#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string word;
    int i,j;
    string word1;
    cout<<"ENTER ANY WORD U WANT TO SEE WHEATHER A WORD IS PLANDROME OR NOT"<<endl;
    cin>>word;
    int len=word.size();
    for( i=len-1;i>=0;i--)
    {
         word1[i]=word[i];
    }
    cout<<word1<<endl;
    int len1=word1.size();
    for(i=1;i<=len1;i++)
    {
        string word1;
        if(wordl[i]==word[i])
        {
            continue;
        }
            else
            cout<<word<<" IS NOT PLANDROME!!!TRY ANOTHER WORD"<<endl;
    }
 cout<<word<<"IS A PLANDROME"<<endl;*/
    return 0;
}
