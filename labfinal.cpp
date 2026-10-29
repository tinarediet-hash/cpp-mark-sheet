#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main(){
	char names[5][20];
	int marks[5][3];
	int total[5];
	float average[5];

for(int i=0;i<5;i++){
	 cout<<"enter student name:";
	 cin.getline(names[i],20);
	 total[i]=0;


for(int j=0;j<3;j++){
	cout<<"enter mark"<<j+1<<":";
	cin>>marks[i][j];
	 total[i]=total[i]+marks[i][j];
}
cin.ignore(1000,'\n');
  average[i]=total[i]/3.0;
}
  int top=0;
  for(int i=1;i<5;i++){
  if(total[i]>total[top])
  top=i;
  }
  cout<<left<<setw(20)<<"names";
   cout<<setw(8)<<"mark1";
   cout<<setw(8)<<"mark2";
   cout<<setw(8)<<"mark3";
   cout<<"average"<<endl;
   for(int i=0;i<5;i++){
   	cout<<left<<setw(20)<<names[i];
   	cout<<setw(8)<<marks[i][0];
   	cout<<setw(8)<<marks[i][1];
   	cout<<setw(8)<<marks[i][2];
   	cout<<setw(8)<<total[i];
   	cout<<fixed<<setprecision(2);
   	cout<<average[i]<<endl;
   	
   }
   cout<<"\ntop student:"<<names[top]<<endl;
   cout<<"highest total:"<<total[top]<<endl;

    return 0;
    
}

