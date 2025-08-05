// UVA 401

#include<iostream>
#include<string>
using namespace std;

char mirror(char c){
    if(c=='A') return 'A';
    if(c=='E') return '3';
    if(c=='H') return 'H';
    if(c=='I') return 'I';
    if(c=='J') return 'L';
    if(c=='L') return 'J';
    if(c=='M') return 'M';
    if(c=='O') return 'O';
    if(c=='S') return '2';
    if(c=='T') return 'T';
    if(c=='U') return 'U';
    if(c=='V') return 'V';
    if(c=='W') return 'W';
    if(c=='X') return 'X';
    if(c=='Y') return 'Y';
    if(c=='Z') return '5';
    if(c=='1') return '1';
    if(c=='2') return 'S';
    if(c=='3') return 'E';
    if(c=='5') return 'Z';
    if(c=='8') return '8';

    return '0';
}

int main(){

    string s;
    while(cin>>s){
        int i=0, j=s.size()-1;
        bool palindrome=true;
        bool mirrored=true;
        while(i<=j){
            if(s[i]!=s[j]) palindrome=false;
            if(mirror(s[i])!=s[j]) mirrored=false;
            if(!mirrored && !palindrome) break;
            i++;j--;
        }

        if(!palindrome && !mirrored) cout<<s<<" -- is not a palindrome.\n\n";
        else if(!palindrome && mirrored) cout<<s<<" -- is a mirrored string.\n\n";
        else if(palindrome && !mirrored) cout<<s<<" -- is a regular palindrome.\n\n";
        else cout<<s<<" -- is a mirrored palindrome.\n\n";
    }

    return 0;
}