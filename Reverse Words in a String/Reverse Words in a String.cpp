#include<iostream>
#include<string> 
using namespace std;

class Solution{
public:
	void reverseWords(string &s){
		int begin = 0;
		int end = s.length() - 1;
		while(begin < end){
			char temp = s[begin];
			s[begin] = s[end];
			s[end] = temp;
			begin++;
			end--;
		}
		end = s.length() - 1;
		int start = 0;
		int actStart = 0;
		actStart = s.find_first_not_of(' ', 0);
		if(actStart < 0)
		{
			s = "";
		}
		else
		{
			while(true)
			{
				if(actStart<= end && s[actStart] != ' ')
				{
					s[start] = s[actStart];
					start ++;
					actStart ++;
				}
				else
				{
					if(actStart > end)
					{
						if(start != end)
						{
							s[start] = '\0';
						}
						break;
					}
					else
					{
						actStart = s.find_first_not_of(' ', actStart);
						if(actStart < 0)
						{
							s[start] = '\0';
							break;
						}
						else
						{
							s[start] = ' ';
							start ++;
						}
						
					}
				}
			}
			s = s.substr(0, start);
			
			actStart = 0;
			int actEnd = s.find_first_of(' ', actStart);
		
				
			while(true)
			{
				if(actEnd == -1)
				{
					int tempi = actStart;
					int tempj = start - 1;
					while(tempi < tempj)
					{
						char temp = s[tempi];
						s[tempi] = s[tempj];
						s[tempj] = temp; 
						tempi ++;
						tempj --;
					}
					break;
				}
				
				int tempi = actStart;
				int tempj = actEnd - 1;
				while(tempi < tempj)
				{
					char temp = s[tempi];
					s[tempi] = s[tempj];
					s[tempj] = temp; 
					tempi ++;
					tempj --;
				}
				
				actStart = s.find_first_not_of(' ', actEnd);
				actEnd = s.find_first_of(' ', actStart) ;
			}
		}
	}	
};


int main(){
	Solution sol;
	
	string s ;
	s = "  ";
	sol.reverseWords(s);
	cout<<"^"<<s<<"^"<<endl;
	s = "    12      34    ";
	sol.reverseWords(s);
	cout<<s<<"^"<<endl;
	s = "12         34";
	sol.reverseWords(s);
		cout<<s<<"^"<<endl;
	s = "12        34         ";
	sol.reverseWords(s);
		cout<<s<<"^"<<endl;
	s = "            12      34";
	sol.reverseWords(s);
		cout<<s<<"^"<<endl;
	s = "12 34 56";
	sol.reverseWords(s);
	cout<<s<<"^"<<endl;
	return 0;
} 
