#include <iostream>
using namespace std;

struct node {
	int noMhs;
	string name;
	Node* next;	
};

Node* START =NULL

void addNode() {
	int nim;
	string nama;
	Node* nodeBaru = new Node();
	cout << "Masukkan NIM: ";
	cin >> nim;
	cout << "Masukkan Nama: ";
	cin >> nama;
	nodeBaru->noMhs = nim;
	nodeBaru->name = nama;

	if (START == NULL || nim <= START->noMhs) {
		if (START != NULL && nim == START->noMhs)
		{
			cout << "NIM sudah ada" << endl;
			return;
		}
	    
		nodeBaru->next = START;
		START = nodeBaru;
		return;
	}

	Node* previous = START;
	START = nodeBaru;
	
	while ((current != NULL)  && (nim >= current->noMhs))

}