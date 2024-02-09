#include<iostream>
using namespace std;

int getLength(char name[]){
    int length = 0;
    int i = 0;
    while(name[i] != '\0'){
        if(name[i] == ' '){
            i++;
            continue;
        }
        length++;
        i++;
    }
    return length;
}

void reverseString(char name[]){
    int length = getLength(name);
    int i = 0;
    int j = length - 1;
    while(i != j){
        swap(name[i], name[j]);
        i++;
        j--;
    }
    cout<<name<<endl;
}

void replaceSpaces(char name[]){
    int i = 0;
    while(name[i] != '\0'){
        if(name[i] == ' '){
            name[i] = '@';
            i++;
        }
        i++;
    }
    cout<<name<<endl;
}

bool isPalindrome(char word[]){
    int i = 0;
    int j = getLength(word) - 1;
    while(i <= j){
        if(word[i] != word[j]){ 
            return false;
        }else{
            i++;
            j--;
        }
    }
    return true;
}

void toUppercase(char word[100]){
    for(int i=0;i<getLength(word);i++){
        if(word[i] >= 'a' && word[i]<='z'){
        word[i] = word[i] - 32;
        }
    }
}

int main() {
    char word[100];
    cin>>word;
    toUppercase(word);
    cout<<word<<endl;

    // char word[100];
    // cin>>word;
    // if(isPalindrome(word)){
    //     cout<<"True"<<endl;
    // }else{
    //     cout<<"False"<<endl;
    // }

    // char name[100];
    // cin.getline(name, 100);
    // replaceSpaces(name);

    // char name[100];
    // cin>>name;
    // reverseString(name);

    // char name[100];
    // cin.getline(name, 100);
    // int ans = getLength(name);
    // cout<<"Length of "<<name<<" is "<<ans<<endl;

    // char name[100];
    // cin>>name;
    // cout<<"Your name is "<<name<<endl;

    // char name[4];
    // cout<<"Enter your name: "<<endl;
    // cin>>name;
    // for(int i=0;i<4;i++){
    //     cout<<"At index "<< i <<" Value is "<<name[i]<<endl;
    // }

    return 0;
}