#include<iostream>
using namespace std;
void gen();

void gen(){
	string gen;
	int mplan,k;
	for(k=1;k<2;){
		cout<<"[Welcome to General section]\n\n";
				cout<<"Input '1' for Breakfast\n '2' for Lunch\n '3' for Dinner\n";
			    cin>>mplan;
				cout<<"Enter 'Yes' if you are a Vegetarian\n      'No' if you are not\n";
				cin>>gen;
				system("cls");
				if(gen == "yes"){
					cout<<"_______________________________________\n";
				cout<<"|            Babcock Cafe\t       |\n";
				cout<<"|______________________________________|\n";
				cout<<"|Student type:General\t\t       |\n";
				cout<<"|Meal Plan:";
						if(mplan<=0 || mplan>3){
					cout<<"Meal type not available     |\n";
				}else{if(mplan == 1){
					cout<<"Breakfast\t\t       |\n";
				}else{if(mplan == 2){
					cout<<"Lunch\t               |\n";
				}else{if(mplan == 3){
					cout<<"Dinner\t\t       |\n";
				}
				}
				}
				}
				cout<<"|Meal Description:Vegetarian\t       |\n";
				cout<<"|Food Type:";
				if(mplan<=0 || mplan>3){
				cout<<"Food not available\t       |\n";
				}else{if(mplan == 1){
					cout<<"Bread,egg and tea\t       |\n";
				}else{if(mplan == 2){
					cout<<"Gbadun Rice and Tofu        |\n";
				}else{if(mplan == 3){
					cout<<"Moimoi and Eko\t       |\n";
				}
				}
				}
				}
				cout<<"|______________________________________|\n";
				cout<<"|   The future is bright...            |\n";
				cout<<"|______________________________________|\n\n\n";
				cout<<"Do you want another food?\n";
			    cout<<"Enter [1] - To Take another meal\n      [2] - To quit\n";
			    cin>>k;
				system("cls");
					}else{
						cout<<"_______________________________________\n";
				cout<<"|            Babcock Cafe\t       |\n";
				cout<<"|______________________________________|\n";
				cout<<"|Student type:General\t\t       |\n";
				cout<<"|Meal Plan:";
						if(mplan<=0 || mplan>3){
					cout<<"Meal type not available     |\n";
				}else{if(mplan == 1){
					cout<<"Breakfast\t\t       |\n";
				}else{if(mplan == 2){
					cout<<"Lunch\t               |\n";
				}else{if(mplan == 3){
					cout<<"Dinner\t\t       |\n";
				}
				}
				}
				}
				cout<<"|Meal Description:Non-vegetarian       |\n";
				cout<<"|Food Type:";
				if(mplan<=0 || mplan>3){
					cout<<"Food not available\t      |\n";
				}else{if(mplan == 1){
					cout<<"Bread and tea\t       |\n";
				}else{if(mplan == 2){
					cout<<"Rice and beans\t       |\n";
				}else{if(mplan == 3){
					cout<<"Yam and Vegeable stew       |\n";
				}
				}
				}
				}
				cout<<"|______________________________________|\n";
				cout<<"|   The future is bright...            |\n";
				cout<<"|______________________________________|\n\n\n";
				cout<<"Do you want another food?\n";
			    cout<<"Enter [1] - To Take another meal\n      [2] - To quit\n";
			    cin>>k;
				system("cls");
					}
				}
	}

