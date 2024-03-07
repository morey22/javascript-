#include <stdio.h>

int main() {
	int a,b,c;
	scanf("%d%d%d", &a,&b,&c);
	int s = a*c;
	int d = b*c;
	if(s>d){
	    printf("%d", s);
	}
	else {
	    printf("%d", d);
	}
}