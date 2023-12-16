/**
* Observer.java
* ENSF 614 Fall 2023 LAB 6 - EXERCISE D
* @authors Braden Tink and Christian Valdez
* Submitted On: Nov 11, 2023
*/
import java.util.ArrayList;

/**
 * Observer is an interface class with one function update 
 * Which is implemented in another class
* @authors Braden Tink and Christian Valdez
 *
 */
interface Observer{
	
	public void update(ArrayList<Double> data);
	

}
