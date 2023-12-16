/**
* OneRow_Observer.java
* ENSF 614 Fall 2023 LAB 6 - EXERCISE D
* @authors Braden Tink and Christian Valdez
* Submitted On: Nov 11, 2023
*/

import java.util.ArrayList;

/**
 * OneRow_Observer implements observer 
* @authors Braden Tink and Christian Valdez
 * Has one class varialbe which of type subject 
 */
public class OneRow_Observer implements Observer {

	Subject table;
	
	/**
	 * Constructor of the class which takes one argument of type subject 
	 * Then sets the table class variable 
	 * @param tbl
	 */
	public OneRow_Observer(Subject tbl) {
		// TODO Auto-generated constructor stub
		this.table = tbl;
		table.register(this);
	}

	
	/**
	 * update function which takes one argument being the arraylist data 
	 * array
	 * 
	 * Function then calls update passing in the data array 
	 */
	@Override
	public void update(ArrayList<Double> data) {
		// TODO Auto-generated method stub
		this.display(data);
	}
	
	
	/**
	 * Display function displays the data of the array list 
	 * 
	 * @param data
	 */
	public void display(ArrayList<Double> data) {
		System.out.println("\nNotification to One-Column Table Observer: Data Changed:");
		
		int size = data.size();
		
		for(int i = 0; i < size;i++){
			
			System.out.print(data.get(i) + " ");
		}
	
		System.out.println();
	}
}

