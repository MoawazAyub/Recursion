# include <iostream>
# include <string>
# include <math.h>

using namespace std;

bool bserch(  int s , int e , int x , int arr[])
{
	if(arr[((s + e)/2)] == x)
	{
		return true;
	}

	else if (s == e)
	{
		return false;
	}

	else if (arr[((s + e)/2)] > x)
	{
		bserch(s,((s+e)/2) - 1,x,arr);
	
	}

	else if (arr[((s + e)/2)] < x)
	{
		bserch(((s+e)/2) + 1,e,x,arr);
	
	}

}

void listNumbers1(int start, int end)
{
	if(start > end)
	{
		cout << "wrong input" <<endl;
		
	
	}
	else if(start == end)
	{
		cout << "completed " << endl;
		cout <<end<<" ";

	}

	else
	{
		listNumbers1(start+1,end);
		cout << start << " ";
	
	}

}

void listNumbers2(int start, int end)
{
	if(start > end)
	{
		cout << "wrong input" <<endl;
		
	
	}
	else if(start == end)
	{
		cout << "completed " << endl;
		cout <<end<<" ";

	}

	else
	{
		listNumbers2(start ,end - 1);
		cout << end << " ";
	
	}

}

string repeat(string s, int n)
{
	if (n == 0)
	{
		return "";
	
	}

	else if (n == 1)
	{
		return s;
	
	}

	else 
	{
		string T = repeat(s,n-1);
			return (T + s);
	
	}


}

double Harmonicsum(int n)
{
	if(n < 1)
	{
		cout << "wrong input" << endl;
		return 0;
	
	}
	else if (n == 1)
	{
		return 1;

	}

	else
	{
		double temp = Harmonicsum(n-1);
		
		return (temp + 1 / (static_cast<double>(n)));
	
	}

	


}

int sumofdigits(int n)
{
	if(n < 10)
	{
		return n;
	
	}

	else
	{
		int temp = sumofdigits(n/10);
		return (temp + n % 10);
	
	}

}
//------------------------------------
bool isvowel(char c)
{
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' )
	{
		return true;
	
	}

	else 
	{
		return false;
	
	}

}

string disemvowel(string s , int start , int end)
{
	if(start  == end + 1 )
	{
		return s;
	
	}

	

	else
	{
		string T = disemvowel(s, start + 1 , end);
		if(isvowel(s[start]) == true)
		{
			T[start] = ' ' ;
		
		}
		return T;
	
	}


}

string disemvowel(string s)
{
	return disemvowel(s,0,s.size()-1);
	
}
//------------------------------------
//-----------------------------------------
int counterdig(int n)
{
	if(n < 10)
	{
		return 1;
	}

	else
	{
		return (10 * counterdig(n/10));
	
	}

}

int reversedigit(int n)
{


	
	if(n < 10)
	{
		return n;
	
	}

	else
	{
		
		int temp = reversedigit(n / 10);
		

		return (temp + ((n%10)*counterdig(n)));

	
	}
	return n;
}
//-----------------------------------------------




void main()
{

	
	
}