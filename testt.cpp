#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void SortAlphaNumericString(string str)
{
string result="",temp;
int i=0;
for(;i<str.length();)
{
temp="";
if(str[i]>='A'&&str[i]<='Z')
{
while(i<str.length()&&str[i]>='A'&&str[i]<='Z')
{
temp=temp+str[i];
i++;
}
}
else
{
while(i<str.length()&&str[i]>='0'&&str[i]<='9')
{
temp=temp+str[i];
i++;
}
}
sort(temp.begin(),temp.end());
result=result+temp;
}
cout<<result<<"\n";

}
int main()
{
string str;
cin>>str;
SortAlphaNumericString( str);
return 0;
}
