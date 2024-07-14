//version 1
#include<iostream>
using namespace std;

string single(int num)
{
   
    if(num==1)
    {
        return "One";
    }
    if(num==2)
    {
        return "Two";
    }
    if(num==3)
    {
        return "Three";
    }
    if(num==4)
    {
        return "Four";
    }
    if(num==5)
    {
        return "Five";
    }
    if(num==6)
    {
        return "Six";
    }
    if(num==7)
    {
        return "Seven";
    }
    if(num==8)
    {
        return "Eight";
    }
    if(num==9)
    {
        return "Nine";
    }
    if(num==10)
    {
        return "Ten";
    }
    if(num==11)
    {
        return "Eleven";
    }
    if(num==12)
    {
        return "Twelve";
    }
    if(num==13)
    {
        return "Thirteen";
    }
    if(num==14)
    {
        return "Fourteen";
    }
    if(num==15)
    {
        return "Fifteen";
    }
    if(num==16)
    {
        return "Sixteen";
    }
    if(num==17)
    {
        return "Seventeen";
    }
    if(num==18)
    {
        return "Eighteen";
    }
    if(num==19)
    {
        return "Nineteen";
    }
    if(num==20)
    {
        return "twenty";
    }
    return "";

}
string numberToWords(int num)
{
    int c=0, n=num;
        int rem;

        
        while(n>0)
        {
            c++;
            n/=10;
        }
        if(c==0)
        {
            return "Zero";
        }
        
        if(c==1)
        {
            return single(num);
            
        }
        if(c==2)
        {
            rem = num%10;
            int x= num/10;
            if(x<2)
            {
                return single(num);
                
            }
            if(x==2)
            {
                return (rem==0)?"Twenty":("Twenty " + single(num%10) );
            }
            if(x==3)
            {
                return (rem==0)?"Thirty":("Thirty "+ single(num%10));
            }
            if(x==4)
            {
                return (rem==0)?"Forty":("Forty "+ single(num%10));
            }
            if(x==5)
            {
                return (rem==0)?"Fifty":("Fifty "+ single(num%10));
            }
            if(x==6)
            {
                return (rem==0)?"Sixty":("Sixty "+ single(num%10));
            }
            if(x==7)
            {
                return (rem==0)?"Seventy":("Seventy "+ single(num%10));
            }
            if(x==8)
            {
                return (rem==0)?"Eighty":("Eighty " + single(num%10));
            }
            if(x==9)
            {
                return (rem==0)?"Ninety":("Ninety " + single(num%10));
            }
        }
        if(c==3)
        {
            rem = num % 100;
            return (rem==0)?(numberToWords(num/100) + " Hundred"):(numberToWords(num/100) + " Hundred " + numberToWords(rem));
            

        }
        if(c==4||c==5||c==6)
        {
            rem = num % 1000;
            return (rem==0)?(numberToWords(num/1000) + " Thousand"):(numberToWords(num/1000) + " Thousand " + numberToWords(rem));
        }
        
        if(c==7||c==8||c==9)
        {
            rem = num%1000000;
            return (rem==0)?(numberToWords(num/1000000) + " Million"):(numberToWords(num/1000000) + " Million " + numberToWords(rem));
        }
        if(c==10||c==11||c==12)
        {
            rem = num%1000000000;
            return (rem==0)?(numberToWords(num/1000000000) + " Billion"):(numberToWords(num/1000000000) + " Billion " + numberToWords(rem));
        }

            
        return "";    

}
int main()
{
    int num;
    cout<<"Enter number\n";
    cin>>num;
    cout<<numberToWords(num)<<endl;


}