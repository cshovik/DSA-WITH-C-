//**************************************************************************************** Decimal to Binary ************************************************************************************************
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>> num;
    int rem, ans=0, mul=1;

    while (num>0)
    {
        rem = num % 2;
        num =num/2;
        ans += rem * mul ;
        mul *= 10;
    }

    cout<< ans<<endl;
}

//****************************************************************************************** Binary to decimal ****************************************************************************************************
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>> num;
    int rem, ans=0, mul=1;

    while (num>0)
    {
        rem = num % 10;
        num =num/10;
        ans += rem * mul ;
        mul *= 2;
    }

    cout<< ans<<endl;
}
//********************************************************************************************* Deci to octa ***************************************************************************************************
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>> num;
    int rem, ans=0, mul=1;

    while (num>0)
    {
        rem = num % 8;
        num =num/8;
        ans += rem * mul ;
        mul *= 10;
    }

    cout<< ans<<endl;
}
//********************************************************************************************* octa to deci ****************************************************************************************************
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>> num;
    int rem, ans=0, mul=1;

    while (num>0)
    {
        rem = num % 10;
        num =num/10;
        ans += rem * mul ;
        mul *= 8;
    }

    cout<< ans<<endl;
}

//********************************************************************************************* Binary to octa ************************************************************************************************
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>> num;
    int rem, rem1,ans=0, mul=1,mul1 =1, res=0;

  //Binary to Deci
    while (num>0)
    {
        rem = num % 10;
        num =num/10;
        ans += rem * mul ;
        mul *= 2;
    }
  //Deci to octa
    while(ans>0){
        rem1 = ans % 8;
        ans = ans/8;
        res += rem1 * mul1 ;
        mul1 *= 10;
    }
    cout<< res<<endl;
}
