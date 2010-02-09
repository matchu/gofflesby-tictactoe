#include <iostream> 
using namespace std; int main(){int w=0,x,b[3][3]={0,0,0,0,0,0,0,0,0};
for(int i=0;i<9;i++){x=getchar();if(!b[(x-49)/3][(x-49)%3]) b[(x-49)/3][(x-49)%3]=(i%2)+1;
for(int j=0;j<3;j++){if(b[j][0]==b[j][1]&&b[j][1]==b[j][2])w=max(w,b[j][0]);
if(b[0][j]==b[1][j]&&b[1][j]==b[2][j])w=max(w,b[0][j]);}
if(b[0][0]==b[1][1]&&b[1][1]==b[2][2])w=max(w,b[0][0]);
if(b[0][2]==b[1][1]&&b[1][1]==b[2][0])w=max(w,b[0][2]);
if(w)break;}cout<<"Winner: ";w?cout<<(char)(79+(9*(w%2))):cout<<"Nobody";
for(int i=0;i<3;i++){cout<<"\n";for (int j=0;j<3;j++){b[i][j]?b[i][j]==1?cout<<"X":cout<<"O":cout<<" ";if(j<2)cout<<"|";}if(i<2)cout<<"\n-+-+-";}}
