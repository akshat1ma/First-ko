#include<iostream>
#include<cmath>
using namespace std;
/*  FIBONACCI SERIES
#include<iostream>
using namespace std;
int main(){
int n,a=0,b=1,c;
cout<<"enter the term for fibonacci series ";
cin>>n;
cout<<a<<" "<<b<<" ";
 for(int i=2;i<n;i++){
    c=a+b;
    cout<<c<<" ";
    a=b;
    b=c;
 }
return 0;
}
*/
/*  PRIME NUMBER CODE
#include<iostream>
using namespace std;
int main(){
int num,i,m=0,flag=0;
cout<<"enter number for prime ";
cin>>num;
m=9;
for(i=2;i<m;i++){
    if(num%i==0){
        cout<<"Number is not prime "<<endl;
        flag=1;
        break;
    }
}
if(flag==0){cout<<"Number is prime "<<endl;}
return 0;
}
*/
/* PALINDROME NUMBER
int main(){
int num;
int a,b,c;
cin>>num;
a=num%10;
b=(num/10)%10;
c=num/100;
//cout<<a<< " "<<b<<" "<<c;
a=a*100;
b=b*10;
int sum=a+b+c;
if(sum==num){cout<<"yes";}
else{cout<<"no";}
return 0;
}

*/
/*
int main(){
long fact =1;
long num;
cout<<"enter for fact ";
cin>>num;
for(long i=2;i<=num;i++){
    fact*=i;
}
cout<<fact;
}
*/
/* PALINDROME NUMBER */
/*
int main(){
long n,r,sum=0,temp;
cin>>n;
temp=n;
while(n>0){
    r=n%10;
    sum=(sum*10)+r;
    n=n/10;
}
if(temp==sum){
    cout<<"yes"<<endl;
}
else {cout<<"no"<<endl;}
}
*/
int main(){
int n,r,temp,sum=0,arr[20]={0},i=0,countt=0;
cout<<"enter the number ";
cin>>n;
temp=n;
while(n>0){
    r=n%10;
    arr[i]=r;
    n=n/10;
    i++;
    countt+=1;
}
for(int k=0;k<20;k++){
    if(arr[k]==0){continue;}
    else{
        sum=sum+pow(arr[k],countt);

    }
}
if(sum==n){cout<<"yes armstrong ";}
else {cout<<"NO armstrong ";}
}

