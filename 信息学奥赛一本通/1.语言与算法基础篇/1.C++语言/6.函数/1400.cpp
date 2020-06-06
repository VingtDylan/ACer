#include<iostream>
#include<stdio.h>
#include<string.h> 
using namespace std;

int main(){
    string word,sentence;
    getline(cin,word);
    getline(cin,sentence);
    int len1 = word.size();
    int len2=sentence.size();
    int ans=0,index;

    for(int i = 0; i < len2; i++){
        int j;
		for(j = 0; j < len1; j++)
        {
            if(toupper(sentence[i + j]) != toupper(word[j]))	
                break;
            if(i > 0 && sentence[i - 1] != ' ')	
                break;
        }
        if(j == len1 && (sentence[i + j] == ' ' || j + i == len2)){
            ans++;
            if(ans == 1)
                index = i;
        }
    }
    if(ans)	
        cout<<ans<<" "<<index<<endl;
    else	
        cout<<"-1"<<endl;
 
    return 0;
}
