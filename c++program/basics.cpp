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
/*
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
if(sum!=n){cout<<"yes armstrong ";}
else {cout<<"NO armstrong ";}
}

*/
//REVERSE OF A NUMBER
/*
int main(){
int n,temp{0},r;
cout<<"enter an number ";
cin>>n;
while(n>0){
    r=n%10;
    temp=(temp*10)+r;
    n=n/10;
}
cout<<"Reversed number is "<<temp<<endl;
}
*/
//SWAP TWO NUMBER WITHOUT THIRD VARIABLE
/*
int main(){
int a,b;
cout<<"enter two number ";
cin>>a>>b;
a=a+b;
b=a-b;
a=a-b;
cout<<a<<" "<<b;
return 0;
}
*/
//MATRIX MULTIPLICATION
/*
int main(){
int mat[5][5],mat1[5][5],mat[5][5];
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cout<<"enter the element for  "<<i<<" "<<j;
        cin>>mat[i][j];
    }
}
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cout<<"enter the element for  "<<i<<" "<<j;
        cin>>mat1[i][j];
    }
}
for(int i{0};i<5;i++){
    for(int j{0};j<5;j++){
        mat2[i][j]=mat[i][j]*mat1[i][j];
    }
}
}

}
*/
int main(){
long int num,sum=0;
int r,re;
cout<<"enter the number for convert it's string ";
cin>>num;
while(num>0){
    re=num%10;
    sum=sum*10+r;
    num=num/10;
}
num=sum;
while(num>0){
r=num%10;
switch(r){
case 1:
    cout<<"one"<<" ";
    break;
case 2:
    cout<<"two"<<" ";
    break;
case 3:
    cout<<"three"<<" ";
    break;
case 4:
    cout<<"four"<<" ";
    break;
case 5:
    cout<<"five"<<" ";
    break;
case 6:
    cout<<"six"<<" ";
    break;
case 7:
    cout<<"seven"<<" ";
    break;
case 8:
    cout<<"eight"<<" ";
    break;
case 9:
    cout<<"nine"<<" ";
    break;
case 0:
    cout<<"zero"<<" ";
    break;
default:
cout<<"ttT"<<endl;
}
num=num/10;
}

}
