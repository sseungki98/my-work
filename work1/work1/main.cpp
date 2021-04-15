//
//  main.cpp
//  work1
//
//  Created by 이승현 on 2021/04/10.
//
/*
 
#include <iostream>   // #10809
using namespace std;
int main()
{
    char S[100];
    cin>>S;
    for(int i=97;i<=122;i++)
    {
        int j=0;
        int count=0;
        while(S[j]!=0)
        {
            if(S[j]==i)
            {
                count++;
                break;
            }
            j++;
        }
        if(count==0)
            cout<<"-1"<<' ';
        else
            cout<<j<<' ';
    }
}
*/
/*
#include <iostream>   // #2675
using namespace std;
int main()
{
    int T;
    int R;
    char S[20];
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int j=0;
        cin>>R;
        cin>>S;
        while(S[j]!=0)
        {
            for(int k=0;k<R;k++)
            {
                cout<<S[j];
            }
            j++;
        }
        cout<<endl;
    }
}
*/
/*
#include <iostream>   // #11720
using namespace std;
int main()
{
    int N;
    cin>>N;
    char num[N];
    cin>>num;
    int sum=0;
    for(int i=0;i<N;i++)
    {
        sum+=(int)num[i]-48;
    }
    cout<<sum;
}
*/
/*
#include <iostream>   // #1157
#include <cstring>
using namespace std;
int main()
{
    char input[1000000];
    int count[27]={0};
    cin>>input;
    int len;
    len=strlen(input);
    for(int i='A';i<='Z';i++)
    {
        for(int j=0;j<len;j++)
        {
            if(input[j]==i)
                count[i-'A']++;
        }
    }
    for(int i='a';i<='z';i++)
    {
        for(int j=0;j<len;j++)
        {
            if(input[j]==i)
                count[i-'a']++;
        }
    }
    int maxcnt=0;
    for(int i=0;i<27;i++)
    {
        if(count[i]>count[maxcnt])
            maxcnt=i;
    }
    int qselect=0;
    for(int i=0;i<27;i++)
    {
        if(count[i]==count[maxcnt])
            qselect++;
    }
    if(qselect>1)
        cout<<'?';
    else
        cout<<(char)(maxcnt+65);
}
*/
/*
#include <iostream>   // #1152
#include <string>
using namespace std;
int main()
{
    string input;
    getline(cin,input);
    int count=0;
    for(int i=0;i<input.length();i++)
    {
        if(input[i]==' ')
            count++;
    }
    if(input[0]==' ')
        count--;
    if(input[input.length()-1]==' ')
        count--;
    cout<<count+1;
}
*/

