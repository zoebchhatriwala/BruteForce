#include <iostream>
#include <fstream>


using namespace std;
int main()
{   ofstream fileo("Output.txt");
    int len,maxi;
    long double value=1;
    cout<<"Enter Lenght: ";
    cin>>len;
    cout<<"Enter no of Chars: ";
    cin>>maxi;
    if (len>10)
    {
      cout<<"The Lenght Cannot Be Greater Than 10";
    }
    else
    {
     char array[maxi],p[len];
     int check[len];
     cout<<"Enter Chars[don't insert same char again]: "<<"\n";
     for (int i=0;i<maxi;i++)
    {
        cout<<(i+1)<<": ";
        cin>>array[i];
    }
    fileo<<"1: ";
    for (int i=0;i<len;i++)
    {
      p[i]=array[0];
      check[i]=0;
      fileo<<p[i];
    }
fileo<<"\n";
long double i=0;
while (i<len)
{
    value=value*maxi;
    i++;
}
i=1;
while (i!=value)
{
i++;
int n=len-1,x=0,ch=0;
while(ch!=1)
{

    if(p[n]==array[maxi-1])
    {
        p[n]=array[0];
        if(n>0)
        {
        n=n-1;
        }

    }
    else
    {

       ch=1;
    }
}

   check[n]+=1;
   p[n]=array[check[n]];
   if(check[n]==maxi-1)
    {
        check[n]=0;
    }
    fileo<<i<<": ";
    while (x<len)
    {
        fileo<<p[x];
        x=x+1;
    }
    fileo<<"\n";
}
}
return 0;
}


