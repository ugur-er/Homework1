// C++ implementation of the approach
using namespace std;

// Structure to implement a node of a BST
template <typename T>
struct Node {

	// The data content of the node
	T data;

	// Link to the left child
	Node* left;

	// Link to the right child
	Node* right;

public:
	// Function to print the inorder
	// traversal of the BST
	void inorder(Node* r);

	/*
		Function to check if BST contains a node
		with the given data
		
		@param r pointer to the root node
		@param d the data to search
		@return 1 if the node is present else 0
	*/
	int containsNode(Node* r, T d);

	/*
		Function to insert a node with
		given data into the BST
		
		@param r pointer to the root node
		@param d the data to insert
		@return pointer to the root of the resultant BST
	*/
	Node* insert(Node* r, T d);
};

// Class to implement a Set using BST
template <typename T>
class Set {

	// Pointer to the root of the
	// BST storing the set data
	Node<T>* root;

	// The number of elements in the set
	int size;

public:
	// Default constructor
	Set();

	// Copy constructor
	Set(const Set& s);
	/*
		Function to Add an element to the set

		@param data the element to add to the set
	*/
	void add(const T data);

	/*
		Function to compute the union of two sets
		
		@param s set to find union with
		@return the union set
	*/
	Set unionSet(Set& s);

	/**
		Computes the intersection of two sets
		
		@param s the set to find intersection with
		@return the intersection set
	*/
	Set intersectionSet(Set& s);

	/*
		Function to compute the complement of the set
		
		@param U the universal set
		@return the complement set
	*/
	Set complementSet(Set& U);

	/*
		Function to compute the difference of two sets
		
		@param s the set to be subtracted
		@return the difference set
	*/
	Set operator-(Set& s);

	/*
		Function that checks equality of two sets
		
		@param s set to check equality with
		@return boolean value denoting result of check
	*/
	bool operator==(Set& s);

	/*
		Function to print the cartesian product of two sets
		
		@param s the set to find product with
	*/
	void displayProduct(Set& s);

	// Function to print power set of the set
	void displayPowerSet();

	/*
		Function to convert the set into an array
		
		@return array of set elements
	*/
	T* toArray();

	/*
		Function to check whether the set contains an element
		
		@param data the element to search
		@return relut of check
	*/
	bool contains(T data);

	// Function to print the contents of the set
	void displaySet();

	/*
		Function to return the current size of the Set
		
		@return size of set
	*/
	int getSize();
};
