#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	string s;
	scanf("%d", &t);
	for (int k = 0; k < t; ++k)
	{
	    scanf("%d", &n);
	    cin >> s;
	    //cout << s << endl;
	    int half = n / 2;
	    int i = 0;
	    int j = half;
	    bool yes = true;
	   	while (i <= half - 1 && j <= n - 1)
		{
			if (s[i] == s[j])
			{
				i++;
				j++;
				continue;
			}
			else
			{
				yes = false;
				break;
			}
		}
	    if (yes)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}
