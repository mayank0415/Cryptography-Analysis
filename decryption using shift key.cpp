#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string str;
    int key;
    int str_item;
    cout<<"Enter Decryption key and Encrypted msg"<<endl;
    cin>>key;
    getline(cin,str);
    int n = str.length();
    string encrypt_srt[n];
    for(int i = 0; i < n; i++){
        if(str[i]>=65 && str[i]<=90){
            str_item = (str[i]-key+26)%(91);
            if(str_item<65){
                encrypt_srt[i]=str_item+65;
            }
            else{ encrypt_srt[i]=str_item;}

            //cout<<str_item<<" ";
        }
        else if(str[i]>=97 && str[i]<=122){
            str_item = (str[i]-key+26)%(123);
            if(str_item<97){
                encrypt_srt[i]=str_item+97;
            }
            else{ encrypt_srt[i]=str_item;}
            //cout<<str_item<<" ";
        }
        else{
            encrypt_srt[i]=str[i];
            //cout<<str[i]<<" ";
            }
    }

    // print encrypted string
    for(int i=0;i<n;i++){
        cout<<encrypt_srt[i];
    }
}
