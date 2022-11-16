#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	char s[1020];
	scanf("%d", &t);
	for (int k = 0; k < t; ++k)
	{
	    scanf("%d", &n);
	    for (int x = 0; x < n; ++x)
	    {
	        scanf("%c", &s[x]);    
	    }
	    
	    int half = n / 2;
	    int i = n - 1;
	    int j = half - 1;
	    bool yes = true;
	    while (i >= half && j >= 0)
	    {
	        if (s[j] == s[i])
	        {
	            continue;
	        }
	        else
	        {
	            yes = false;
	            break;
	        }
	        i--;
	        j--;
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
