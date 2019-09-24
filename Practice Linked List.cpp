struct Node {

	int data;
	Node* link;

};

Node* head = Null; //global initialize

int main() {

	Node* ptr = new Node();
	ptr->data = 2;
	ptr->link = NULL;
	head = ptr;
	return 0;
}