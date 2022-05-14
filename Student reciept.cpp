#include<iostream>
#include "Medi.cpp"
#include "law.cpp"
#include "Gen.cpp"
//Name{Echefu Donald Sochima}

//Name:Boye Odafe Joshua

using namespace std;
//program to help get food in Bu cafe
int main(){
	string med,id,face;
	int mplan,k,section;
		cout<<"[Welcome to BUcafe]\n\n";
	cout<<"Enter 'YES' OR 'NO'\n";
	cout<<"Do you have a Face mask?\n";
	cin>>face;
	//nested-if to check eligibility to enter cafe
		if(face == "yes"){
			cout<<"Do you have an ID card? \n";
			cin>>id;
			if(id == "yes"){
				 cout<<"Pick a Section\n";
		system("cls");
		//to clear the screen after input


	cout<<"Enter:  '1' for Medical section\n\t'2' for Law section\n\t'3' for General section \n";
	cin>>section;
	if(section <= 3){
	system("cls");
	//for loop to prevent starting from the first if statement
	
	
	//switch case for the different student types
	switch (section){
		case 1:
			medicine();
			break;
		case 2:
			law();
			break;
		case 3:
			gen();
			break;
			default:
				cout<<"Student type not available"<<endl;
				cout<<"Enter '1' to try again\n      '2' to quit\n";
				cin>>k;
				system("cls");
			break;	
				}
				
			
				
		}
		

}else{
	cout<<"Go and get your id card"<<endl;
}
}else{
	cout<<"Go and get your face mask"<<endl;
}
}


