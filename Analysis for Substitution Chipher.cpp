#include <iostream>
#include <bits/stdc++.h>
#include <map>
#include <algorithm>
#define vi vector<long long>
#define loop(i,a,b) for(int i=a;i<=b;i++)
#define pb push_back
#define ll long long
using namespace std;

void histogram(string &str){
    int arr[26]={0};
    int temp=0;
    size_t i=0;
    while(i<str.size()){
        if(str[i]>64 and str[i]<91){
            temp = str[i]-65;
            arr[temp]++;
        }
        else if(str[i]>96 and str[i]<123){
            temp = str[i]-97;
            arr[temp]++;
        }
        i++;
    }
    for(int i=0;i<26;i++){
        printf("%c",i+97);
        cout<<'='<<arr[i]<<endl;
    }


}

int main() {
    string str;
    getline(cin, str);
    histogram(str);
    int n;
    n = str.size();
    char str_item;
    char ch,that;
    cin>>ch>>that;
    vector<string> new_str(n,"*");
    for(int i=0;i<n;i++){
        if(str[i]<65 or str[i]>122 or (str[i]>90 and str[i]<97)){
            str_item = str[i];
            new_str[i] = str_item;
        }
    }
    // Put ch equal to that in whole string
    while(ch != -1 and that != -1){
            for(int i=0;i<n;i++){
                cout<<str[i];
            }
            cout<<endl<<endl;
            for(int i=0;i<n;i++){
                if(((str[i]%64) == (ch%96)) or ((str[i]%96) == (ch%96))){
                    new_str[i] = that;
                }
            cout<<new_str[i];
            }
        cout<<endl;
        cin>>ch>>that;
    }


}
