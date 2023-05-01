#include<stdio.h>
int main(){
	long long int a=0;
	char s[10];
	scanf("%s",s);
	switch(s[0]){
		case 'b':
			if(s[2]=='u')
				a+=60;
			if(s[2]=='o')
				a+=10;
			break;
		case 'r':
			a+=20;
			break;
		case 'o':
			a+=30;
			break;
		case 'y':
			a+=40;
			break;
		case 'g':
			if(s[3]=='e')
				a+=50;
			if(s[3]=='y')
				a+=80;
			break;
		case 'v':
			a+=70;
			break;
		case 'w':
			a+=90;
			break;
	}
	scanf("%s",s);
	switch(s[0]){
		case 'b':
			if(s[2]=='u')
				a+=6;
			if(s[2]=='o')
				a+=1;
			break;
		case 'r':
			a+=2;
			break;
		case 'o':
			a+=3;
			break;
		case 'y':
			a+=4;
			break;
		case 'g':
			if(s[3]=='e')
				a+=5;
			if(s[3]=='y')
				a+=8;
			break;
		case 'v':
			a+=7;
			break;
		case 'w':
			a+=9;
			break;
	}
	scanf("%s",s);
	switch(s[0]){
		case 'b':
			if(s[2]=='u')
				a*=1000000;
			if(s[2]=='o')
				a*=10;
			break;
		case 'r':
			a*=100;
			break;
		case 'o':
			a*=1000;
			break;
		case 'y':
			a*=10000;
			break;
		case 'g':
			if(s[3]=='e')
				a*=100000;
			if(s[3]=='y')
				a*=100000000;
			break;
		case 'v':
			a*=10000000;
			break;
		case 'w':
			a*=1000000000;
			break;
	}
	printf("%lld",a);
}