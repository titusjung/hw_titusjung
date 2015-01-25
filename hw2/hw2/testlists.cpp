#include "llistdbl.h"
#include <iostream>
#include <cstdlib>

using namespace std;

//program designed to test list functions  insert and remove;

void printlist(LListDbl* list);

int main(){
	LListDbl list1();

	list1.remove(2)
	cout<<"remove tested in empty case"<<endl;
	printlist(list1);

	list.insert(3, 4)
	cout<<"insert tested in empty case"<<endl;
	printlist(list1);

	list.insert(1,3);
	if(list.get(1))==3){
		cout<<"success item added to back"<<endl;
	}
	else{
		cout<<"fail item add to back"<<endl;
	}
	printlist(list1);

	list.insert(0,5)
	if(list.get(0))==5){
		cout<<"success item added to front"<<endl;
	}
	else{
		cout<<"fail item add to front"<<endl;
	}	
	printlist(list1);

	list.insert(list.size()/2,8)
	if(list.get(list.size()/2))==8){
		cout<<"success item added to middle"<<endl;
	}
	else{
		cout<<"fail item add to middle"<<endl;
	}	
	printlist(list1);


}


//prints out all items' value with index values and gives size of list
void printlist(LListDbl* list){
	cout<<"printout for items in list"<<endl;
	for( int i =0; i<list->size(); i++){
		cout<<" Value for "<< i<< "item is "<<list->get(i)<<endl;
	}
	cout<"Size "<<list.size()<endl;

}