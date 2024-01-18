#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
char n[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char choose;
string p1,p2;

playerone(){
    cout<<endl;
    system("Color c0");
cout<<p1<<" pick the spot"<<endl;
cout<<"Pick a spot: ";
cin>>choose;
if(choose=='1'){
n[0][0]='X';
}
else if(choose=='2'){
n[0][1]='X';
}
else if(choose=='3'){
n[0][2]='X';
}
else if(choose=='4'){
n[1][0]='X';
}
else if(choose=='5'){
n[1][1]='X';
}
else if(choose=='6'){
n[1][2]='X';
}
else if(choose=='7'){
n[2][0]='X';
}
else if(choose=='8'){
n[2][1]='X';
}
else if(choose=='9'){
n[2][2]='X';
}

}
playertwo(){
cout<<endl;
system("Color e0");
cout<<p2<<" pick the spot"<<endl;
cout<<"Pick a spot: ";
cin>>choose;
if(choose=='1'){
n[0][0]='O';
}
else if(choose=='2'){
n[0][1]='O';
}
else if(choose=='3'){
n[0][2]='O';
}
else if(choose=='4'){
n[1][0]='O';
}
else if(choose=='5'){
n[1][1]='O';
}
else if(choose=='6'){
n[1][2]='O';
}
else if(choose=='7'){
n[2][0]='O';
}
else if(choose=='8'){
n[2][1]='O';
}
else if(choose=='9'){
n[2][2]='O';
}



}




int main(){
cout<<"A player has to choose the spot with a number. The player have to press number not string"<<endl;

cout<<"Enter your name: ";
getline(cin>>ws,p1);
cout<<"Enter your name: ";
getline(cin>>ws,p2);

cout<<"---------------------------------------------"<<endl;
cout<<n[0][0]<<"\t"<<n[0][1]<<"\t"<<n[0][2]<<endl;
cout<<n[1][0]<<"\t"<<n[1][1]<<"\t"<<n[1][2]<<endl;
cout<<n[2][0]<<"\t"<<n[2][1]<<"\t"<<n[2][2]<<endl;
cout<<"----------------------------------------------"<<endl;
system("pause");
system("cls");
int i=1;
while(i<9){
playerone();
cout<<n[0][0]<<"\t"<<n[0][1]<<"\t"<<n[0][2]<<endl;
cout<<n[1][0]<<"\t"<<n[1][1]<<"\t"<<n[1][2]<<endl;
cout<<n[2][0]<<"\t"<<n[2][1]<<"\t"<<n[2][2]<<endl;
if(i==5){
    cout<<"Draw"<<endl;
    break;
}

if(n[0][0]=='X'&& n[0][1]=='X'&&n[0][2]=='X'||n[1][0]=='X'&& n[1][1]=='X'&&n[1][2]=='X'||n[2][0]=='X'&& n[2][1]=='X'&&n[2][2]=='X'||n[0][1]=='X'&& n[1][1]=='X'&&n[2][1]=='X'||n[0][2]=='X'&& n[1][2]=='X'&&n[2][2]=='X'||n[0][0]=='X'&& n[1][1]=='X'&&n[2][2]=='X'||n[0][2]=='X'&& n[1][1]=='X'&&n[2][0]=='X'){
    cout<<p1<<" Wins"<<endl;
    return 0;
}
playertwo();
cout<<n[0][0]<<"\t"<<n[0][1]<<"\t"<<n[0][2]<<endl;
cout<<n[1][0]<<"\t"<<n[1][1]<<"\t"<<n[1][2]<<endl;
cout<<n[2][0]<<"\t"<<n[2][1]<<"\t"<<n[2][2]<<endl;


if(n[0][0]=='O'&& n[0][1]=='O'&&n[0][2]=='O'||n[1][0]=='O'&& n[1][1]=='O'&&n[1][2]=='O'||n[2][0]=='O'&& n[2][1]=='O'&&n[2][2]=='O'||n[0][1]=='O'&& n[1][1]=='O'&&n[2][1]=='O'||n[0][2]=='O'&& n[1][2]=='O'&&n[2][2]=='O'||n[0][0]=='O'&& n[1][1]=='O'&&n[2][2]=='O'||n[0][2]=='O'&& n[1][1]=='O'&&n[2][0]=='O'){
    cout<<p2<<" Wins"<<endl;
    return 0;
}
i++;

}



}
