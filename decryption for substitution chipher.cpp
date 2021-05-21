#include <iostream>
#include <bits/stdc++.h>
#include <map>
#include <algorithm>
#define vi vector<long long>
#define loop(i,a,b) for(int i=a;i<=b;i++)
#define pb push_back
#define ll long long
using namespace std;

void dcrypt_str(string &str){
    for(size_t i=0;i<str.size();i++){
        if((str[i]%64 <= 26)||(str[i]%96 <= 26)){
            if((str[i]=='a')||(str[i]=='A')){str[i]='d'; continue;}
            if((str[i]=='b')||(str[i]=='B')){str[i]='l'; continue;}
            if((str[i]=='c')||(str[i]=='C')){str[i]='r'; continue;}
            if((str[i]=='d')||(str[i]=='D')){str[i]='y'; continue;}
            if((str[i]=='e')||(str[i]=='E')){str[i]='v'; continue;}
            if((str[i]=='f')||(str[i]=='F')){str[i]='o'; continue;}
            if((str[i]=='g')||(str[i]=='G')){str[i]='h'; continue;}
            if((str[i]=='h')||(str[i]=='H')){str[i]='e'; continue;}
            if((str[i]=='i')||(str[i]=='I')){str[i]='z'; continue;}
            if((str[i]=='j')||(str[i]=='J')){str[i]='x'; continue;}
            if((str[i]=='k')||(str[i]=='K')){str[i]='w'; continue;}
            if((str[i]=='l')||(str[i]=='L')){str[i]='p'; continue;}
            if((str[i]=='m')||(str[i]=='M')){str[i]='t'; continue;}
            if((str[i]=='n')||(str[i]=='N')){str[i]='b'; continue;}
            if((str[i]=='o')||(str[i]=='O')){str[i]='g'; continue;}
            if((str[i]=='p')||(str[i]=='P')){str[i]='f'; continue;}
            if((str[i]=='q')||(str[i]=='Q')){str[i]='j'; continue;}
            if((str[i]=='r')||(str[i]=='R')){str[i]='q'; continue;}
            if((str[i]=='s')||(str[i]=='S')){str[i]='n'; continue;}
            if((str[i]=='t')||(str[i]=='T')){str[i]='m'; continue;}
            if((str[i]=='u')||(str[i]=='U')){str[i]='u'; continue;}
            if((str[i]=='v')||(str[i]=='V')){str[i]='s'; continue;}
            if((str[i]=='w')||(str[i]=='W')){str[i]='k'; continue;}
            if((str[i]=='x')||(str[i]=='X')){str[i]='a'; continue;}
            if((str[i]=='y')||(str[i]=='Y')){str[i]='c'; continue;}
            if((str[i]=='z')||(str[i]=='Z')){str[i]='i'; continue;}
        }

    }


}

int main() {
    string str;
    getline(cin, str);
    dcrypt_str(str);
    for(size_t i=0;i<str.size();i++){
        cout<<str[i];
    }

}
