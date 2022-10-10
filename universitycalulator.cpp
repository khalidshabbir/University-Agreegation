#include<iostream>
using namespace std;
int main(){
	
cout<<"Welcome to Programming"<<endl;

cout<<"Please Enter your Matriculation Marks"<<endl;
float matric_marks=0;
float fsc_marks=0;
float nts_marks=0;
cin>>matric_marks;
cout<<"Please Enter your FSC Marks"<<endl;
cin>>fsc_marks;
cout<<"Please Enter your NTS Marks"<<endl;
cin>>nts_marks;

float matric_percentage=(matric_marks/1100)*20 ;
float fsc_percentage=(fsc_marks/1100)*30 ;
float nts_percentage=(nts_marks/90)*50 ;
cout<<"Please Enter your Matric marks 20% is : "<<matric_percentage<<"%"<<endl;
cout<<"Please Enter your FSC marks 30% is : "<<fsc_percentage<<"%"<<endl;
cout<<"Please Enter your FSC marks 30% is : "<<nts_percentage<<"%"<<endl;
float total_percentage=matric_percentage+fsc_percentage+nts_percentage;
cout<<"Total Percentage is : "<<total_percentage<<"%"<<endl;
cout<<endl;
if(total_percentage>=50){
	cout<<"Congration your can take Admition"<<endl;
	
}else{
	cout<<"Am sorry "<<endl;
}


	return 0;
}
