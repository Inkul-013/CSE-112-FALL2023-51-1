#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int upper_case=0;
    int lower_case=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(isupper(s[i]))
        {
            upper_case++;
        }
        else
        {
            lower_case++;
        }
    }

    if(upper_case<lower_case)
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;

        }

        if(upper_case>lower_case)
        {
            for(int i=0; i<s.size(); i++)
                {
                    s[i]=toupper(s[i]);
                }
                cout<<s<<endl;
        }

                if(upper_case==lower_case)
                {
                    for(int i=0; i<s.size(); i++)
                    {
                        s[i]=tolower(s[i]);
                    }
                    cout<<s<<endl;
                }

                    return 0;
}
