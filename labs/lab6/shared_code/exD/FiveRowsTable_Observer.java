/**
* FiveColumnTable_Observer.java
* ENSF 614 Fall 2023 LAB 6 - EXERCISE D
* @authors Braden Tink and Christian Valdez
* Submitted On: Nov 11, 2023
*/


import java.util.ArrayList;

/**
 * FiveRowsTable_Observer implements observer 
* @authors Braden Tink and Christian Valdez
 * Class has one class variable of type subject 
 *
 */
public class FiveRowsTable_Observer implements Observer{	
	Subject table;
	
	/**
	 * Constructor take in one argument of type subject which sets
	 * the local subject variable 
	 * @param tbl
	 */
	public FiveRowsTable_Observer(Subject tbl) {
		// TODO Auto-generated constructor stub
		this.table = tbl;
		table.register(this);
	}

	/**
	 * Update function takes in a data array 
	 * Function then calls display passing in the data object 
	 */	
	@Override
	public void update(ArrayList<Double> data) {
		// TODO Auto-generated method stub
		this.display(data);
	}
	
	
	/**
	 * Display function takes in one argument being the data array
	 * Then displays the data of that array 
	 * @param data
	 */
	public void display(ArrayList<Double> data) {
		System.out.println("\nNotification to Five-Column Table Observer: Data Changed:");
		int size = data.size();
		int numRows = 5;
		int numColumns = 5;
		
		for (int i = 0; i < numRows; i++) {
		    for (int j = 0; j < numColumns; j++) {
		        int index = j * numRows + i;
		        if (index < data.size()) {
		            System.out.print(data.get(index) + " ");
		        }
		    }
		    System.out.println(); // Move to the next row
		}
		
	}

}
