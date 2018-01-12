#include<bits/stdc++.h>

using namespace std;

int n;

string XOR(string A,string B)
{
    int a,b,i;
    string C,SUM;
    for(i=0;i<n;i++)
    {
        a=A[i]-'0';
        b=B[i]-'0';
        if(a==1 && b==1)
        {
            C="0";
        }
        if(a==1 && b==0)
        {
            C="1";
        }
        if(a==0 && b==1)
        {
            C="1";
        }
        if(a==0 && b==0)
        {
            C="0";
        }
        SUM+=C;
    }
    return SUM;
}
string AND(string A,string B)
{
    int a,b,i;
    string E,CARRY;
    for(i=0;i<n;i++)
    {
        a=A[i]-'0';
        b=B[i]-'0';
        if(a==1 && b==1)
        {
            E="1";
        }
        if(a==1 && b==0)
        {
            E="0";
        }
        if(a==0 && b==1)
        {
            E="0";
        }
        if(a==0 && b==0)
        {
            E="0";
        }
        CARRY+=E;
    }
    return CARRY;
}
string summation(string A,string B)
{

    int i,l5,carry;
    while(1)
    {
    string SUM,CARRY,G;
    cout<<"A = "<<A<<endl;
    cout<<"B = "<<B<<endl;

    SUM=XOR(A,B);
    cout<<"SUM = "<<SUM<<endl;

    CARRY=AND(A,B);
    cout<<"CARRY = "<<CARRY<<endl;

    G=CARRY+"0";
    l5=G.length();

    carry=0;
    for(i=0;i<l5;i++)
    {
        carry+=G[i]-'0';
    }
    cout<<"carry = "<<carry<<endl;
    if(carry==0)
    {
        cout<<"\nSum = "<<SUM<<endl;
        return SUM;
        break;
    }

    while(l5>n && G[0]=='0')
    {
        for(i=0;i<l5-1;i++)
        {
            G[i]=G[i+1];
        }
        G[l5-1]=0;
        l5-=1;
        if(n==9)
        {
            n=8;
        }
    }
    cout<<"After Left Shifting = "<<G<<endl<<endl;
    if(l5>8)
    {
        cout<<"\nCarry is large then 8 bit...\n";
        if(l5==9)
        {
            SUM="0"+SUM;
            n=9;
        }
        else
        {
            break;
        }
    }

    A=SUM;
    B=G;
    }
}
string two_component_of_nunmber(string B)
{
    int i;
    for(i=0;i<8;i++)
        {
            if(B[i]=='0')
            {
                B[i]='1';
            }
            else
            {
                B[i]='0';
            }
        }
    cout<<"One's Component of B : "<<B<<endl<<endl;
    B=summation(B,"00000001");
    cout<<"Two's Component of B : "<<B<<endl<<endl;
    return B;
}
string subtraction(string A,string B)
{
    string SUBSTRACT;
    int s;

    B=two_component_of_nunmber(B);

        SUBSTRACT=summation(A,B);
        s=SUBSTRACT.length();
        if(s==9)
        {
            SUBSTRACT[0]=0;
        }
        cout<<"\nSubtraction = "<<SUBSTRACT<<endl;
        return SUBSTRACT;
}
int bin_to_dec(int B)
{
    int i,j,digit=0;
    int array[50];
    int n,num,dec=0;

    num=B;
    while(num>0)
    {
        num=num/10;
        digit++;
    }

    for(i=digit-1;i>=0;i--)
    {
        array[i]=B%10;
        B/=10;
    }
    for(i=0;i<digit;i++)
    {
        for(j=1;j<(digit-i);j++)
        {
            array[i]=2*array[i];
        }
    }
    for(i=0;i<digit;i++)
    {
        dec=dec+array[i];
    }
    printf("Converted Decimal number of 2nd Binary Number = %d\n\n",dec);
    return dec;
}
int main()
{
    string A,C,E,SUM,SUBSTRACT,MULTIPLE;
    int B,i,l1,l2,x,y,m;
    n=8;

    printf("Enter 2 Binary Numbers. which are less or equal 4 bit. Please Enter larger number at first...\n\n");
    getline(cin,A);
    scanf("%d",&B);
    l1=A.length();

    if(l1>8)
    {
        cout<<"\nInput is out of limit...\n\n";
    }
    else
    {
        if(l1<8)
        {
            x=8-l1;
            for(i=0;i<x;i++)
            {
                C+="0";
            }
            A=C+A;
            cout<<"\nInput in 8 bit : "<<A<<endl;
        }
        m=bin_to_dec(B);
        for(i=0;i<m-1;i++)
        {
            MULTIPLE=summation(A,A);
            A=MULTIPLE;
        }
        /*SUM=summation(A,B);
        SUBSTRACT=subtraction(A,B);
        cout<<"\n\nFinal Sum = "<<SUM<<endl;
        cout<<"\nFinal Subtraction = "<<SUBSTRACT<<endl<<endl;*/
        cout<<"\nFinal Multiplication = "<<MULTIPLE<<endl<<endl;
    }
    main();
    return 0;
}

