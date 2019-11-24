#include<iostream>
#include<stack>
using namespace std;
int pri (char a)
{
  if (a == '+' || a == '-')
    return 1;
  else if (a == '/' || a == '*')
    return 2;
  else
    return -1;
}

int main (int argc,const char *argv[])
{
  string str=argv[1];
  string ans;
  int l = str.length ();
  stack <char> s;
  s.push ('A');
  for (int i = 0; i < l; i++)
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	ans = ans + str[i];
      else if (str[i] == '(')
	s.push ('(');
      else if (str[i] == ')')
	{
	  while (s.top () != '(')
	    {
	      char c = s.top ();
	      ans = ans + c;
	      s.pop ();
	    }
	  if (s.top() == '(')
	    s.pop();
	}
      else
	{
	  while (s.top()!='A' && pri (str[i]) < pri (s.top ()))
	    {
	      char temp = s.top ();
	      ans = ans + temp;
	      s.pop ();
	    }
	  s.push (str[i]);
	}
    }
      while (s.top () != 'A')
	{
	  char se = s.top ();
	  ans = ans + se;
	  s.pop ();
	}

    
  cout << ans;
  return 0;
}

