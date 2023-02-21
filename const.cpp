#include<iostream>
using namespace std;
class Room {	
	public:
		int l,h;
		void set() {
			cout<<"Enter Length : ";
			cin>>l;
			cout<<"Enter Height : ";
			cin>>h;
		}
		void cal() {
			int c = l*h;
			cout<<"Room Size : "<<c<<endl;
		}
};
class House {
	public:
		int count;
		void set(){
			cout<<"Enter Rooms Count : ";
			cin>>count;
		}
		void print(){
			cout<<"Number of Rooms : "<<count<<endl;
		}
};

main() {	
	Room m;
	House h;
	m.set();
	h.set();
	m.cal();
	h.print();
	
}

