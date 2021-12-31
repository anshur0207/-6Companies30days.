#include<bits/stdc++.h>
using namespace std;

#define chars 256

bool isAnagram(string str1, string str2){
    int count[chars]={0};
    int i;

    for(i=0;str1[i] && str2[i];i++){
        count[str1[i]]++;
        count[str2[i]]--;
    }

    if(str1[i] || str2[i])
        return false;

    for(i=0;i<chars;i++)
    if(count[i]){
        return false;
    }
return true;

}

void Anagrams(string arr[],int n)
{
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(isAnagram(arr[i],(arr[j])))
            cout<<arr[i]<<" is anagaram of "<<arr[j]<<endl;
        }
    }

}
 
int main(){

   string arr[] = {"anshu", "hkuihs", "abcd","khushi", "shanu"};
    int n = sizeof(arr)/sizeof(arr[0]);
    Anagrams(arr,n);
    return 0;
}