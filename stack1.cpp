//postix conversion
#include <bits/stdc++.h>
using namespace std;
#define MAXSIZE 100
struct lifo
{
    char st[MAXSIZE];
    int top;
};
typedef struct lifo sta;
void create(sta *s)
{
    s->top = -1;
}
void push (sta *s,char e)
{
    if(s->top == (MAXSIZE-1))
    {
        cout<<"stack overflow";
        exit(-1);
    }
    else
    {
        s->top++;
        s->st[s->top] = e;
    }
    
}
void pop(sta *s)
{
    if(s->top == -1)
    {
        cout<<"stack underflow";
        exit(-1);
    }
    else
    {
      s->top--;
    }
}
int isempty(sta *s)
{
    if(s->top==-1)
     return 1;
     else 
     return 0;
}
int isfull(sta *s)
{
    if(s->top == MAXSIZE-1)
     return 1;
     else 
     return 0;
}
int f(char s)   //evaluate precedence
{
    int m;
    if(s=='^')
    m=5;
    else if(s=='/')
    m= 4;
    else if(s=='*')
    m=3;
    else if(s=='+')
    m= 2;
    else if(s=='-')
    m= 1;
    else m=0;
    return m;
}
int main()
{
     sta A;
   sta *pi;
   pi = &A;
   create(&A);
   int n,i;
   i=0;
   string s,s2;
   cout<<"Enter expression to evaluate: ";
   cin>>s;
  s+=')';
   push(&A,'(');
   for(i=0;i<s.size();i++)
   {
         if(s[i]!='+' && s[i]!='-'&& s[i]!='/' && s[i]!= '*' && s[i]!= '^' && s[i]!= '(' && s[i]!= ')')
         {
             s2+=s[i];
         }
         else if(s[i]=='(')
         {
             push(&A,s[i]);
         }
         else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^')
         {
            while(f(pi->st[pi->top])>=f(s[i]))
            {
               s2+= pi->st[pi->top];
               pop(&A);
            }  
            push(&A,s[i]);
         }
         else if(s[i]==')')
         {
             while(pi->st[pi->top] != '(')
             {
               s2+= pi->st[pi->top];
               pop(&A);
             }
             
              pop(&A);
         }
        // cout<<s2<<"\n";
   }

   cout<<"Evaluated expression is: "<<s2;

    return 0;
}