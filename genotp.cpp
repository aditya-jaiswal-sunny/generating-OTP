#include<bits/stdc++.h>
using namespace std;
int otpn()
{
srand((int)time(0));
int otp[4];

for(int i=0;i<4;i++){
    otp[i]=rand()%10+1;
}
return otp[0]*1000+otp[1]*100+otp[2]*10+otp[3];
}
int main()
{
cout<<"Generating OTP......"<<endl;
cout<<"\n";
cout<<"Your One Time Password is:-   "<<otpn()<<endl;
cout<<"\n";
cout<<"It is highly confidential"<<endl;
cout<<"Do not share it with anyone"<<endl;

return 0;
}
