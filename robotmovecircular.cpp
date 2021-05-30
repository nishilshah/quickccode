// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string isCircular(string path);

int main(){
    int t;
    cin >> t;
    while(t--){
        string path;
        cin >> path;
        cout << isCircular(path) << endl;
    }
return 0;
}// } Driver Code Ends


string isCircular(string s){
    //complete the function here
    int x=0,y=0;
    char current_direc='n';
    
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='G')
        {                                   
            if(current_direc=='n')
            {
                y++;
            }
            
            else if(current_direc=='s')
            {
                y--;
            }
    
            else if(current_direc=='e')
            {
                x++;
            }
    
            else if(current_direc=='w')
            {
                x--;
            }
        }
    
        if(s[i]=='L')
        {
            if(current_direc=='n')
            {
                current_direc='w';
            }
            else if(current_direc=='s')
            {
                current_direc='e';
            }
            else if(current_direc=='e')
            {
                current_direc='n';
            }
            else if(current_direc=='w')
            {
                current_direc='s';
            }
        }    
    
        if(s[i]=='R')
        {
            if(current_direc=='n')
            {
                current_direc='e';
            }
            else if(current_direc=='s')
            {
                current_direc='w';
            }
            else if(current_direc=='e')
            {
                current_direc='s';
            }
            else if(current_direc=='w')
            {
                current_direc='n';
            }
        }
    
    }
    
    if(x==0&&y==0)
      cout<<"Circular";
    else
      cout<<"Not Circular";
}
