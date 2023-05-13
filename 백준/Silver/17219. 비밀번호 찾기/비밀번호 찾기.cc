#include<stdio.h>
#include<string.h>
#include<map>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){ 	
	int s,d;
	map<string, string> m;
	scanf("%d %d",&s,&d);
	char q[21],w[21];
	for(int i=0;i<s;i++){
		scanf("%s %s",q,w);
		m[q]=w;
		
	}
	char f[21];
	for(int i=0;i<d;i++){
		scanf("%s",f);
		cout << m[f] << endl;	
	}
}