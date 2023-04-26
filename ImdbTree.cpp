#include <iostream>
#include <string>
#include <vector>
#include "Bridges.h"
#include "DataSource.h"
#include "data_src/ActorMovieIMDB.h"
#include <string>
#include "AVLTreeElement.h"
#include "BSTElement.h"
using namespace std;
using namespace bridges;

  /*
    Step 1: Get the Bridges USER ID and API KEY for your program 
            by creating an account and signing up (You can use any
            email): https://bridges-cs.herokuapp.com/login 
  
    Step 2: User ID (User name) and Key (API Sha1 Key) can be 
            found under Profile on the top left
  */


int main(int argc, char **argv) {

  // Step 3: Test if replit is printing the following print statement
  cout << "Bridges Extra Credit: IMDB Data in an AVL Tree \n";
  
	/* 
     Step 4: Create a Bridges object by uncommenting and inserting 
             values (from step 1 and 2) 
  */
	Bridges bridges(1, "NLS", "757558786353");

  /* 
     Step 5: Import IMDB data by referring Bridges IMDB documentation:        
            https://bridgesuncc.github.io/tutorials/Data_IMDB.html
  */
// set title
	bridges.setTitle("Accessing IMDB Data");

	// create data source object
	DataSource ds (&bridges);

	// get the actor movie IMDB data through the BRIDGES API
	vector<ActorMovieIMDB> actor_list = ds.getActorMovieIMDBData2();

	// print out the first record of the dataset
	cout << "Actor-Movie Data:" << endl
		<< "\tActor: " << actor_list[0].getActor() << endl
		<< "\tMovie: " << actor_list[0].getMovie() << endl
    << "\tGenre: " << (actor_list[0].getGenres())[0] << endl
    << "\tMovie Rating: " << actor_list[0].getMovieRating() << endl;
  /* 
     Step 6: Insert any 100 or more movies and/or actors into a Bridges BST 
             by referring to the Bridges BST documentation:        
             https://bridgesuncc.github.io/tutorials/BinarySearchTree.html
  */
// set title, description
	/*bridges.setTitle("A Simple  Binary Search Tree Example");
	bridges.setDescription("This example illustrates a binary search tree built using BRIDGES");

	// we will create the tree manually in this example

	// create the nodes
	BSTElement<int, string> *root = new BSTElement<int, string>(100);
	BSTElement<int, string> *node1 = new BSTElement<int, string>(50);
	BSTElement<int, string> *node2 = new BSTElement<int, string>(200);
	BSTElement<int, string> *node3 = new BSTElement<int, string>(250);
	BSTElement<int, string> *node4 = new BSTElement<int, string>(75);
	BSTElement<int, string> *node5 = new BSTElement<int, string>(33);

	// construct the tree
	root->setLeft(node1);
	root->setRight(node2);
	node2->setRight(node3);
	node1->setRight(node4);
    node1->setLeft(node5);

	// label the nodes 
	root->setLabel ("Root");
	node1->setLabel ("Node1");
	node2->setLabel ("Node2");
	node3->setLabel ("Node3");
	node4->setLabel ("Node4");
	node5->setLabel ("Node5");

	// privide BRIDGES a handle to the root of the tree
	bridges.setDataStructure(root);

	// visualize the binary search tree
	// Hit the 'l' key to see the node labels
	bridges.visualize();

	//cleaning up
	delete root;
	delete node1;
	delete node2;
	delete node3;
	delete node4;
	delete node5;*/
  /* 
     Step 7: Visualize this tree 
  */

	return 0;
}