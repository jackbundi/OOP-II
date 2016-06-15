#include<iostream>
using namespace std;
int main()
{
    
int N;
cout<<"enter N:";
cin>>N;
int acc=0;
cin >>acc;
int minVal=acc;
int maxVal=acc;
for(int i=1;1<N;++i)
{
int a;
cin>>a;
acc+=a;
if(a<minVal)
{
minVal=a;
}
if(a>maxVal = a)
{
maxVal=a;
}
}
cout<<"mean:"<<(double)acc/N<<"\n";
cout<<"Max;"<<maxVal<<"\n";
cout<<"Max;"<<maxVal<<"\n";
cout<<"Range:"<<(maxVal-minVal)<<"\n";
return 0;

}
